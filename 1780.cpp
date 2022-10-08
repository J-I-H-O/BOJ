#include <iostream>
using namespace std;

int res[3] = {0,};  // 순서대로 -1, 0, 1의 개수 저장

int main() {
  int n;
  int matrix[2190][2190];
  cin >> n;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cin >> matrix[i][j];
    }
  }

  return 0;
}