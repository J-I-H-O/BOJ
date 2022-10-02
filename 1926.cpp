#include <iostream>
#include <utility>
#include <queue>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, m;
  int num_pic = 0, max_pic = 0;
  int map[501][501] = {0,};
  int dx[] = {1, 0, -1, 0};
  int dy[] = {0, 1, 0, -1};
  bool visit[501][501] = {false,};
  queue<pair<int, int>> queue;

  // 입력 받기
  cin >> n >> m;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      cin >> map[i][j];
    }
  }

  // BFS 수행
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      // 이미 방문한 칸이거나, 막혀있는 경우 건너뜀
      if(visit[i][j] || map[i][j] == 0) continue;

      // 현재 그림의 크기 측정
      int temp_size = 0;

      // BFS
      num_pic++;
      visit[i][j] = true;
      queue.push({i, j});
      while(!queue.empty()) {
        pair<int, int> cur = queue.front();
        queue.pop();
        temp_size++;

        for(int k = 0; k < 4; k++) {
          int curX = cur.first + dx[k];
          int curY = cur.second + dy[k];

          // boundary, visit check
          if(curX < 0 || curY < 0 || curX >= n || curY >= m) continue;
          if(visit[curX][curY]) continue;
          if(map[curX][curY] == 0) continue;

          visit[curX][curY] = true;
          queue.push({curX, curY});
        }
      }
      if(max_pic < temp_size) max_pic = temp_size;
    }
  }

  cout << num_pic << '\n';
  cout << max_pic << '\n';

  return 0;
}