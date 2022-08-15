#include <cstdio>

int main() {
  int n, v, temp;
  int nums[201] = {};

  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    scanf("%d", &temp);
    nums[temp + 100]++;
  }
  scanf("%d", &v);

  printf("%d", nums[v + 100]);

  return 0;
}