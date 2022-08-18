#include <bits/stdc++.h>

using namespace std;

int main() {
  long long a, b;

  cin >> a >> b;


  if(a == b)
    cout << 0 << endl;
  else 
    cout << abs(b - a) - 1 << endl;

  for(long long i = min(a, b) + 1; i < max(a, b); i++) {
    cout << i << ' ';
  }

  return 0;
}