// ���ڿ��� �Է����� �޾Ƽ� ���ڿ��� ���Ե� ��� ���� ���ڸ� �����ϴ� �Լ��� �ۼ��ϰ� �׽�Ʈ�϶�.
#include <iostream>
using namespace std;

void del_blank(char ch[]);

int main(){
    char ch[100];

    cout << "���ڿ� �Է�: ";
    cin.getline(ch, 100);

    del_blank(ch);

    return 0;
}

void del_blank(char ch[]){
    for(int i=0; i<100-1; i++){
        if((int)ch[i] == 32){
            ch[i] = ch[i+1];
        }
    }
    cout << ch << endl;
}