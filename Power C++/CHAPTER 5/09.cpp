// ���� ǥ�� �� ���� �հ�, �� ���� �հ踦 ���ϴ� ���α׷��� �ۼ��϶�. ǥ�� 2���� �迭�� �̿��ϰ� ǥ���϶�.
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
        cout << i+1 << "�� �հ�: " << sum << endl;
    }

    cout << endl;

    for(int i=0; i<5; i++){
        int sum = 0;
        for(int j=0; j<3; j++){
            sum += arr[j][i];    
        }
        cout << i+1 << "�� �հ�: " << sum << endl;
    }
    
}