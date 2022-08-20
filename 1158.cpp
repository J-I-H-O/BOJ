//#include <bits/stdc++.h>
#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main() {
  int n, k;
  list<int> people;
  list<int>::iterator it;
  vector<int> josephus;

  cin >> n >> k;
  for(int i = 1; i <= n; i++) {
    people.push_back(i);
  }

  it = people.begin();
  while(!people.empty()) {
    // k 번째 사람 찾기, 자신을 포함하여 k번째 있는 사람을 삭제하므로 iterator를 k-1번 이동시킴
    for(int i = 0; i < k - 1; i++) {
      it++;
      if(it == people.end())  it = people.begin();
    }
    // 찾은 사람 삭제
    josephus.push_back(*it);
    it = people.erase(it);
    if(it == people.end())  it = people.begin();
  }

  // 결과 출력
  cout << '<';
  for(int i = 0; i < josephus.size() - 1; i++) {
    cout << josephus[i] << ", ";
  }
  cout << josephus[josephus.size() - 1] << '>';

  return 0;
}