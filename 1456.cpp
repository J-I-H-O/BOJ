#include <bits/stdc++.h>

#define MAX 10000001  //10e+14의 제곱근

using namespace std;

int main() {
  long long a, b, count = 0;
  //ISSUE: 동적할당 하지 않을 시 
  //터미널 프로세스 "C:\WINDOWS\System32\WindowsPowerShell\v1.0\powershell.exe -Command cmd /C c:\C++\boj\1456"이(가) 종료되었습니다(종료 코드: 1).
  bool *isPrime = new bool[MAX]; //10e+14의 제곱근

  cin >> a >> b;

  for(long long i = 2; i < MAX; i++) {
    isPrime[i] = true;
  }
  isPrime[0] = isPrime[1] = false;

  //소수 표시하기.
  //거의 소수를 구할 때 소수의 N제곰(N >= 2 인 경우만  count하므로 10e+14가 아닌, 10e+7까지만)
  for(long long i = 2; i < MAX; i++) {
    //i가 소수일 때,
    if(isPrime[i]) {
      //i의 배수는 모두 소수가 아님
      for(long long j = 2 * i; j < MAX; j += i) {
        isPrime[j] = false;
      }
    }
  }

  for(long long i = 2; i < MAX; i++) {
    if(isPrime[i]) {
      long long j = i;
      //현재 i의 값에 대해 i * i <= b 인 경우
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