// ũ�Ⱑ 6 * 4�� 2���� �迭�� ������ �����Ͽ� �����ϰ� ����ϴ� ���α׷��� �ۼ��϶�.
// ������ ���̺귯�� �Լ��� rand()�� ����Ͽ� �����϶�.
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