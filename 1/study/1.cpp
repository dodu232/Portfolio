// c++�� �� ��� ���
#include <iostream>
using namespace std;

int main(){
    
    int val, sum;

    for(int i=0; i<5; i++){
    cout << i+1 <<"��° ���� �Է�: " ;

    cin >> val;

    sum += val;

    }
    
    cout << "�հ�: " << sum << endl ;

    string name, phone;

    cout << "�̸� �Է�: ";
    cin >> name;

    cout << "��ȣ �Է�: ";
    cin >> phone;

    cout << "�̸�: " << name << " ��ȣ:" << phone << endl;

    cout << "���ڸ� �Է��ϼ���: " ;
    cin >> val;

    for(int i=1; i<=9; i++){
        cout << val << " * " << i << " = " << val * i << endl;
    }

    val = 0;
    while(true){
        cout << "�Ǹ� �ݾ� �Է�(����: ����): " ;
        cin >> val;
        if(val == -1){
            break;
        }
        cout << "�̹��� �޿�: " << 50 + val*0.12 << endl;
    }
    
    cout << "���α׷��� �����մϴ�."; 

    return 0;
}