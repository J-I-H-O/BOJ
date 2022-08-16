//#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;

  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    string str1, str2;
    int nStr[26] = {0}; //각 문자열 내의 알파벳 개수 표시
    bool flag = true;

    cin >> str1 >> str2;
    
    //문자열 내의 알파벳 개수가 같으면 strfry함수를 적용하여 얻을 수 있음
    for(auto c : str1) nStr[c - 'a']++;
    for(auto c : str2) nStr[c - 'a']--;

    for(int i = 0; i < 26; i++) {
      if(nStr[i] != 0) flag = false;
    }

    flag? cout << "Possible" << endl : cout << "Impossible" << endl;
  }

  return 0;
}

/*
  0. 문자열마다 별개의 for문 사용 => 길이가 다른 문자열을 입력받아도 정확하게 strfry 적용 가능 여부 판단 가능
  1. 각 문자열마다 nStr1, nStr2 등 별개의 배열을 두기보다, 하나의 배열로 값을 가감하는 형식으로 변경
  2. 위처럼 변경함으로써 nStr[i]의 값이 0이 아닐 때 Impossible임을 알 수 있음
*/