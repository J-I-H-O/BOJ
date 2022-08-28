//#include <bits/stdc++.h>
#include <iostream>
#include <deque>
#include <algorithm>  //for min(a,b)
using namespace std;

int main() {
  int n, m, temp, input, index, goLeft, goRight, ans = 0;
  deque<int> deque;

  cin >> n >> m;

  for(int i = 1; i <= n; i++) {
    deque.push_back(i);
  }

  for(int i = 0; i < m; i++) {
    cin >> input;
    index = 0;
    //빼내려는 값의 현재 인덱스 찾기
    for(int j = 0; j < deque.size(); j++) {
      if(deque[j] == input) break;
        index++;
    }

    goLeft = index;
    goRight = deque.size() - index;

    //왼쪽으로 이동하는 횟수가 오른쪽으로 이동하는 횟수보다 적은 경우
    if(goLeft < goRight) {
      for(int j = 0; j < goLeft; j++) {
        temp = deque.front();
        deque.pop_front();
        deque.push_back(temp);
      }
      deque.pop_front();
      ans += goLeft;
    }
    //오른쪽으로 이동하는 횟수가 왼쪽으로 이동하는 횟수보다 적은 경우
    else {
      for(int j = 0; j < goRight; j++) {
        temp = deque.back();
        deque.pop_back();
        deque.push_front(temp);
      }
      deque.pop_front();
      ans += goRight;
    }
  }

  cout << ans;

  return 0;
}