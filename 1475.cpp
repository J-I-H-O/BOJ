#include <cstdio>

int main() {
  int room_num, max;
  int last_num; //���� �����ִ� �� ��ȣ�� ������ �ڸ�
  int nums[10] = {0,};

  scanf("%d", &room_num);

  while(room_num > 0) {
    last_num = room_num % 10;
    nums[last_num]++;
    if(last_num == 6 || last_num == 9) {
      if((nums[6] + nums[9]) % 2 == 0) 
        nums[6] = nums[9] = (nums[6] + nums[9])/2;
    }
    room_num /= 10;
  }

  //�ִ밪 ã��
  max = nums[0];
  for(int i = 0; i < 10; i++) {
    if(max < nums[i])
      max = nums[i];
  }

  printf("%d", max);

  return 0;
}