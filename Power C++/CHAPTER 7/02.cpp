// 1�� ������ get_input() �Լ��� �ߺ� �����Ͽ� ����. ����ڰ� �Է��� �ΰ��� �������� ��ȯ�� �� �ֵ���
// get_input()�� �ߺ� �����϶�. ���� ���� ���� ��ȯ�� ���� ���۷��� Ÿ���� ����ϸ� ������ �ִ°�?#include <iostream>
#include <iostream>
using namespace std;

void get_input(int &x, int &y);

int main(){
    int num1, num2;

    get_input(num1, num2);

    cout << num1 << ", " << num2 << endl;

    return 0;
}

void get_input(int &x, int &y){
    cout << "ù ��° ���� �� �Է�: ";
    cin >> x;

    cout << "�� ��° ���� �� �Է�: ";
    cin >> y;
}