// ���� ���μ����� ���Ǵ� "ã�� �ٲٱ�" ����� �����Ͽ� ����. ù ��°�� ����ڷκ��� �ִ� 100������ �ؽ�Ʈ�� �Է¹޴´�. �� ��°�� ã�� 
// ���ڿ��� �Է¹޴´�. �ִ� 10���ڷ� �����Ѵ�. �� ��°�� �ٲٴ� ���ڿ��� �Է¹޴´�. ���� �ִ� 10���ڷ� ���ѵȴ�. �ؽ�Ʈ �߿��� ������
// ���ڿ��� ã�Ƽ� �ٲ� �Ŀ� ȭ�鿡 ����Ѵ�.
#include <iostream>
#include <string>
using namespace std;

void print_input(int length, string *str);

int main(){
    string txt;
    string find;
    string change;

    print_input(100, &txt);
    print_input(10, &find);

    int idx = txt.find(find);

    while(idx == -1){
        cout << "ã�� �� ���� �ܾ� �Դϴ�." << endl;
        print_input(10, &find);
        idx = txt.find(find);
    }

    txt.erase(idx, find.length());

    print_input(10, &change);

    txt.insert(idx, change);

    cout << txt << endl;

    return 0;
}

void print_input(int length, string *str){
    cout << "�ؽ�Ʈ �Է�(�ִ� " << length << "����): ";
    getline(cin, *str);
}