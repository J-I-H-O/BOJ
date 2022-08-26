//#include <bits/stdc++.h>
#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
  stack<int> stack;
  string command;
  int n, input;

  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> command;
    if(command == "push") {
      cin >> input;
      stack.push(input);
    }
    else if(command == "pop") {
      if(stack.empty())
        cout << -1 << '\n';
      else {
        cout << stack.top() << '\n';
        stack.pop();
      }
    }
    else if(command == "size") {
      cout << stack.size() << '\n';
    }
    else if(command == "empty") {
      stack.empty()? cout << 1 << '\n' : cout << 0 << '\n';
    }
    else {  //top
      if(stack.empty())
        cout << -1 << '\n';
      else 
        cout << stack.top() << '\n';
    }
  }

  return 0;
}