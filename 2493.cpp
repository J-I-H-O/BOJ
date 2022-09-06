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

  // ��� ��Ұ� pop �Ǿ��� �� 0�� ����ϱ� ���� ��ġ
  stack.push({100000001, 0});
  for(int i = 1; i <= n; i++) {
    cin >> temp;
    
    // �ڽź��� ���� ž���� ��� pop
    while(!stack.empty() && stack.top().first < temp) {
      stack.pop();
    }

    // ���ÿ� �����ִ� ž�� �ڽź��� ū ž �� ���� �ֱٿ� ���� ž
    cout << stack.top().second << ' ';

    // ���� �ڱ� �ڽ��� ���ÿ� push
    stack.push({temp, i});
  }

  return 0;
}