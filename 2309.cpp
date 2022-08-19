#include <bits/stdc++.h>

using namespace std;

//배열의 i번째, j번째 요소를 제외한 나머지 요소 출력
void printHeight(int* height, int i, int j) {
  for(int k = 0; k < 9; k++) {
    if(k == i || k == j) continue;
    cout << height[k] << endl;
  }
}

int main() {
  int sum = 0;
  int height[9];

  for(int i = 0; i < 9; i++) {
    cin >> height[i];
    sum += height[i];
  }
  
  sort(height, height + 9);

  for(int i = 0; i < 8; i++) {
    for (int j = i + 1; j < 9; j++) {
      if(sum - height[i] - height[j] == 100) {
        printHeight(height, i, j);
        exit(0);
      }
    }
  }

  return 0;
}