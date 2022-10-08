#include <iostream>
using namespace std;

int z_search(int n, int r, int c) {
  if(n == 0) 
    return 0;
  int half = 1 << (n-1); // half�� 2^(n-1)

  if(r < half && c < half) return z_search(n-1, r, c);                          // ù��° �簢��
  if(r < half && c >= half) return half * half + z_search(n-1, r, c-half);      // �ι�° �簢��
  if(r >= half && c < half) return 2 * half * half + z_search(n-1, r-half, c);  // ����° �簢��
  return 3 * half * half + z_search(n-1, r-half, c-half);                       // �׹�° �簢��
}

int main() {
  int n, r, c;
  cin >> n >> r >> c;

  cout << z_search(n, r, c);

  return 0;
}