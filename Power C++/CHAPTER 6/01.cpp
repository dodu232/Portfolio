// �迭�� ���ҵ��� ������ ����Ͽ� ä��� �Լ��� �ۼ��ϰ� �׽�Ʈ�϶�.
// ������ ���̺귯�� �Լ��� rand()�� ����Ͽ� �����Ѵ�.
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