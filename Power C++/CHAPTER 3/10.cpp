// ������ �Ｎ ���� ���α׷��� �ۼ��Ͽ� ����. 1����� 3������� ��÷ ��ȣ�� �����Ǿ� �ִٰ� ��������. 
// ����ڷκ��� 1���� 10������ ��ȣ�� �޾Ƽ� 2���� 1��, 5���� 2��, 7���� 3���̶�� �����ϰ� ���α׷��� �ۼ��Ͽ�����. 
// ��÷�Ǿ����� ��÷ �ȳ� �޽����� ȭ�鿡 ����Ѵ�.
#include <iostream>
using namespace std;

int main(){
    int first = 2;
    int second = 5;
    int third = 7;

    int user;
    string result;

    cout << "��ȣ�� �Է��ϼ���: ";
    cin >> user;

    if(user == first){
        result = "1��";
    } else if(user == second){
        result = "2��";
    } else if(user == third){
        result = "3��";
    } else {
        result = "��";
    }

    cout << result << "�Դϴ�." << endl;
    
    return 0;
}
