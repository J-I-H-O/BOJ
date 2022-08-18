#include <bits/stdc++.h>
//#include <iostream>
//#include <algorithm>

using namespace std;

bool compare(int a, int b) {
  return a < b;
}

int main() {
  int arr[5];
  int sum = 0;

  for(int i = 0; i < 5; i++) {
    cin >> arr[i];
    sum += arr[i];
  }

  //Á¤·Ä
  sort(arr, arr + 5, compare);

  cout << sum / 5 << endl;
  cout << arr[2] << endl;

  return 0;
}