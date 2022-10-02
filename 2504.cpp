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
      // 肋给等 褒龋
      if(stack.top() != '(') {
        cout << 0;
        exit(0);
      }
    }
    else {
      // 肋给等 褒龋
      if(stack.top() != '[') {
        cout << 0;
        exit(0);
      }
    }
  }

  return 0;
}