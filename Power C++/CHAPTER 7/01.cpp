// ����ڷκ��� �������� �޾Ƽ� ��ȯ�ϴ� get_input() �Լ��� �ۼ��Ͽ� ����. get_input�� ���۷��� Ÿ����
// �Ű� ������ ���Ͽ� ���� ��ȯ�Ѵ�. ���� �� ���� x�� ����ڰ� �Է��� �������� �����ϰ�
// ������ ������ ���� ȣ���Ѵ�.
#include <iostream>
using namespace std;

void get_input(int &x);

int main(){
    int num;

    get_input(num);

    cout << num << endl;

    return 0;
}

void get_input(int &x){
    cout << "���� �� �Է�: ";
    cin >> x;
}