//#include <bits/stdc++.h>
#include <iostream>
#include <stack>
#include <string>
using namespace std;

/*
  IDEA : ���ڿ� ���� �� ���ڿ� ���� ¦ ���߱�.
  ���� �ٸ� ���ڰ� �����ؼ� �����ϸ� ����.
  ������ ¦(����)�� ���� ������ ����
*/ 

int main() {
  int n, ans = 0;
  string input;

  cin >> n;

  for(int i = 0; i < n; i++) {
    stack<char> stack;

    cin >> input;

    for(auto c : input) {
      //¦�� ������ pop
      if(!stack.empty() && stack.top() == c) {
        stack.pop();
      }
      //¦�� ���ٸ� push
      else {
        stack.push(c);
      }
    }
    // ¦�� ��� �´� ���, �� stack�� ����ִ� ��� ���� �ܾ�.
    if(stack.empty()) ans++;
  }

  cout << ans;

  return 0;
}