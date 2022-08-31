//#include <bits/stdc++.h>
#include <iostream>
#include <stack>
#include <vector>
#include <cstdlib>
using namespace std;

int main() {
  int n, temp, lastNum = 0; // lastNum�� ���ÿ� ���������� ������ ����
  vector<int> sequence;
  vector<char> res;
  stack<int> stack;

  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> temp;
    sequence.push_back(temp);
  }

  for(int i = 0; i < n; i++) {
    // ���� �������� ���ÿ� ���Ե� ���� ���� �����ִ� sequence�� ������ ���� ���
    if(lastNum < sequence[i]) {
      // sequence�� ���� ������ �� ���� ���ÿ� ����
      while(lastNum < sequence[i]) {
        stack.push(++lastNum);
        res.push_back('+');
      }
    }
    // stack�� top�� ���� �����ִ� sequence�� ������ ũ�ų� ���� ���
    if(!stack.empty() && stack.top() >= sequence[i]) {
      // sequence�� ���� pop�� �� ���� pop
      while(!stack.empty() && stack.top() >= sequence[i]) {
        stack.pop();
        res.push_back('-');
      }
    }
    // pop �Ǿ���ϴ� ����ε��� ������ ����ְų�, �̹� pop�� ���ڰ� sequence�� �����ϴ� ���
    else {
      cout << "NO";
      exit(0);
    }
  }

  for(int i = 0; i < res.size(); i++) {
    cout << res[i] << '\n';
  }

  return 0;
}