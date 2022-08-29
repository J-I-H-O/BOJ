//#include <bits/stdc++.h>
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
  string input;
  int t, vps = 0;
  bool isVPS = true;

  cin >> t;
  
  for(int i = 0; i < t; i++) {
    stack<char> stack;
    cin >> input;
    isVPS = true;
    
    for(auto c : input) {
      if(c == '(') {
        stack.push('(');
      }
      else {
        if(!stack.empty()) {
          stack.pop();
        }
        else {
          isVPS = false;
          break;
        }
      }
    }
    if(!stack.empty()) isVPS = false;

    isVPS? cout << "YES\n" : cout << "NO\n";
  }

  return 0;
}