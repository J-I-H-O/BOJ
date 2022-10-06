#include <iostream>
#include <queue>
using namespace std;

#define MAX 100001

int main() {
  int n, k, x;
  int location[MAX];
  queue<int> queue;

  cin >> n >> k;

  fill_n(location, MAX, -1);

  location[n] = 0;
  queue.push(n);
  // BFS. k를 방문하면 종료
  while(location[k] == -1) {
    int cur = queue.front();
    queue.pop();

    if(0 <= cur-1 && cur-1 < MAX && location[cur-1] == -1) {
      queue.push(cur-1);
      location[cur-1] = location[cur] + 1;
    }
    if(0 <= cur+1 && cur+1 < MAX && location[cur+1] == -1) {
      queue.push(cur+1);
      location[cur+1] = location[cur] + 1;
    }
    if(0 <= 2*cur && 2*cur < MAX && location[2*cur] == -1){
      queue.push(2*cur);
      location[2*cur] = location[cur] + 1;
    }
  }
  cout << location[k];

  return 0;
}