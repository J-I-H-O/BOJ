#include <iostream>
using namespace std;

int n;

void recursive(int k) {
  for(int i = 0; i < (n-k) * 4; i++) cout << "_";
  cout << "\"����Լ��� ������?\"\n";
  if(k == 0){
    for(int i = 0; i < (n-k) * 4; i++) cout << "_";
    cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";
    for(int i = 0; i < (n-k) * 4; i++) cout << "_";
    cout << "��� �亯�Ͽ���.\n";
    return;
  }
  for(int i = 0; i < (n-k) * 4; i++) cout << "_";
  cout << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
  for(int i = 0; i < (n-k) * 4; i++) cout << "_";
  cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
  for(int i = 0; i < (n-k) * 4; i++) cout << "_";
  cout << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";
  recursive(k-1);
  for(int i = 0; i < (n-k) * 4; i++) cout << "_";
  cout << "��� �亯�Ͽ���.\n";
}

int main() {
  cin >> n;

  cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
  recursive(n);

  return 0;
}