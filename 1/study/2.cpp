// 함수 오버로딩
#include <iostream>

void swap(int * ptr1, int * ptr2){
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void swap(char * ptr1, char * ptr2){
    char temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void swap(double * ptr1, double * ptr2){
    double temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main(){
    int num1=20, num2=30;
    swap(&num1, &num2);
    std::cout<< num1 << ' ' << num2 << std::endl;

    char ch1='a', ch2='z';
    swap(&ch1, &ch2);
    std::cout<< ch1 << ' ' << ch2 << std::endl;

    double db1=1.111, db2=2.222;
    swap(&db1, &db2);
    std::cout<< db1 << ' ' << db2 << std::endl;

    return 0;
}