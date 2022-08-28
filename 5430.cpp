//#include <bits/stdc++.h>
#include <iostream>
#include <deque>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t, n, temp, parsedInt;
  bool isError = false, reversed = false;
  string p, arr;

  cin >> t;

  while(t--) {
    cin >> p;
    cin >> n;
    cin >> arr;

    deque<int> deque;

    //���ڸ� �Ľ�
    for(int i = 0; i < arr.size() - 1; i++) {
      if('0' <= arr[i] && arr[i] <= '9') {
        parsedInt = arr[i] - '0';
        //���ڸ��� �̻��� ������ ���
        while('0' <= arr[i + 1] && arr[i + 1] <= '9') {
          parsedInt = parsedInt * 10 + (arr[i + 1] - '0');
          i++;
        }

        deque.push_back(parsedInt);
      }
    }

    //�Է¹��� �Լ� p ����
    for(auto c : p) {
      if(c == 'R') {
        /*
          �Ź� �������� �ð� �ʰ�. �������ٴ� ǥ�ø� ���ܵΰ�, 'D'�� ������ �� 
          �������� ���¶�� �ڿ��� pop, ���������� ���� ���¶�� �տ��� pop 
        */
        reversed = !reversed;
      }
      else {  // c == 'D'
        if(deque.empty()) {
          cout << "error" << '\n';
          isError = true;
          break;
        }

        // !!!!�߿�!!!!! 
        if(reversed)
          deque.pop_back();
        else
          deque.pop_front();
      }
    }

    //�������� ���·� ��ɾ���� ��� �����ٸ�, �ٽ� ���� ������� ��������
    if(reversed)
      reverse(deque.begin(), deque.end());

    //print
    if(!isError) {
      cout << '[';
      for(int i = 0; i < deque.size(); i++) {
        cout << deque[i];
        if(i + 1 != deque.size())
          cout << ',';
      }
      cout << "]\n";
    }
    isError = false;
    reversed = false;
  }

  return 0;
}