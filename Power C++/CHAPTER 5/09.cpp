// 다음 표의 각 행의 합계, 각 열의 합계를 구하는 프로그램을 작성하라. 표는 2차원 배열을 이용하고 표현하라.
// 12 56 32 16 98
// 99 56 34 41 3
// 65 3  87 78 21
#include <iostream>
using namespace std;

int main(){
    int arr[][5] = {{12, 56, 32, 16, 98}, {99, 56, 34, 41, 3}, {65, 3, 87, 78, 21}};

    for(int i=0; i<3; i++){
        int sum = 0;
        for(int j=0; j<5; j++){
            sum += arr[i][j]; 
        }
        cout << i+1 << "행 합계: " << sum << endl;
    }

    cout << endl;

    for(int i=0; i<5; i++){
        int sum = 0;
        for(int j=0; j<3; j++){
            sum += arr[j][i];    
        }
        cout << i+1 << "열 합계: " << sum << endl;
    }
    
}