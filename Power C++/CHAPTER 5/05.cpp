// 사용자로부터 20개 이하의 실수 자료를 읽어서 평균과 표준 편차를 계산하는 프로그램을 작성하라.
// 사용자로부터 받은 자료들은 배열에 저장하라. 평균이란 n개의 실수가 주어져 있을 때, 다음과 같이 계산된다.
// 표준 편차는 분산의 양의 제곱근으로 분산은 다음과 같이 계산된다. 표준 편차는 자료가 평균값 주위에 
// 어느 정도의 넓이로 분포하고 있는가를 나타내는 하나의 척도이다.
#include <iostream>
#include <math.h>
using namespace std;

double average(double arr[], int size);
double standard_deviation(double arr[], int size, double ave);

int main(){
    const int SIZE = 20;
    double arr[SIZE];

    for(int i=0; i<SIZE; i++){
        cout << "실수 입력(0은 종료): ";
        cin >> arr[i];
        if(arr[i] == 0){
            break;
        }
    }

    double ave = average(arr, SIZE);

    cout << "평균: " << ave << endl;

    double std_dev = standard_deviation(arr, SIZE, ave);

    cout << "표준 편차: " << std_dev << endl;

    return 0;
}

double average(double arr[], int size){
    double d;
    int cnt;
    for(int i=0; i<size; i++){
        if(arr[i] == 0){
            break;
        }
        d += arr[i];
        cnt++;
    }
    return (double)d / cnt;
}

double standard_deviation(double arr[], int size, double ave){
    double d = 0;
    int cnt;
    for(int i=0; i<size; i++){
        if(arr[i] == 0){
            break;
        }
        d += (arr[i] - ave) * (arr[i] - ave);
        cnt++;
    }
    return sqrt(d/cnt);
}