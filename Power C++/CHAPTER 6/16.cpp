// ȸ��(palindrome)�̶� �ٷ� �аų� �Ųٷ� �о ���� ���� �Ǵ� �����̴�. 
// ���� ��� "Able was I ere I saw Elba"�� ���� ���ڿ��� ȸ���̴�. 
// ����ڷκ��� ���ڿ��� �޾Ƽ� ȸ�� ���θ� �Ǻ��Ͽ� �� ����� ȭ�鿡 ����ϴ� ���α׷��� �ۼ��Ͽ� ����.
#include <iostream>
using namespace std;

int main(){
    char ch[100];

    cout << "���� �Է�: ";
    cin.getline(ch, 100);

    int chEnd;

    for(int i=0; i<100; i++){
        if(isalpha(ch[i]) == 1){
            ch[i] += 32;
        } else if(isalpha(ch[i]) == 0 && isalpha(ch[i+1]) == 0){
            chEnd = i-1;
            break;
        }
    }

    bool check = true;

    for(int i=0; i<chEnd; i++){
        if(ch[i] != ch[chEnd-i]){
            check = false;
            break;
        }
    }

    if(check){
        cout << "ȸ�� �Դϴ�." <<endl;
    } else {
        cout << "ȸ�� �ƴ�" << endl;
    }

    return 0;
}

// �� �ϳ� ���� �ٿ� ���� �� �ö���
// �� �� �¸� ���� �� �� �Ϻ� �ö���
