// �� ���� ���� �߿��� �� ū ���� ��ȯ�ϴ� �Լ� get_max(x, y)�� �ߺ� �Լ��� �̿��Ͽ�
// ������ ����, �Ǽ��� �������� �ߺ��Ͽ��� �ۼ��� �Ŀ� �׽�Ʈ�϶�.
#include <iostream>
using namespace std;

int get_max(int x, int y);

double get_max(double x, double y);

int main(){

    cout << get_max(1, 3) << ", " << get_max(1.4, 4.2) << endl;

    return 0;
}

int get_max(int x, int y){
    if(x < y){
        return y;
    } else {
        return x;
    }
}

double get_max(double x, double y){
    if(x < y){
        return y;
    } else {
        return x;
    }
}