// 0부터 9까지의 난수를 100번 생성하여 가장 많이 생성된 수를 출력하는 프로그램을 작성하시오.
// 난수는 rand함수를 사용하여 생성하라.
#include <iostream>
#include <time.h>
using namespace std;

int main(){
    srand(time(NULL));
    int arr[10] = {0,};

    for(int i=0; i<100; i++){
        int r = rand() % 10;
        arr[r]++;
    }

    int max = arr[0];
    int max_arr = 0;
    for(int i=0; i<10; i++){
        if(arr[i] > max){
            max = arr[i];
            max_arr = i;
        }
    }

    cout << max_arr << ": " << max << endl;

    return 0;
}