// ����ڷκ��� ���̵�� �н����带 �޾Ƽ� ��ġ�ϴ����� �˻��ϴ� ���α׷��� �ۼ��Ͽ� ����.
#include <iostream>
#include <string>
using namespace std;

int main(){
    string acc[][2] = {
        {"one", "1111"},
        {"two", "2222"},
        {"three", "3333"},
        {"four", "4444"}
    };
    string id;
    string pw;

    cout << "id: ";
    getline(cin, id);
    cout << "pw: ";
    getline(cin, pw);

    for(int i=0; i<4; i++){
        if(acc[i][0] == id){
            if(acc[i][1] == pw){
                cout << "�α��� ����" << endl;
            } else {
                cout << "�н����� Ʋ��" << endl;
            }
            break;
        } else if(i == 3){
            cout << "�ش� ���̵� ����" << endl;
        }
    }   


    return 0;
}