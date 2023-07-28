// 배열의 원소들을 난수를 사용하여 채우는 함수를 작성하고 테스트하라.
// 난수는 라이브러리 함수인 rand()를 사용하여 생성한다.
#include <iostream>
#include <time.h>
using namespace std;

void fill(int *A, int n);

int main(){
    srand(time(NULL));

    int arr[10];

    fill(arr, 10);

    return 0;
}

void fill(int *A, int n){
    for(int i=0; i<n; i++){
        A[i] = rand();
        cout << A[i] << " ";
    }
    cout << endl;
}