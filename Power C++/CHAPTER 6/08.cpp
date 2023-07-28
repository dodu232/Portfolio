// 포인터 인수를 사용하여 2개의 정수의 합과 차를 동시에 반환받는 함수를 작성하고 테스트하라. 
// 포인터 인수를 사용하여 결과를 받도록 하라.
#include <iostream>
using namespace std;

void get_sum_diff(int x, int y, int *p_sum, int *p_diff);

int main(){
    int x = 10;
    int y = 4;
    int sum;
    int diff;

    get_sum_diff(x, y, &sum, &diff);

    cout << "합: " << sum << ", 차: " << diff << endl;

    return 0;
}

void get_sum_diff(int x, int y, int *p_sum, int *p_diff){
    *p_sum = x + y;
    *p_diff = x - y;
}