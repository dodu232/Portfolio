// ���� ������ �����Ͽ� 2���� ������ ����(dot product)�� ����ϴ� �Լ��� vector_dot_prod�� �ۼ��϶�.
// �� �Լ��� �׽�Ʈ�ϱ� ���� �ڵ嵵 �ۼ��϶�. ���� ������ ������ ���� ���ǵȴ�.
// X �� Y = (x1y1 + x2y2+ x3y3)
#include <iostream>
using namespace std;

void vector_dot_prod(int x[], int y[]);

int main(){
    int x[] = {1, 2, 3};
    int y[] = {4, 5, 6};

    vector_dot_prod(x, y);

    return 0;
}

void vector_dot_prod(int x[], int y[]){
    int z[3];

    for(int i=0; i<3; i++){
        z[i] = x[i] * y[i];
        cout << "x" << i+1 << " * y" << i+1 << " = " << z[i] << endl;
    }

    cout << "������ ���� = " << z[0] + z[1] + z[2] << endl;
}