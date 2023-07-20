// 크기가 6 * 4인 2차원 배열에 난수를 생성하여 저장하고 출력하는 프로그램을 작성하라.
// 난수는 라이브러리 함수인 rand()를 사용하여 생성하라.
#include <iostream>
#include <time.h>
using namespace std;

int main(){
    srand(time(NULL));
    int arr[6][4];

    for(int i=0; i<6; i++){
        for(int j=0; j<4; j++){
            arr[i][j] = rand();
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}