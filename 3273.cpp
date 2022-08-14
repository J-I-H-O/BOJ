#include <cstdio>

int main() {
  int n, x, found = 0;
  int arr[100000];

  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  scanf("%d", &x);

  for(int i = 0; i < n - 1; i++) {
    if(arr[i] > x) continue;
    for(int j = i + 1; j < n; j++) {
      if(arr[i] + arr[j] == x)
        found++;
    }
  }

  printf("%d", found);

  return 0;
}