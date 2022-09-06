//#include <bits/stdc++.h>
#include <iostream>
#include <stack>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  int n, temp;
  stack<pair<int, int>> stack;  // pair<value, index>

  cin >> n;

  // 모든 요소가 pop 되었을 때 0을 출력하기 위한 장치
  stack.push({100000001, 0});
  for(int i = 1; i <= n; i++) {
    cin >> temp;
    
    // 자신보다 낮은 탑들을 모두 pop
    while(!stack.empty() && stack.top().first < temp) {
      stack.pop();
    }

    // 스택에 남아있는 탑은 자신보다 큰 탑 중 가장 최근에 만난 탑
    cout << stack.top().second << ' ';

    // 이후 자기 자신을 스택에 push
    stack.push({temp, i});
  }

  return 0;
}