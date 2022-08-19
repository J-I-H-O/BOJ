#include <bits/stdc++.h>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;

  cin >> n;

  for(int i = 0; i < n; i++) {
    for(int j = n-i; j < n; j++) {
      cout << " ";
    }
    for(int j = 2*(n - i - 1); j >= 0; j--) {
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}