// �־��� ������ ����� ��� ã�Ƴ��� �Լ� get_divisor()�� �ۼ��Ͽ� ����. ���� 8�� �־����� 1, 2, 4, 8�� ȭ�鿡 ����Ͽ��� �Ѵ�.
// �� �Լ��� �׽�Ʈ�ϱ� ���� main()�� �ۼ��϶�.
#include <iostream>
using namespace std;

void get_divisor(int x);

int main(){
    int num;

    cout << "���� �Է�: ";
    cin >> num;
    get_divisor(num);

    return 0;
}

void get_divisor(int x){
    for(int i=1; i<=x; i++){
        if(x % i == 0){
            cout << i << endl;
        }
    }
}