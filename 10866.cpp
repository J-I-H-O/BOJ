//#include <bits/stdc++.h>
#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
  int n, input;
  string command;
  deque<int> deque;

  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> command;

    if(command == "push_front") {
      cin >> input;
      deque.push_front(input);
    }
    else if(command == "push_back") {
      cin >> input;
      deque.push_back(input);
    }
    else if(command == "pop_front") {
      if(deque.empty())
        cout << -1 << '\n';
      else {
        cout << deque.front() << '\n';
        deque.pop_front();
      }
    }
    else if(command == "pop_back") {
      if(deque.empty())
        cout << -1 << '\n';
      else {
        cout << deque.back() << '\n';
        deque.pop_back();
      }
    }
    else if(command == "size") {
      cout << deque.size() << '\n';
    }
    else if(command == "empty") {
      if(deque.empty())
        cout << 1 << '\n';
      else
        cout << 0 << '\n';
    }
    else if(command == "front") {
      if(deque.empty())
        cout << -1 << '\n';
      else
        cout << deque.front() << '\n';
    }
    else {
      //back
      if(deque.empty())
        cout << -1 << '\n';
      else
        cout << deque.back() << '\n';
    }
  }

  return 0;
}