// 2���� �������� �� ��(x1, y1)�� (x2, y2,)������ �Ÿ��� ����ϴ� dist_2d�� �ۼ��϶�
#include <iostream>
#include <math.h>
using namespace std;

double dist_2d(int x1, int y1, int x2, int y2);

int main(){
    cout << dist_2d(0,0,45,42) << endl;

    return 0;
}

double dist_2d(int x1, int y1, int x2, int y2){
    return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
}