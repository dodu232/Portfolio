// ������ ���� ���α׷��� �ۼ��Ͽ� ����.
// ���� ����ڷκ��� �ϳ��� ���ڸ� �Է¹޴´�.
// �̾ ����ڷκ��� �� ���� ���ڸ� �Է¹޴´�.
// ����ڷκ��� ���� ���ڰ� '+'�� ����, '-'�� ����, '*'�� ����, '/'�� �������� �����ϵ��� �ۼ��϶�.
// �������� ���, �θ� 0���� �ƴ����� ���� �˻��Ͽ��� �Ѵ�
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main(){
    char calc;
    string str;
    string str1, str2;

    cout << "***********" << endl;
    cout << "+ ����" << endl;
    cout << "- ����" << endl;
    cout << "* ����" << endl;
    cout << "/ ������" << endl;
    cout << "***********" << endl;
    cout << "������ �����Ͻÿ�: ";
    cin >> calc;
    cin.ignore(10, '\n'); // ���� �����ֱ�
    cout << "�� ���� �������� �и��Ͽ� �Է��Ͻÿ�: ";
    getline(cin, str);

    stringstream temp(str);
    temp >> str1 >> str2;
    int num1 = stoi(str1);
    int num2 = stoi(str2);

    if(calc == '+'){
        cout << num1 + num2 << endl;
    } else if(calc == '-'){
        cout << num1 - num2 << endl;
    } else if(calc == '*'){
        cout << num1 * num2 << endl;
    } else if(calc == '/'){
        cout << num1 / num2 << endl;
    } else {
        cout << "��Ȯ���� ���� ������ �Էµ�;" << endl;
    }

    return 0;
}