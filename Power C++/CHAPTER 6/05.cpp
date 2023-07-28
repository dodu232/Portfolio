// 배열 원소들의 순서를 반대로 하는 함수를 작성하고 테스트하라. 
// 즉 예를 들어서 A[0]는 A[n-1]로 이동하고 A[n-1]은 A[0]로 이동한다.
#include <iostream>
using namespace std;

void reverse(int *A, int n);

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    reverse(arr, 10);

    for(int i=0; i<10; i++){
        cout << arr[i]  << " ";
    }
    cout << endl;

    return 0;
}

void reverse(int *A, int n){
    for(int i=0; i<n/2; i++){
        int temp = A[i];
        A[i] = A[n-i-1];
        A[n-i-1] = temp;
    }
}