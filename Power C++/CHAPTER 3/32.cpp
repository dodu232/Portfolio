// �Ǻ���ġ ������ ������ ���� ���ǵǴ� �����̴�.
// f0=0, f1=1, f(i+1)=f(i)+f(i-1) (i=1, 2, ...)
// �Ǻ���ġ ���������� ���� 2���� ���Ҹ� ���Ͽ� ���� ���Ҹ� �����. 
// �Ǻ���ġ ������ ��ǻ�Ϳ����� Ž�� ���� � ���Ǳ⵵ �Ѵ�. �Ǻ���ġ ������ �����Ͽ� ����ϴ� ���α׷��� �ۼ��Ͽ� ����.
#include <iostream>
using namespace std;

int main(){
    int num1 = 0;
    int num2 = 1;
    int cnt; 
    cout << "�� ��° �ױ��� ���ұ��: ";
    cin >> cnt;
    for(int i=0; i<cnt; i++){
        int temp = num1 + num2;
        num1 = num2;
        num2 = temp;
        cout << temp;
        if(i < cnt-1){
            cout << ", ";
        }
    }
}