// ���� n�� k�� �޾Ƽ� n^k���� ����ϴ� �Լ� ipower�� �ۼ��Ѵ�.
// �� �Լ��� ȣ���Ͽ� 3^0���� 3^10������ ���� ����ϴ� ���α׷��� �ۼ��϶�
#include <iostream>
using namespace std;

void ipower(int n, int k);

int main(){
    ipower(3, 10);

    return 0;
}

void ipower(int n, int k){
    for(int i=0; i<=k; i++){
        int temp = 1;
        for(int j=1; j<=i; j++){
            temp *= n;
        }
        cout << n << "^" << i << " = " << temp << endl;
    }
}