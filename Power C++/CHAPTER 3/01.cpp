// 0�� �ƴ� 3���� ��ǥ�� (x1, y1), (x2, y2), (x3, y3)�� �Է� �޾Ƽ� �ﰢ���� ���� �� �ִ����� �˻��ϴ� ���α׷��� �ۼ��϶�.
#include <iostream>
using namespace std;

int main(){
    int x1, x2, x3;
    int y1, y2, y3;

    cout << "x1 �Է�: ";
    cin >> x1;
    cout << "y1 �Է�: ";
    cin >> y1;
    cout << "x2 �Է�: ";
    cin >> x2;
    cout << "y2 �Է�: ";
    cin >> y2;
    cout << "x3 �Է�: ";
    cin >> x3;
    cout << "y3 �Է�: ";
    cin >> y3;

    if(x1 == x2 == x3 || y1 == y2 == y3){ // 3�� ���� ���� �� 
        cout << "�ﰢ�� �ȵ�!" << endl;
    } else if((x1 == x2 && y1 == y2) || (x1 == x3 && y1 == y3) || (x2 == x3 && y2 == y3)) { // �� �ΰ��� ���� ��ġ
        cout << "�ﰢ�� �ȵ�!" << endl;
    } else {
        cout << "�ﰢ�� ��!" << endl;
    }

    return 0;
}