// Ű���忡�� ���� �ϳ��� �о ������ ������� �����ϴ� ���α׷��� �ۼ��Ͽ� ����.
#include <iostream>
using namespace std;

int main(){
    char ch;
    cout << "���ڸ� �ϳ� �Է��Ͻÿ�. ";
    cin >> ch;

    switch (ch)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        cout << "�����Դϴ�." << endl;
        break;
    
    default:
        cout << "�����Դϴ�." << endl;
    }


    return 0;
}