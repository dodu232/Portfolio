// ����ڿ��� ���� �̸��� ���� �̸����� ����� �Է��ϵ��� �Ͽ��� �̸��� ù���ڿ� ��ħǥ,
// ���� ����ϴ� ���α׷��� �ۼ��϶�. 
// �� ����ڰ� HONG GIL DONG�� �Է��ϸ� G. D. HONG�� ���� ����ϵ��� �Ѵ�.
#include <iostream>
using namespace std;

int main(){
    char ch[50];

    cout << "�̸� �Է�: ";
    cin.getline(ch, 50);

    int chEnd;

    // �̸��� ���ڼ� Ȯ�� �� �빮�ڷ� ����
    for(int i=0; i<50; i++){
        if(isalpha(ch[i]) == 2){
            ch[i] -= 32;
        } else if(isalpha(ch[i]) == 0 && isalpha(ch[i+1]) == 0){
            chEnd = i-1;
            break;
        }
    }

    // �̸��� �ʼ� ���
    for(int i=0; i<chEnd; i++){
        if(i == 0){

        } else if(isalpha(ch[i]) != 0 && isalpha(ch[i-1]) == 0){
            cout << ch[i] << ". ";
        }
    }

    // �� ù��° �� ���ڸ� ���� �������� ���
    for(int i=0; i<chEnd; i++){
        if(isalpha(ch[i]) != 0){
            cout << ch[i];
        } else {
            break;
        }
    }

    return 0;
}