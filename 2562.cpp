#include <bits/stdc++.h>

using namespace std;

int main() {
  int max = 0, maxIndex = 0;
  int arr[9];

  for(int i = 0; i < 9; i++) {
    cin >> arr[i];
    if(max < arr[i]) {
      max = arr[i];
      maxIndex = i;
    }
  }

  cout << max << "\n" << maxIndex + 1;

  return 0;
}