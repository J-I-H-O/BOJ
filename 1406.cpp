//#include <bits/stdc++.h>
#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
  int m;
  string input;
  list<char> inputString;
  list<char>::iterator cursor;
  char command, addedCh;

  cin >> input;
  cin >> m;

  for(auto c : input) inputString.push_back(c);

  //Ŀ�� ��ġ�� cursor ���� �ش��ϴ� ������ ������
  cursor = inputString.end();

  for(int i = 0; i < m; i++) {
    cin >> command;

    if(command == 'L') {
      //Ŀ���� ������ �� ���̸� ���õ�
      if(cursor != inputString.begin()) {
        cursor--;
      }
    }
    else if(command == 'D') {
      //Ŀ���� ������ �� ���̸� ���õ�
      if(cursor != inputString.end()) {
        cursor++;
      }
    }
    else if(command == 'B') {
      //Ŀ���� ������ �� ���̸� ���õ�
      if(cursor != inputString.begin()) {
        //Ŀ���� ����Ű�� ���ڸ� ����
        cursor = inputString.erase(--cursor);
      }
    }
    else {  
      cin >> addedCh;
      inputString.insert(cursor, addedCh);
    }
  }

  for(cursor = inputString.begin(); cursor != inputString.end(); cursor++) {
    cout << *cursor;
  }

  return 0;
}