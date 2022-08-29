//#include <bits/stdc++.h>
#include <iostream>
#include <stack>
#include <string>
using namespace std;

/*
  IDEA : 문자열 내의 각 문자에 대해 짝 맞추기.
  서로 다른 문자가 교차해서 등장하면 실패.
  문자의 짝(개수)이 맞지 않으면 실패
*/ 

int main() {
  int n, ans = 0;
  string input;

  cin >> n;

  for(int i = 0; i < n; i++) {
    stack<char> stack;

    cin >> input;

    for(auto c : input) {
      //짝을 만나면 pop
      if(!stack.empty() && stack.top() == c) {
        stack.pop();
      }
      //짝이 없다면 push
      else {
        stack.push(c);
      }
    }
    // 짝이 모두 맞는 경우, 즉 stack이 비어있는 경우 좋은 단어.
    if(stack.empty()) ans++;
  }

  cout << ans;

  return 0;
}