#include <cstdio>

int main() {
  int a, b, c, mul_result;
  int nums[10] = {0,};

  scanf("%d\n%d\n%d", &a, &b, &c);

  mul_result = a * b * c;

  while(mul_result > 0) {
    nums[mul_result % 10]++;
    mul_result /= 10;
  }

  for(int i = 0; i < 10; i++) {
    printf("%d\n", nums[i]);
  }

  return 0;
}