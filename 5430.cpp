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

    //숫자만 파싱
    for(int i = 0; i < arr.size() - 1; i++) {
      if('0' <= arr[i] && arr[i] <= '9') {
        parsedInt = arr[i] - '0';
        //두자리수 이상의 숫자인 경우
        while('0' <= arr[i + 1] && arr[i + 1] <= '9') {
          parsedInt = parsedInt * 10 + (arr[i + 1] - '0');
          i++;
        }

        deque.push_back(parsedInt);
      }
    }

    //입력받은 함수 p 수행
    for(auto c : p) {
      if(c == 'R') {
        /*
          매번 뒤집으면 시간 초과. 뒤집었다는 표시만 남겨두고, 'D'를 만났을 때 
          뒤집어진 상태라면 뒤에서 pop, 뒤집어지지 않은 상태라면 앞에서 pop 
        */
        reversed = !reversed;
      }
      else {  // c == 'D'
        if(deque.empty()) {
          cout << "error" << '\n';
          isError = true;
          break;
        }

        // !!!!중요!!!!! 
        if(reversed)
          deque.pop_back();
        else
          deque.pop_front();
      }
    }

    //뒤집어진 상태로 명령어들이 모두 끝났다면, 다시 원래 순서대로 돌려놓음
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