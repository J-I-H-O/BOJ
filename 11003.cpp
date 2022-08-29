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

  int start = 1;  // �ʱ� ������ ����
  int end = 1;    // �ʱ� ������ ��
  int minIndex = 1; // ���� �� �ּڰ��� �ε���
  int min = vector[minIndex]; // ���� �� �ּڰ�
  ans.push_back(min); // i = 1�� �� D�� ��

  for(int i = 2; i <= n; i++) {
    // ���� ������ �̵�
    if(i > l) start = i - l + 1;
    end = i;

    // ���� ������ �ּڰ��� ���� ���� ���� ���� ���, �� �ּڰ��� ���� ������ ���� �߰��� ���� ��
    if(start <= minIndex && minIndex <= end) {
      if(min > vector[end]) {
        minIndex = end;
      }
    }
    // �׷��� ������, ������ ���������� Ž���ϸ� �ּڰ� ã�� ==> �ð� �ʰ�
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