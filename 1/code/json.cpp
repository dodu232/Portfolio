#include <iostream>
#include <fstream> // ���� ����� �Լ�
#include <string>

using namespace std;

int main(){

    string line;
    ifstream file("output.json"); // example.json ������ ����.
    if(file.is_open()){ // ������ ���������� ���ȴ��� Ȯ��
        while(getline(file, line)){ // ������ �ؽ�Ʈ ������ ���� �� �о�� string ���·� ����
            cout << line << endl;
        }
        file.close(); // ������ ������ �ݴ´�. *�ʼ�
    } else {
        cout << "Unavle to open file";
        return 1;
    }

    return 0;
}