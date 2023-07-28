// 배열에서 특정한 범위에 속하는 원소들의 합을 구하여 반환하는 함수를 작성하고 테스트하라.
#include <iostream>
using namespace std;

int sum_range(int *p_start, int *p_end);

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << sum_range(&arr[3], &arr[7]) << endl;

    return 0;
}

int sum_range(int *p_start, int *p_end){
    int sum = 0;
    for(int i=0; i<=*p_end-*p_start; i++){
        sum += *(p_start + i);
    }
    return sum;
}