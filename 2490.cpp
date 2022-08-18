#include <bits/stdc++.h>

using namespace std;

int main() {
  string str = "DCBAE";
  int temp, result = 0;

  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 4; j++) {
      cin >> temp;
      result += temp;
    }
    cout << str[result] << endl;
    result = 0;
  }

  return 0;
}