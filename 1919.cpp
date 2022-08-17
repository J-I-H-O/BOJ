#include <bits/stdc++.h>
//#include <iostream>

using namespace std;

int main() {
  string str1, str2;
  int res = 0;
  int alphabetNum[26] = {};

  cin >> str1 >> str2;

  for(auto c : str1) alphabetNum[c - 'a']++;
  for(auto c : str2) alphabetNum[c - 'a']--;

  for(int i = 0; i < 26; i++) {
    if(alphabetNum[i] != 0)
      res += abs(alphabetNum[i]);
  }

  cout << res;

  return 0;
}