#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, res;
  
  cin >> n;
  res = n;

  for(long long i = 2; i*i <= n; i++) {
    // i�� n�� ���μ��� ���
    if(n % i == 0) {
      res = res - res/i;
      while(n % i == 0) {
        n /= i;
      }
    }
  }
  //���� n�� ���μ� ���·� �����ִ� ���
  if(n != 1) {
    res = res - res/n;
  }

  cout << res;

  return 0;
}