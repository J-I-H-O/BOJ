#include <iostream>
#include <cmath>
using namespace std;

// a: source, b: support, c: destination, n: # of blocks
void hanoi(int a, int b, int c, int n) {
  if(n == 1) {
    cout << a << ' ' << c << '\n';
    return;
  }
  hanoi(a, c, b, n-1);  // n-1�� ����� �߰� ���(b)���� �ű�
  cout << a << ' ' << c << '\n';  // �ϳ� ���� n��° ����� �����(a)���� ������(c)�� �ű�
  hanoi(b, a, c, n-1);
}

int main() {
  int n;

  cin >> n;

  cout << (int)pow(2, n) - 1 << '\n';
  hanoi(1, 2, 3, n);

  return 0;
}