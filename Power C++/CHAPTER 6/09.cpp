// �Ǽ������� ����Ǿ� �ִ� double�� �迭 A[]���� ��հ�, �ִ밪, ��ü�� ���� ����Ͽ� ������ �μ��� ���Ͽ� ��ȯ�ϴ� 
// �Լ��� �����϶�
#include <iostream>
using namespace std;

void get_stat(double A[], double *p_avg, double *p_max, double *p_sum);

int main(){
    double arr[] = {1.23, 3.34, 9.34, 2.23, 4.93, 0.49};
    double avg, max, sum;
    get_stat(arr, &avg, &max, &sum);

    cout << "���: " << avg << ", �ִ밪: " << max << ", ��ü ��: " << sum << endl;

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