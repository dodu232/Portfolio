// 1���� �迭�� ���Ͷ�� �Ҹ���. 2���� ���͸� ���ϴ� �Լ��� vector_add�� �ۼ��϶�.
// �� �Լ��� �׽�Ʈ�ϱ� ���� �ڵ嵵 �ۼ��϶�.
// X + Y = (x1 + y1, x2 + y2, x3 + y3)
#include <iostream>
using namespace std;

void vector_add(int x[], int y[]);

int main(){
    int x[] = {1, 2, 3};
    int y[] = {4, 5, 6};

    vector_add(x, y);

    return 0;
}

void vector_add(int x[], int y[]){
    int z[3];

    for(int i=0; i<3; i++){
        z[i] = x[i] + y[i];
        cout << "x" << i+1 << " + y" << i+1 << " = " << z[i] << endl;
    }
}