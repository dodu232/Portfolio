// �迭 A[]�� �迭 B[]�� �����ϴ� �Լ��� �ۼ��ϰ� �׽�Ʈ�϶�.
#include <iostream>
using namespace std;

void copy(int *A, int *B, int n);

int main(){
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[10];

    copy(arr1, arr2, 10);

    return 0;
}

void copy(int *A, int *B, int n){
    for(int i=0; i<n; i++){
        B[i] = A[i];
        cout << B[i] << " ";
    }
    cout << endl;
}