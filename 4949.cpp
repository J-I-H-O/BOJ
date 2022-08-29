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
      string 라이브러리의 getline() 함수. 
      원하는 구분자를 만날 때 까지 모든 문자열을 입력 받아 하나의 string 객체에 저장함.
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
      입력 문자열 내의 모든 문자를 확인한 후에도 스택이 비어있지 않는 경우,
      즉 여는 괄호의 개수가 
    */
    if(!stack.empty()) isBalanced = false;
    isBalanced? cout << "yes\n" : cout << "no\n";
  }

  return 0;
}