#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
  string str;
  stack<char> stack;
  char lastChar;
  int ans = 0;
  cin >> str;

  for(auto c : str) {
    if(c == '(') {
      lastChar = '(';
      stack.push('(');
    }
    else if (c == ')') {
      // ∑π¿Ã¿˙
      stack.pop();
      if(lastChar == '(') {
        ans += stack.size();
      }
      else {
        ans++;
      }
      lastChar = ')';
    }
  }
  cout << ans;

  return 0;
}