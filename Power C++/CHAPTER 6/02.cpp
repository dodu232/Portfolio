// �迭�� ���ҵ��� ȭ�鿡 ����ϴ� �Լ��� �ۼ��ϰ� �׽�Ʈ�϶�. 
// ��� ������ A[] = {1, 2, 3, 4, 5}�� ���� ������ �ǵ��� �϶�.
#include <iostream>
using namespace std;

void print(int *A, int n);

int main(){
    int arr[] = {1, 2, 3, 4, 5};

    print(arr, 5);

    return 0;
}

void print(int *A, int n){
    cout << "A[] = {";
    for(int i=0; i<n; i++){
        cout << A[i];
        if(i < n-1){
            cout << ", ";
        }
    }
    cout << "}" << endl;
}