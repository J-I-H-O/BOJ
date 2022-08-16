//#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;

  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    string str1, str2;
    int nStr[26] = {0}; //�� ���ڿ� ���� ���ĺ� ���� ǥ��
    bool flag = true;

    cin >> str1 >> str2;
    
    //���ڿ� ���� ���ĺ� ������ ������ strfry�Լ��� �����Ͽ� ���� �� ����
    for(auto c : str1) nStr[c - 'a']++;
    for(auto c : str2) nStr[c - 'a']--;

    for(int i = 0; i < 26; i++) {
      if(nStr[i] != 0) flag = false;
    }

    flag? cout << "Possible" << endl : cout << "Impossible" << endl;
  }

  return 0;
}

/*
  0. ���ڿ����� ������ for�� ��� => ���̰� �ٸ� ���ڿ��� �Է¹޾Ƶ� ��Ȯ�ϰ� strfry ���� ���� ���� �Ǵ� ����
  1. �� ���ڿ����� nStr1, nStr2 �� ������ �迭�� �α⺸��, �ϳ��� �迭�� ���� �����ϴ� �������� ����
  2. ��ó�� ���������ν� nStr[i]�� ���� 0�� �ƴ� �� Impossible���� �� �� ����
*/