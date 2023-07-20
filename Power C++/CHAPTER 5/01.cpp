// 배열 day를 작성하여 아래와 같이 초기화하고 배열 원소의 값을 다음과 같이 출력하는 프로그램을 작성하라.
// 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
#include <iostream>
using namespace std;

void print_day(int days[], int SIZE);

int main(){
    const int SIZE = 12;
    int days[SIZE] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    print_day(days, SIZE);

    return 0;
}

void print_day(int days[], int SIZE){
    for(int i=0; i<SIZE; i++){
        cout << i+1 << "월은 " << days[i] << "일까지 있습니다." << endl;
    }
}