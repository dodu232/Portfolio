// ����ڷκ��� ���ڿ��� �޾Ƽ� �ܾ��� ������ ����Ͽ��� �ֿܼ� ����ϴ� ���α׷��� �ۼ��Ͽ� ����. ���� �� ����ڰ� "To be or not to be"
// ��� �Է��ϸ� 6�� ����Ѵ�.
#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    int cnt = 1;
    
    cout << "���ڿ� �Է�: ";
    getline(cin, str);

    for(int i=0; i<str.length(); i++){
        if(isspace(str[i]) != 0){
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}