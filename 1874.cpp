//#include <bits/stdc++.h>
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
  int n, temp, lastPush;
  vector<int> sequence; // sequence�� �Է� ������, 
  vector<char> pushPop; // pushPop�� ������ ����� ���� �ʿ��� ������ ��Ÿ��
  stack<int> stack;

  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> temp;
    sequence.push_back(temp);
  }  

 lastPush = 0;
  for(int i = 0; i < n; i++) {
    if (lastPush < sequence[i]) {
      for(int j = 0; j < sequence[i] - lastPush; j++) {
        pushPop.push_back('+');
        
      }
    }
  }

  return 0;
}