#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, res;
  
  cin >> n;
  res = n;

  for(long long i = 2; i*i <= n; i++) {
    // i가 n의 소인수인 경우
    if(n % i == 0) {
      res = res - res/i;
      while(n % i == 0) {
        n /= i;
      }
    }
  }
  //아직 n이 소인수 형태로 남아있는 경우
  if(n != 1) {
    res = res - res/n;
  }

  cout << res;

  return 0;
}