// ����ڷκ��� 3���� ������ �о� ���� �Ŀ� if-else ���� ����Ͽ� ���� ���� ���� �����ϴ� ���α׷��� �ۼ��϶�.
#include <iostream>
using namespace std;

int main(){
    int n1, n2;
    int min;

    cout << "ù��° �� �Է�: ";
    cin >> min;

    cout << "�ι�° �� �Է�: ";
    cin >> n1;

    cout << "����° �� �Է�: ";
    cin >> n2;

    if(n1 < min && n1 < n2){
        min = n1;
    } else if(n2 < min){
        min = n2;
    }

    cout << "���� ���� ���� " << min << "�Դϴ�." << endl;

    return 0;
}