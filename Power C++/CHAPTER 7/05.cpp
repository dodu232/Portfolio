// ����ڿ��Լ� �������� �޾Ƽ� ���� ������ ���ϴ� ���α׷��� �ۼ��϶�.
// ���� ������ ���ϴ� �Լ��� calc_area�� �ζ��� �Լ��� �ۼ��϶�.
#include <iostream>
using namespace std;

inline double calc_area(int x){
    return x * x * 3.14;
}

int main(){
    int r;

    cout << "������ �Է�: ";
    cin >> r;

    cout << "���� ������ " << calc_area(r) << "�Դϴ�." << endl;


    return 0;
}