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

  //커서 위치는 cursor 값에 해당하는 문자의 오른쪽
  cursor = inputString.end();

  for(int i = 0; i < m; i++) {
    cin >> command;

    if(command == 'L') {
      //커서가 문장의 맨 앞이면 무시됨
      if(cursor != inputString.begin()) {
        cursor--;
      }
    }
    else if(command == 'D') {
      //커서가 문장의 맨 뒤이면 무시됨
      if(cursor != inputString.end()) {
        cursor++;
      }
    }
    else if(command == 'B') {
      //커서가 문장의 맨 앞이면 무시됨
      if(cursor != inputString.begin()) {
        //커서가 가리키는 문자를 삭제
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