// ���� �µ��� ���� �µ��� ��ȯ�ϴ� ���α׷��� �ۼ��϶�. ������ ���� ��ȯ���� ����϶�.
// ���� �µ� = ���� �µ� + 273.16
#include <iostream>

int main(){
    const float F = 273.16;
    float temperature;

    std::cout << "���� �µ��� �Է��Ͻÿ�: ";
    std::cin >> temperature;
    std::cout << "���� �µ��� " << temperature + F << "�Դϴ�." << std::endl;

    return 0;
}