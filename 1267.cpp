#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, temp;
  int y = 0, m = 0; //영식, 민식 요금제 가격 저장

  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> temp;
    y += (temp / 30 + 1) * 10;
    m += (temp / 60 + 1) * 15;
  }

  if(y == m) 
    cout << "Y M " << y;
  else 
    y < m ? cout << "Y " << y : cout << "M " << m;

  return 0;
}