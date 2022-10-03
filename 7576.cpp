#include <iostream>
#include <queue>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, m;
  int box[1001][1001];
  int distance[1001][1001] = {0,};
  int dx[4] = {1, 0, -1, 0};
  int dy[4] = {0, 1, 0, -1};
  int dist = 0;
  int ans = 0;
  queue<pair<int, int>> queue;

  cin >> n >> m;

  for(int i = 0; i < m; i++) {
    for(int j = 0; j < n; j++) {
      cin >> box[i][j];
      // 익은 토마토는 큐에 삽입. 이렇게 해주면 익지 않은 토마토들은 가장 인접한 익은 토마토로부터 영향을 받는다.
      if(box[i][j] == 1) {
        queue.push({i, j});
      }
      if(box[i][j] == 0) 
        distance[i][j] = -1;
    }
  } 

  // BFS
  while(!queue.empty()) {
    pair<int, int> cur = queue.front();
    queue.pop();
    dist = distance[cur.first][cur.second] + 1;

    for(int k = 0; k < 4; k++) {
      int curX = cur.first + dx[k];
      int curY = cur.second + dy[k];

      if(curX >= m || curY >= n || curX < 0 || curY < 0) continue;
      // 이미 방문한 토마토 또는 입력시 이미 익은 토마토
      if(distance[curX][curY] >= 0) continue;
  
      distance[curX][curY] = dist;
      queue.push({curX, curY});
    }
  }

  // box를 모두 순회하며, 익지 못한 토마토를 검출하고 최대 distance를 구하는 과정
  for(int i = 0; i < m; i++) {
    for(int j = 0; j < n; j++) {
      // 토마토가 모두 익지는 못하는 상황
      if(distance[i][j] == -1) {
        cout << -1;
        exit(0);
      }
      ans = max(ans, distance[i][j]);
    }
  }
  cout << ans;

  return 0;
}