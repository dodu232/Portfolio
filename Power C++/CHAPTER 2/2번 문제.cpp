// ����ڷκ��� x�� ���� �Ǽ��� �Է¹޾Ƽ� ������ ���� ���׽��� ���� ����ϴ� ���α׷��� �ۼ��϶�.
// 3x�� - 7x�� + 9
#include <iostream>
using namespace std;

int main(){
    double x;

    cout << "x�� ���� �Ǽ��� �Է��ϼ���. ";
    cin >> x;

    double val = 3 * (x*x*x) - 7 * (x*x) + 9;

    cout << "x�� " << x << "�� ��, 3x�� - 7x�� + 9�� ���� " << val <<  "�Դϴ�." << endl;

    return 0;
}