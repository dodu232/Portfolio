// ���� �����Ǵ� �迭 A[]�� ���ҿ� �迭 B[]�� ���Ҹ� ���Ͽ� �迭 C[]�� �����ϴ� �Լ��� �ۼ��ϰ� �׽�Ʈ�϶�.
// �� ��� i�� ���Ͽ� C[i] = A[i] + B[i]�� �ȴ�.
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