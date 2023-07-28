// 실수값들이 저장되어 있는 double형 배열 A[]에서 평균값, 최대값, 전체의 합을 계산하여 포인터 인수를 통하여 반환하는 
// 함수를 구현하라
#include <iostream>
using namespace std;

void get_stat(double A[], double *p_avg, double *p_max, double *p_sum);

int main(){
    double arr[] = {1.23, 3.34, 9.34, 2.23, 4.93, 0.49};
    double avg, max, sum;
    get_stat(arr, &avg, &max, &sum);

    cout << "평균: " << avg << ", 최대값: " << max << ", 전체 합: " << sum << endl;

    return 0;
}

void get_stat(double A[], double *p_avg, double *p_max, double *p_sum){
    *p_max = A[0];
    for(int i=0; i<6; i++){
        *p_sum += A[i];
        if(*p_max < A[i]){
            *p_max = A[i];
        }
    }
    *p_avg = *p_sum / 6;
}