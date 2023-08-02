// ������� ���Ǹ� ���ϴ� ���α׷��� �ۼ��϶�. ������� ���Ǹ� ���ϴ� �Լ� cylinder(r,h)�� �ۼ��Ͽ�
// ����ϰ� ���� ������� ���̰� �־����� ������ 1.0�̶�� �����Ѵ�. ����Ʈ �Ű� ������ ����϶�.
#include <iostream>
using namespace std;

double cylinder(double r, double h = 1.0);

int main(){
    int r;
    double h;

    cout << "������ �Է�: ";
    cin >> r;

    cout << "���� �Է�: ";
    cin >> h;

    if(h <= 0){
        cout << cylinder(r) << endl;
    } else {
        cout << cylinder(r, h) << endl;
    }

    return 0;
}

double cylinder(double r, double h){
    return r * r * 3.14 * h;
}