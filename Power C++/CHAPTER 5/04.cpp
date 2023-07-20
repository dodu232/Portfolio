// 앞의 문제를 참조하여 2개의 벡터의 내적(dot product)를 계산하는 함수인 vector_dot_prod를 작성하라.
// 이 함수를 테스트하기 위한 코드도 작성하라. 벡터 내적은 다음과 같이 정의된다.
// X · Y = (x1y1 + x2y2+ x3y3)
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

    cout << "벡터의 내적 = " << z[0] + z[1] + z[2] << endl;
}