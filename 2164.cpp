//#include <bits/stdc++.h>
#include <iostream>
#include <queue>

using namespace std;

int main() {
  int n, goDown;
  queue<int> queue;

  cin >> n;

  //initialization
  for(int i = 1; i <= n; i++) {
    queue.push(i);
  }
  while(queue.size() > 1) {
    queue.pop();
    goDown = queue.front();
    queue.pop();
    queue.push(goDown);
  }

  cout << queue.front();

  return 0;
}