//#include <bits/stdc++.h>
#include <iostream>
#include <stack>
using namespace std;

int main() {
  int n, height;
  long long ans = 0;
  stack<int> stack;

  cin >> n;
  
  for(int i = 0; i < n; i++) {
    cin >> height;

    ans += stack.size();

    while(!stack.empty() && stack.top() < height) {
      stack.pop();
    }

    stack.push(height);
  }

  cout << ans;

  return 0;
}