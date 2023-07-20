// ����ڷκ��� 20�� ������ �Ǽ� �ڷḦ �о ��հ� ǥ�� ������ ����ϴ� ���α׷��� �ۼ��϶�.
// ����ڷκ��� ���� �ڷ���� �迭�� �����϶�. ����̶� n���� �Ǽ��� �־��� ���� ��, ������ ���� ���ȴ�.
// ǥ�� ������ �л��� ���� ���������� �л��� ������ ���� ���ȴ�. ǥ�� ������ �ڷᰡ ��հ� ������ 
// ��� ������ ���̷� �����ϰ� �ִ°��� ��Ÿ���� �ϳ��� ô���̴�.
#include <iostream>
#include <math.h>
using namespace std;

double average(double arr[], int size);
double standard_deviation(double arr[], int size, double ave);

int main(){
    const int SIZE = 20;
    double arr[SIZE];

    for(int i=0; i<SIZE; i++){
        cout << "�Ǽ� �Է�(0�� ����): ";
        cin >> arr[i];
        if(arr[i] == 0){
            break;
        }
    }

    double ave = average(arr, SIZE);

    cout << "���: " << ave << endl;

    double std_dev = standard_deviation(arr, SIZE, ave);

    cout << "ǥ�� ����: " << std_dev << endl;

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