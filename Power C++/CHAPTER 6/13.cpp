// ���̺귯�� �Լ��� strlen()�� ����� �Լ��� ���� �ۼ��Ͽ� ����. int str_len(char *s)�� ������ �����ٰ� ��������.
// str_len�� ���ڿ��� ��� �ִ� ���ڵ��� ������ ��ȯ�Ѵ�.
#include <iostream>
using namespace std;

int str_len(char *s);

int main(){
    char ch[50] = {""};

    cout << "���� �Է�: ";
    cin.getline(ch, 50);

    cout << str_len(ch) << endl;
    
    return 0;
}

int str_len(char *s){
    int cnt;
    for(int i=0; i<50; i++){
        if((int)s[i] != 0){
            cnt++;
        }
    }
    return cnt;
}