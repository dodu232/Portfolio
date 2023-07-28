// 배열의 원소들은 화면에 출력하는 함수를 작성하고 테스트하라. 
// 출력 형식은 A[] = {1, 2, 3, 4, 5}와 같은 형식이 되도록 하라.
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