#include <cstdio>

int main() {
  int n, k, temp1, temp2, room = 0;
  int students[2][6] = {0,}; //����, �г����� ������ �� �л� ��

  scanf("%d %d", &n, &k);
  for(int i = 0; i < n; i++) {
    scanf("%d %d", &temp1, &temp2);
    students[temp1][temp2-1]++;
  }

  for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 6; j++) {
      if(students[i][j] != 0) {
        if(students[i][j] % k == 0)
          room += students[i][j] / k;
        else
          room += students[i][j] / k + 1; 
      }
    }
  }

  printf("%d", room);

  return 0;
}