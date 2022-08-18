#include <bits/stdc++.h>

using namespace std;

int main() {
  int temp, min = 100, sum = 0;

  for(int i = 0; i < 7; i++) {
    cin >> temp;
    if(temp % 2 != 0) {
      sum += temp;
      if(min > temp)
        min = temp;
    }
  }

  if(sum == 0)
    cout << -1 << endl;
  else {
    cout << sum << endl;
    cout << min << endl;
  }

  return 0;
}