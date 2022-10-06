#include <iostream>
using namespace std;

long long power(int a, int b, int c) {
  // base condition
  if(b == 1) return a % c;
  // b가 짝수인 경우 a^b == a^(b/2) * a^(b/2) 이용
  long long val;
  val = power(a, b/2, c);
  val = (val % c) * (val % c) % c;
  if(b % 2 == 0) {
    return val % c;
  }
  return a * val % c;
}

int main() {
  int a, b, c;
  long long ans;

  cin >> a >> b >> c;
  cout << power(a, b, c);

  return 0;
}