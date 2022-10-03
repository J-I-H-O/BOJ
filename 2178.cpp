#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
  string input;
  queue<pair<int, int>> queue;
  char board[101][101];
  int distance[101][101] = {0,};
  int dx[4] = {1, 0, -1, 0};
  int dy[4] = {0, 1, 0, -1};
  int n, m;
  int dist = 1;

  cin >> n >> m;

  // board initialization
  for(int i = 0; i < n; i++) {
    cin >> input;
    for(int j = 0; j < m; j++) {
      board[i][j] = input[j];
    }
  }

  queue.push({0,0});
  distance[0][0] = 1;
  while(!queue.empty()) {
    pair<int, int> cur = queue.front();
    queue.pop();

    dist = distance[cur.first][cur.second] + 1;
    for(int i = 0; i < 4; i++) {
      int curX = cur.first + dx[i];
      int curY = cur.second + dy[i];

      // boundary check
      if(curX >= n || curY >= m || curX < 0 || curY < 0) continue;
      // 방문할 수 있는 칸인지 check
      if(board[curX][curY] == '0') continue;
      // visit check. 이미 방문한 칸은 distance가 0이 아니게 되므로
      if(distance[curX][curY] != 0) continue;
      
      queue.push({curX, curY});
      distance[curX][curY] = dist;
    }
  }
  cout << distance[n-1][m-1];

  return 0;
}