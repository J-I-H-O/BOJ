//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <stack>
#include <cstdlib>
using namespace std;

int main() {
  string input;

  while(true) {
    stack<char> stack;
    bool isBalanced = true;

    /*
      string ���̺귯���� getline() �Լ�. 
      ���ϴ� �����ڸ� ���� �� ���� ��� ���ڿ��� �Է� �޾� �ϳ��� string ��ü�� ������.
    */
    getline(cin, input);
    
    if(input == ".") {
      exit(0);
    }

    for(auto c : input) {
      if(c == '.') break;
      else if (c == '(' || c == '[') stack.push(c);
      else if (c == ')') {
        if(stack.empty() || stack.top() != '(') {
          isBalanced = false;
          break;
        }
        else {
          stack.pop();
        }
      }
      else if (c == ']') {
        if(stack.empty() || stack.top() != '[') {
          isBalanced = false;
          break;
        }
        else {
          stack.pop();
        }
      }
    }
    /* 
      �Է� ���ڿ� ���� ��� ���ڸ� Ȯ���� �Ŀ��� ������ ������� �ʴ� ���,
      �� ���� ��ȣ�� ������ 
    */
    if(!stack.empty()) isBalanced = false;
    isBalanced? cout << "yes\n" : cout << "no\n";
  }

  return 0;
}