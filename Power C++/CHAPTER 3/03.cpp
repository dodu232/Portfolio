// 0�� 1�� �Ǿ��ִ� �������� �Է¹޾Ƽ� 10������ ��ȯ�ϴ� ���α׷��� �ۼ��Ͽ� ����.
// ���⼭ 2������ ���ڿ��� �Է¹޴� ���� �ƴ϶� ������ �Է¹޴´ٰ� �����϶�.
// ���� ������ ������ %�� ������ ������ /�� �̿��ϸ� ������ �� �ڸ����� �и��� �� �ִ�.
#include <iostream>
using namespace std;

int main(){
    int bNum, dNum;

    cout << "������ �Է�: " ;
    cin >> bNum;

    int x = 1;
    int cnt = 1;
    while(bNum / x > 0){
        int temp = bNum % (x * 10) / x;

        if(temp % 2 == 1){
            int a = 1;
            for(int i=1; i<cnt; i++){
                a *= 2;
            }
            dNum += a;
        }
        cnt++;
        x *= 10;
    }

    cout << bNum << "�� 10������ " << dNum << "�Դϴ�." << endl;

    return 0;
}