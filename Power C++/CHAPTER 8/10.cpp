// ����ڿ��Լ� ���� ���ڿ��� �������� ȭ�鿡 ����ϴ� ���α׷��� �ۼ��Ͽ� ����. ���� �� ����ڰ� "secret"�� �Է��ϸ� "terces"�� ����Ѵ�.
#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;

    cout << "���ڿ� �Է�: ";
    getline(cin, str);

    for(int i=str.length()-1; i>=0; i--){
        cout << str[i];
    }

    cout << endl;

    return 0;
}