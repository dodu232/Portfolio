// �迭���� Ư���� ������ ���ϴ� ���ҵ��� ���� ���Ͽ� ��ȯ�ϴ� �Լ��� �ۼ��ϰ� �׽�Ʈ�϶�.
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