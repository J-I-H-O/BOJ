#include <cstdio>
#define LEN_ALPHABET 26

int main() {
  char input[101];
  int num_alphabet[LEN_ALPHABET] = {0,};

  scanf("%s", input);

  int cur_index = 0;
  char next = input[cur_index];

  while(next != '\0') {
    num_alphabet[next - 'a']++;
    cur_index++;
    next = input[cur_index];
  }

  for(int i = 0; i < LEN_ALPHABET; i++) {
    printf("%d ", num_alphabet[i]);
  }

  return 0;
}