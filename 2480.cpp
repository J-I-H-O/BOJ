#include <bits/stdc++.h>

using namespace std;

void calcPrize(int* freq) {
  int max = 0, maxIndex = 0;
  for(int i = 1; i < 7; i++) {
    if(max <= freq[i]) {
      max = freq[i];
      maxIndex = i;
    }
  }
  //��� �ٸ� ���� ������ ���
  if(max == 1) {
    cout << maxIndex * 100;
  }
  //���� ���� 2���� ������ ���
  else if(max == 2) {
    cout << 1000 + maxIndex * 100;
  }
  //���� �� 3���� ������ ���
  else {
    cout << 10000 + maxIndex * 1000;
  }
}

int main() {
  int arr[3] = {};
  int freq[7] = {};  //������ �ֻ��� ������ Ƚ��(��)

  for(int i = 0; i < 3; i++) {
    cin >> arr[i];
    freq[arr[i]]++;
  }

  calcPrize(freq);

  return 0;
}