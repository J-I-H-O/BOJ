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
    // k ��° ��� ã��, �ڽ��� �����Ͽ� k��° �ִ� ����� �����ϹǷ� iterator�� k-1�� �̵���Ŵ
    for(int i = 0; i < k - 1; i++) {
      it++;
      if(it == people.end())  it = people.begin();
    }
    // ã�� ��� ����
    josephus.push_back(*it);
    it = people.erase(it);
    if(it == people.end())  it = people.begin();
  }

  // ��� ���
  cout << '<';
  for(int i = 0; i < josephus.size() - 1; i++) {
    cout << josephus[i] << ", ";
  }
  cout << josephus[josephus.size() - 1] << '>';

  return 0;
}