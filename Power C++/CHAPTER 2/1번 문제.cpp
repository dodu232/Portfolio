// ������ ü���� ���ϴ� ���α׷��� �ۼ��Ͽ� ����. ü���� ���� * �ʺ� * ���̷� ���ȴ�. 
// ������ ũ��� ����ڰ� �Է��Ѵ�. ������ ũ��� 200 * 200 * 200�� ���� �ʴ´�. ���Ǵ� �޸��� ũ�⸦ �ּҷ� �Ͽ� ����
#include <iostream>
using namespace std;

int main(){
  short answer;
  int volume;
  
  cout << "������ ����, �ʺ�, ���̸� �Է��ϸ� ���ǰ� ���Ǵ� ���α׷� �Դϴ�." << endl;
  cout << "���ڴ� 200���Ϸ� �Է��� �ּ���." << endl;
  
  cout << "������ ���̸� �Է��ϼ���. ";
  cin >> answer;
  volume += answer;
  
  cout << "������ �ʺ� �Է��ϼ���. ";
  cin >> answer;
  volume *= answer;
  
  cout << "������ ���̸� �Է��ϼ���. ";
  cin >> answer;
  volume *= answer;
  
  cout << "������ ���Ǵ� " << volume << "�Դϴ�." << endl;
  
  return 0; 
}