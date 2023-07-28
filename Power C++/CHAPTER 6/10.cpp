// 2개의 정렬된 정수 배열 A[]와 B[]가 있다고 가정하자. 이 2개의 배열을 합쳐서 하나의 정렬된 배열 C[]로 만드는 함수를
// 작성하여 보자. 다음과 같은 함수 원형을 가진다고 가정하라.
#include <iostream>
using namespace std;

void merge(int *A, int *B, int *C);

int main(){
    const int SIZE = 5;
    int a[SIZE] = {1, 3, 5, 6, 7};
    int b[SIZE] = {2, 4, 8, 9, 10};
    int c[SIZE*2];

    merge(a, b, c);

    return 0;
}

void merge(int *A, int *B, int *C){
    int cnt = 0;
    for(int i=0; i+cnt<10;){
        if(A[i] > B[cnt] && cnt < 5){
            C[i+cnt] = B[cnt];
            cnt++;
        }else if(A[i] < B[cnt] && i < 5){
            C[i+cnt] = A[i];
            i++;
        } else if(cnt == 5){
            C[i+cnt] = A[i];
            i++;
        } else if(i == 5){
            C[i+cnt] = B[cnt];
            cnt++;
        }
    }

    for(int i=0; i<10; i++){
        cout << C[i] << " ";
    }
    cout << endl;
}
