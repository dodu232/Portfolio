// �־��� ������ �Ҽ������� �˻��ϴ� �Լ� prime()�� �ۼ��϶�.
// �� �Լ��� �̿��Ͽ� 1���� 100 ���̿� �����ϴ� �Ҽ����� ��� ����϶�.
#include <iostream>
using namespace std;

void prime();

int main(){
    prime();

    return 0;
}

void prime(){
    for(int i=1; i<=100; i++){
        int cnt = 0;
        for(int j=1; j<i; j++){
            if(i % j == 0){
                cnt++;
            }
        }
        if(cnt == 1){
            cout << i << endl;
        }
    }
}