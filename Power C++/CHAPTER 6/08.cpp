// ������ �μ��� ����Ͽ� 2���� ������ �հ� ���� ���ÿ� ��ȯ�޴� �Լ��� �ۼ��ϰ� �׽�Ʈ�϶�. 
// ������ �μ��� ����Ͽ� ����� �޵��� �϶�.
#include <iostream>
using namespace std;

void get_sum_diff(int x, int y, int *p_sum, int *p_diff);

int main(){
    int x = 10;
    int y = 4;
    int sum;
    int diff;

    get_sum_diff(x, y, &sum, &diff);

    cout << "��: " << sum << ", ��: " << diff << endl;

    return 0;
}

void get_sum_diff(int x, int y, int *p_sum, int *p_diff){
    *p_sum = x + y;
    *p_diff = x - y;
}