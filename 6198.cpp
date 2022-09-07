//#include <bits/stdc++.h>
#include <iostream>
#include <stack>
using namespace std;

int main() {
  stack<int> stack;
  int n, temp;
  long long ans;  // n의 최댓값이 80000 이므로, ans의 최댓값은 1부터 79999의 합

  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> temp;

    // 스택 내부에서 현재 건물보다 작은 건물들을 모두 삭제.
    // 매 반복바다 stack의 크기 == 현재 건물을 볼 수 있는 다른 건물들의 개수 
    while(!stack.empty() && stack.top() <= temp) {
      stack.pop();
    }
    ans += stack.size();
    stack.push(temp);
  }

  cout << ans;

  return 0;
}