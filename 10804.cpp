#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b;
  int cards[21];

  for(int i = 0; i <= 20; i++) {
    cards[i] = i;
  }
  //10개의 구간에 대해 작업 수행
  for(int i = 0; i < 10; i++) {
    cin >> a >> b;
    for(int j = a; j <= a + (b-a) / 2; j++) {
      swap(cards[j], cards[a + b - j]);
    }
  }

  for(int i = 1; i <= 20; i++) {
    cout << cards[i] << ' ';
  }

  return 0;
}