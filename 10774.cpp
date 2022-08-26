//#include <bits/stdc++.h>
#include <iostream>
#include <stack>

using namespace std;

int main() {
  int k, input, res = 0;
  stack<int> stack;

  cin >> k;

  for(int i = 0; i < k; i++) {
    cin >> input;
    if(input == 0) {
      stack.pop();
    }
    else {
      stack.push(input);
    }
  }

  while(!stack.empty()) {
    res += stack.top();
    stack.pop();
  }

  cout << res;

  return 0;
}