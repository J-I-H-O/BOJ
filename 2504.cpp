#include <iostream>
#include <stack>
#include <string>
using namespace std;
typedef long long ll;

int main() {
  string str;
  stack<char> stack;

  cin >> str;
  for(auto c : str) {
    if(c == '(') {

    }
    else if(c == '[') {

    }
    else if(c == ')') {
      // �߸��� ��ȣ
      if(stack.top() != '(') {
        cout << 0;
        exit(0);
      }
    }
    else {
      // �߸��� ��ȣ
      if(stack.top() != '[') {
        cout << 0;
        exit(0);
      }
    }
  }

  return 0;
}