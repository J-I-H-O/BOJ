//#include <bits/stdc++.h>
#include <iostream>
#include <stack>
#include <vector>
#include <cstdlib>
using namespace std;

int main() {
  int n, temp, lastNum = 0; // lastNum은 스택에 마지막으로 삽입한 숫자
  vector<int> sequence;
  vector<char> res;
  stack<int> stack;

  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> temp;
    sequence.push_back(temp);
  }

  for(int i = 0; i < n; i++) {
    // 가장 마지막에 스택에 삽입된 수가 현재 보고있는 sequence의 수보다 작은 경우
    if(lastNum < sequence[i]) {
      // sequence의 수와 같아질 때 까지 스택에 삽입
      while(lastNum < sequence[i]) {
        stack.push(++lastNum);
        res.push_back('+');
      }
    }
    // stack의 top이 현재 보고있는 sequence의 수보다 크거나 같은 경우
    if(!stack.empty() && stack.top() >= sequence[i]) {
      // sequence의 수가 pop될 때 까지 pop
      while(!stack.empty() && stack.top() >= sequence[i]) {
        stack.pop();
        res.push_back('-');
      }
    }
    // pop 되어야하는 경우인데도 스택이 비어있거나, 이미 pop된 숫자가 sequence에 등장하는 경우
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