#include <bits/stdc++.h>

#define MAX 10000001  //10e+14�� ������

using namespace std;

int main() {
  long long a, b, count = 0;
  //ISSUE: �����Ҵ� ���� ���� �� 
  //�͹̳� ���μ��� "C:\WINDOWS\System32\WindowsPowerShell\v1.0\powershell.exe -Command cmd /C c:\C++\boj\1456"��(��) ����Ǿ����ϴ�(���� �ڵ�: 1).
  bool *isPrime = new bool[MAX]; //10e+14�� ������

  cin >> a >> b;

  for(long long i = 2; i < MAX; i++) {
    isPrime[i] = true;
  }
  isPrime[0] = isPrime[1] = false;

  //�Ҽ� ǥ���ϱ�.
  //���� �Ҽ��� ���� �� �Ҽ��� N����(N >= 2 �� ��츸  count�ϹǷ� 10e+14�� �ƴ�, 10e+7������)
  for(long long i = 2; i < MAX; i++) {
    //i�� �Ҽ��� ��,
    if(isPrime[i]) {
      //i�� ����� ��� �Ҽ��� �ƴ�
      for(long long j = 2 * i; j < MAX; j += i) {
        isPrime[j] = false;
      }
    }
  }

  for(long long i = 2; i < MAX; i++) {
    if(isPrime[i]) {
      long long j = i;
      //���� i�� ���� ���� i * i <= b �� ���
      while(j <= b / i) {
        j *= i;
        if(a <= j)  count++;
      }
    }
  }
  cout << count;

  delete []isPrime;

  return 0;
}