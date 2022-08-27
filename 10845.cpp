//#include <bits/stdc++.h>
#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
  queue<int> queue;
  string command;
  int input, n;

  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> command;
    if(command == "push") {
      cin >> input;
      queue.push(input);
    }
    else if(command == "pop") {
      if(queue.empty()) {
        cout << -1 << '\n';
      }
      else {
        cout << queue.front() << '\n';
        queue.pop();
      }
    }
    else if(command == "size") {
      cout << queue.size() << '\n';
    }
    else if(command == "empty") {
      if(queue.empty())
        cout << 1 << '\n';
      else
        cout << 0 << '\n';
    }
    else if(command == "front") {
      if(queue.empty()) 
        cout << -1 << '\n';
      else 
        cout << queue.front() << '\n';
    }
    else {  //back
      if(queue.empty()) {
        cout << -1 << '\n';
      }
      else {
        cout << queue.back() << '\n';
      }
    }
  }

  return 0;
}