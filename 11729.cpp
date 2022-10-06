#include <iostream>
#include <cmath>
using namespace std;

// a: source, b: support, c: destination, n: # of blocks
void hanoi(int a, int b, int c, int n) {
  if(n == 1) {
    cout << a << ' ' << c << '\n';
    return;
  }
  hanoi(a, c, b, n-1);  // n-1개 블록을 중간 기둥(b)으로 옮김
  cout << a << ' ' << c << '\n';  // 하나 남은 n번째 블록을 출발지(a)에서 도착지(c)로 옮김
  hanoi(b, a, c, n-1);
}

int main() {
  int n;

  cin >> n;

  cout << (int)pow(2, n) - 1 << '\n';
  hanoi(1, 2, 3, n);

  return 0;
}