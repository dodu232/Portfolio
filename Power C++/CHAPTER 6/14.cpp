// ���� ���ڿ� �ȿ� ���Ե� ���ܾ��� ������ ����Ͽ� ȭ�鿡 ����ϴ� ���α׷��� �ۼ��Ͽ� ����.
// isalpha�� ����Ͽ� ���� ���ڿ� �ܾ���� ������ �� �ִ�. ���� ���ĺ��� ���ӵǴٰ� ���鹮�ڰ� ������ �ܾ ������ ������ �����Ѵ�.
#include <iostream>
using namespace std;

int main(){
    char ch[50];
    cout << "���� �Է�: ";
    cin.getline(ch, 50);

    int cnt;

    for(int i=0; i<50; i++){
        if(isalpha(ch[i]) == 0 && isalpha(ch[i-1]) != 0){
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}