// ���۷��� Ÿ���� �Ű� ������ ���� ������ �޾Ƽ� ���� �� ��� ����� make_double�� �ۼ��Ͽ� ����.
#include <iostream>
using namespace std;

void make_double(int &x);

int main(){
    int num;

    cout << "���� �Է�: ";
    cin >> num;

    make_double(num);

    cout << num << endl;

    return 0;
}

void make_double(int &x){
    x *= 2;
}