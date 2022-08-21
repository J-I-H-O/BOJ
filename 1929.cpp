//#include <bits/stdc++.h>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int m, n;
  cin >> m >> n;

  bool* isPrime = new bool[n + 1];

  fill_n(isPrime, n+1, true);
  isPrime[0] = isPrime[1] = false;

  //에라토스테네스의 체, 소수 찾기
  for(int i = 2; i <= sqrt(n); i++) {  
    // 이미 지워진 수라면 건너뜀
    if(isPrime[i]) {
      // j는 i의 배수. j = 2i, 3i, 4i, ...
      for(int j = 2 * i; j <= n; j += i) {
        isPrime[j] = false;
      }
    }
  }

  for(int i = m; i <= n; i++) {
    if(isPrime[i])
      cout << i << '\n';
  }

  delete []isPrime;

  return 0;
}