// 배열 A[]에서 주어진 숫자를 탐색하여 숫자를 가리키는 포인터를 반환하는 다음과 같은 원형을 가지는 함수를 작성하고 테스트하라.
#include <iostream>
using namespace std;

int *search(int *A, int x);

int main(){
    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    cout << *search(arr, 4) << endl;

    return 0;
}

int *search(int *A, int x){
    int *p;
    for(int i=0; i<10; i++){
        if(*(A+i) == x){
            p = A + i;
        }
    }
    return p;
}