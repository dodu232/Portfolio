// ����ڰ� ����Ű�� ���� ������ �� ���� ���ڸ� �о �Ф��� ���� �߿��� ���� a�� ������ ��� ȭ�鿡 ����ϴ� ���α׷��� �ۼ��϶�
#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    int cnt = 0;
    cout << "���ڸ� �Է��ϼ���: " << endl;
    getline(cin, str);

    for(int i=0; i<str.length(); i++){
        if(!str.substr(i, 1).compare("a")){
            cnt ++;
        }
    }

    cout << str << "�� ����ִ� a�� ������ " << cnt << "�� �Դϴ�. " << endl;

    return 0;
}