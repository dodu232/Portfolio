// 1. for���� �̿��� ���丮�� ���� ����ϴ� ���α׷� �ۼ�
// 2. while���� �̿��� ���丮�� ���� ����ϴ� ���α׷� �ۼ�
#include <iostream>
using namespace std;

int main(){
    int num = 20;
    cout << "----for----" << endl;
    for(int i=1; i<=num; i++){
        int temp = 1;
        for(int j=1; j<=i; j++){
            temp *= j;
        }
        cout << i << ": " << temp << endl;
    }

    cout << "----while----" << endl;
    int cnt = 1;
    while(cnt <= num){
        int temp = 1;
        int cnt2 = 1;
        while(temp <= cnt){
            temp *= cnt2;
            cnt2++;
        }
        cout << cnt << ": " << temp << endl;
        cnt++;
    }
}