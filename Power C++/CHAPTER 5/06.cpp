// 0���� 9������ ������ 100�� �����Ͽ� ���� ���� ������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
// ������ rand�Լ��� ����Ͽ� �����϶�.
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