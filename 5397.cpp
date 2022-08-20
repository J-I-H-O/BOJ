//#include <bits/stdc++.h>
#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
  int n;
  string input;

  cin >> n;
  for(int i = 0; i < n; i++) {
    list<char> password;
    list<char>::iterator cursor;

    cin >> input;
    cursor = password.end();
    for(auto c : input) {
      //왼쪽으로 커서 이동
      if(c == '<') {
        if(cursor != password.begin())  cursor--;
      }
      //오른쪽으로 커서 이동
      else if(c == '>') {
        if(cursor != password.end())  cursor++;
      }
      //백스페이스
      else if(c == '-') {
        if(cursor != password.begin())
          cursor = password.erase(--cursor);
      }
      //문자 입력
      else {
        //if(cursor == password.end()) password.push_back(c);
        password.insert(cursor, c);
      }
    }

    for(cursor = password.begin(); cursor != password.end(); cursor++) {
      cout << *cursor;
    }
    cout << endl;
  }

  return 0;
}