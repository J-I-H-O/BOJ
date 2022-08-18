#include <bits/stdc++.h>

using namespace std;

void bubleSort(int* arr) {
  for(int i = 0; i < 2; i++) {
    for(int j = i; j < 2; j++) {
      if(arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

bool compare(int a, int b) {
  return a < b;
}

int main() {
  int arr[3];

  for(int i = 0; i < 3; i++) {
    cin >> arr[i];
  }

  sort(arr, arr + 3, compare);

  for(int i = 0; i < 3; i++) {
    cout << arr[i] << ' ';
  }

  return 0;
}