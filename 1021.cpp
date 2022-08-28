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
    //�������� ���� ���� �ε��� ã��
    for(int j = 0; j < deque.size(); j++) {
      if(deque[j] == input) break;
        index++;
    }

    goLeft = index;
    goRight = deque.size() - index;

    //�������� �̵��ϴ� Ƚ���� ���������� �̵��ϴ� Ƚ������ ���� ���
    if(goLeft < goRight) {
      for(int j = 0; j < goLeft; j++) {
        temp = deque.front();
        deque.pop_front();
        deque.push_back(temp);
      }
      deque.pop_front();
      ans += goLeft;
    }
    //���������� �̵��ϴ� Ƚ���� �������� �̵��ϴ� Ƚ������ ���� ���
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