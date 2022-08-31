//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, k, temp, ans = 0;
  vector<int> coins;

  cin >> n >> k;

  for(int i = 0; i < n; i++) {
    cin >> temp;
    coins.push_back(temp);
  }

  int i = coins.size() - 1;
  while(k != 0) {
    while(coins[i] <= k) {
      k -= coins[i];
      ans++;
    }
    i--;
  }

  cout << ans;

  return 0;
}