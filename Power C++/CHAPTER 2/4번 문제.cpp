// �츮���󿡼� ���� ���Ǵ� ������ ������ ���� �����ͷ� ȯ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
// ���⼭ 1���� 3.3058m���̴�. �������� �ڷ����� � ���� �����ϴ� ���� ������?
// ��ȣ ����� �̿��Ͽ� 1��� �����͸� ��Ÿ�����
#include <iostream>
using namespace std;

int main(){
    const float SQUARE_FEET = 3.3058;
    int squareFeet;
    double resultFeet;

    cout << "����� �Է����ּ���. ";
    cin >> squareFeet;

    resultFeet = SQUARE_FEET * squareFeet;

    cout << squareFeet << "���� " << resultFeet << "������ �Դϴ�." << endl;

    return 0;
}