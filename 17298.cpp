//#include <bits/stdc++.h>
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, temp;
  stack<pair<int, int>> stack;  // pair<value, index>
  vector<int> vector;

  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> temp;
    vector.push_back(-1);

    // 스택 내에서 현재 입력받은 수보다 작은 수들을 모두 pop한다. 현재 수가 pop된 수의 오큰수
    while(!stack.empty() && stack.top().first < temp) {
      vector[stack.top().second] = temp;
      stack.pop();
    }
    stack.push({temp, i});
  }

  for(int i = 0; i < vector.size(); i++)
    cout << vector[i] << ' ';

  return 0;
}