// �迭 ���ҵ��� ������ �ݴ�� �ϴ� �Լ��� �ۼ��ϰ� �׽�Ʈ�϶�. 
// �� ���� �� A[0]�� A[n-1]�� �̵��ϰ� A[n-1]�� A[0]�� �̵��Ѵ�.
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