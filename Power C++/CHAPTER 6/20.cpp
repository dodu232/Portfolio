// ������ ö�� ���� ���α׷��� �ۼ��Ͽ� ����. ���ڿ��� �Է����� �޾Ƽ� ���ڿ� �ȿ� ��ħǥ�� ������
// ���ڿ��� ù ��° ���ڰ� �빮�������� �˻��Ѵ�. ���� �빮�ڰ� �ƴϸ� �빮�ڷ� ��ȯ�Ѵ�.
// ���� ������ ���� ��ħǥ�� �����ϴ����� �˻��Ѵ�. ���� ��ħǥ�� ������ �־��ش�.
// ��, �Էµ� ���ڿ��� "pointer is easy"��� "Pointer is easy."�� ��ȯ�Ͽ� ȭ�鿡 ����Ѵ�.
#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char ch[50] = {0,};

    cout << "���� �Է�: ";
    cin.getline(ch, 50);

    if(isalpha(ch[0]) == 2){
        ch[0] -= 32;
    }

    int end;

    for(int i=49; i>0; i--){
        if(isalpha(ch[i]) != 0 && ch[i] == '.'){
            break;
        } else if(isalpha(ch[i]) != 0){
            ch[i+1] = '.';
            break;
        }
    }

    cout << ch << endl;

    return 0;
}