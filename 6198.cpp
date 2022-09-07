//#include <bits/stdc++.h>
#include <iostream>
#include <stack>
using namespace std;

int main() {
  stack<int> stack;
  int n, temp;
  long long ans;  // n�� �ִ��� 80000 �̹Ƿ�, ans�� �ִ��� 1���� 79999�� ��

  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> temp;

    // ���� ���ο��� ���� �ǹ����� ���� �ǹ����� ��� ����.
    // �� �ݺ��ٴ� stack�� ũ�� == ���� �ǹ��� �� �� �ִ� �ٸ� �ǹ����� ���� 
    while(!stack.empty() && stack.top() <= temp) {
      stack.pop();
    }
    ans += stack.size();
    stack.push(temp);
  }

  cout << ans;

  return 0;
}