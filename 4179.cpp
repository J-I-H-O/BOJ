#include <iostream>
#include <queue>
#include <string>
using namespace std;

#define SIZE 1001

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int r, c;
  string input;
  int dx[] = {1, 0, -1, 0};
  int dy[] = {0, 1, 0, -1};
  char board[SIZE][SIZE];
  int distance1[SIZE][SIZE];
  int distance2[SIZE][SIZE];
  int dist1 = 0, dist2 = 0;
  queue<pair<int, int>> queue1; // fire
  queue<pair<int, int>> queue2; // jihoon

  cin >> r >> c;

  for(int i = 0; i < r; i++) {
    for(int j = 0; j < c; j++) {
      distance1[i][j] = -1;
      distance2[i][j] = -1;
    }
  }

  for(int i = 0; i < r; i++) {
    cin >> input;
    for(int j = 0; j < c; j++) {
      board[i][j] = input[j];

      if(input[j] == 'F') {
        queue1.push({i, j});
        distance1[i][j] = 0;
      }
      else if (input[j] == 'J') {
        queue2.push({i, j});
        distance2[i][j] = 0;
      }
    }
  }

  // BFS for fire
  while(!queue1.empty()) {
    pair<int, int> cur = queue1.front();
    queue1.pop();

    dist1 = distance1[cur.first][cur.second] + 1;
    for(int i = 0; i < 4; i++) {
      int curX = cur.first + dx[i];
      int curY = cur.second + dy[i];

      if(curX < 0 || curY < 0 || curX >= r || curY >= c) continue;  // ���� ���
      if(board[curX][curY] == '#') continue;  // ��
      if(distance1[curX][curY] != -1) continue;  // �̹� �湮

      distance1[curX][curY] = dist1;
      queue1.push({curX, curY});
    }
  }

  // BFS for jihoon
  while(!queue2.empty()) {
    pair<int, int> cur = queue2.front();
    queue2.pop();

    dist2 = distance2[cur.first][cur.second] + 1;
    for(int i = 0; i < 4; i++) {
      int curX = cur.first + dx[i];
      int curY = cur.second + dy[i];

      // �����̰� ������ ��� ��� Ż���ߴٰ� ����
      if((curX < 0 || curY < 0 || curX >= r || curY >= c)) {
        cout << dist2;
        return 0;
      }
      if(board[curX][curY] == '#') continue;  // ��
      if(distance2[curX][curY] != -1) continue;  // �̹� �湮
      // ���� ������ ���� ��쿡�� �׻� �̵� �����ϹǷ� distance1[curX][curY] != -1 && �� ���ǿ� �߰�
      if(distance1[curX][curY] != -1 && distance1[curX][curY] <= dist2) continue;  // �ش� ĭ�� �̹� ���� ���� ���

      distance2[curX][curY] = dist2;
      queue2.push({curX, curY});
    }
  }
  cout << "IMPOSSIBLE";

  return 0;
}