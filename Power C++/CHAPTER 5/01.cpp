// �迭 day�� �ۼ��Ͽ� �Ʒ��� ���� �ʱ�ȭ�ϰ� �迭 ������ ���� ������ ���� ����ϴ� ���α׷��� �ۼ��϶�.
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
        cout << i+1 << "���� " << days[i] << "�ϱ��� �ֽ��ϴ�." << endl;
    }
}