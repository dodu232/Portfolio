// ����ڷκ��� �ϳ��� ���ڸ� �Է¹޾Ƽ� 'R' �̸� �簢���� ������ ����ϰ� 
// 'T' �̸� �ﰢ���� ������ 'C'�̸� ���� ������ ����Ѵ�. 
// ������ ����ϴµ� �ʿ��� ���ڵ��� ����ڷκ��� �Է¹޴´�.
#include <iostream>
using namespace std;

int main(){
    char figure;
    double length, height, area;
    string name;


    cout << "���� �Է�: ";
    cin >> figure;

    if(figure == 'C' || figure == 'c'){
        cout << "�������� �Է��Ͻÿ�. ";
        cin >> length;
        area = length * length * 3.14;
        name = "��";
    } else {
        cout << "���̸� �Է��ϼ���: ";
        cin >> height;
        cout << "�ʺ� �Է��ϼ���: ";
        cin >> length;
        area = height * length;
        name = "�簢��";

        if(figure == 'T' || figure == 't'){
            area /= 2;
            name = "�ﰢ��";
        }
    }

    cout << name << "�� ������ " << area << "�Դϴ�." << endl;

    return 0;
}