// �迭 A[]���� �־��� ���ڸ� Ž���Ͽ� ���ڸ� ����Ű�� �����͸� ��ȯ�ϴ� ������ ���� ������ ������ �Լ��� �ۼ��ϰ� �׽�Ʈ�϶�.
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