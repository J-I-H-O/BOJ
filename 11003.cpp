//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int findMinIndex(vector<int> &vector, int start, int end) {
  int min = vector[start];
  int minIndex = 1;

  for(int i = start; i <= end; i++) {
    if(min >= vector[i]) {
      min = vector[i];
      minIndex = i;
    }
  }
  return minIndex;
}

int main() {
  int n, l, temp;
  vector<int> vector, ans;

  cin >> n >> l;

  // dummy data
  vector.push_back(0);

  for(int i = 0; i < n; i++) {
    cin >> temp;
    vector.push_back(temp);
  }

  int start = 1;  // 초기 범위의 시작
  int end = 1;    // 초기 범위의 끝
  int minIndex = 1; // 범위 내 최솟값의 인덱스
  int min = vector[minIndex]; // 범위 내 최솟값
  ans.push_back(min); // i = 1일 때 D의 값

  for(int i = 2; i <= n; i++) {
    // 다음 범위로 이동
    if(i > l) start = i - l + 1;
    end = i;

    // 이전 범위의 최솟값이 현재 범위 내에 속한 경우, 그 최솟값과 현재 범위에 새로 추가된 값을 비교
    if(start <= minIndex && minIndex <= end) {
      if(min > vector[end]) {
        minIndex = end;
      }
    }
    // 그렇지 않으면, 범위를 순차적으로 탐색하며 최솟값 찾기 ==> 시간 초과
    else {
      minIndex = findMinIndex(vector, start, end);
    }

    min = vector[minIndex];
    ans.push_back(min);
  }

  for(auto i : ans) {
    cout << i << ' ';
  }

  return 0;
}