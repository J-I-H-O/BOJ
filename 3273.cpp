#include <cstdio>

int main() {
  int n, x, temp, found = 0;
  //각 숫자의 등장 여부 저장
  bool nums[2000001];

  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    scanf("%d", &temp);
    nums[temp] = true;  //입력받은 숫자에 해당하는 index를 가진 요소를 true로 변경
  }
  scanf("%d", &x);

  for(int i = 1; i < (x+1)/2; i++) {
    if(nums[i] && nums[x - i])
      found++;
  }

  printf("%d", found);

  return 0;
}