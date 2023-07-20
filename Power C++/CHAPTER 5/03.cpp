// 1차원 배열은 벡터라고도 불린다. 2개의 백터를 더하는 함수인 vector_add를 작성하라.
// 이 함수를 테스트하기 위한 코드도 작성하라.
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