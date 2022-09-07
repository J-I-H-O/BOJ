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

    // ���� ������ ���� �Է¹��� ������ ���� ������ ��� pop�Ѵ�. ���� ���� pop�� ���� ��ū��
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