// ų�α׷� ������ ���Ը� �Ŀ��� �½��� ��ȯ�ϴ� ���α׷��� �ۼ��غ���. ��ȯ���� ������ ����.
// ų�α׷� = 2.2 �Ŀ��
// �Ŀ�� = 16 �½�
#include <iostream>

int main(){
    const float POUND = 2.2;
    const int OUNCE = 16;
    float weight;

    std::cout << "���Ը� �Է��Ͻÿ�. ";
    std::cin >> weight;

    double pound = weight * 2.2;
    double ounce = pound * 16;

    std::cout << weight << "ų�α׷��� " << pound << "�Ŀ�� �Դϴ�." << std::endl;
    std::cout << weight << "ų�α׷��� " << ounce << "�½� �Դϴ�." << std::endl;

    return 0;
}
