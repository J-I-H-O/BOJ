#include <cstdio>

int main() {
  int n, x, temp, found = 0;
  //�� ������ ���� ���� ����
  bool nums[2000001];

  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    scanf("%d", &temp);
    nums[temp] = true;  //�Է¹��� ���ڿ� �ش��ϴ� index�� ���� ��Ҹ� true�� ����
  }
  scanf("%d", &x);

  for(int i = 1; i < x/2; i++) {
    if(nums[i] && nums[x - i])
      found++;
  }

  printf("%d", found);

  return 0;
}