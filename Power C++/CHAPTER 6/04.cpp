// 서로 대응되는 배열 A[]의 원소와 배열 B[]의 원소를 더하여 배열 C[]에 저장하는 함수를 작성하고 테스트하라.
// 즉 모든 i에 대하여 C[i] = A[i] + B[i]가 된다.
#include <iostream>
#include <time.h>
using namespace std;

void rand(int *A, int n);
void add(int *A, int *B, int *C, int n);

int main(){
    srand(time(NULL));

    const int SIZE = 10;
    int a[SIZE];
    int b[SIZE];
    int c[SIZE];

    rand(a, SIZE);
    rand(b, SIZE);

    add(a, b, c, SIZE);

    return 0;
}

void rand(int *A, int n){
    for(int i=0; i<n; i++){
        A[i] = rand() % 10;
        cout << A[i] << " ";
    }
    cout << endl;
}

void add(int *A, int *B, int *C, int n){
    for(int i=0; i<n; i++){
        C[i] = A[i] + B[i];
        cout << C[i] << " ";
    }
    cout << endl;
}