// ������� ���Ǹ� ���ϴ� ���α׷��� �ۼ��Ͽ� ����. ����� �ظ��� �������� ���̸� �Է¹޾Ƽ� ���Ǹ� ����Ѵ�.
#include <iostream>

int main(){
    const float FI = 3.1415;
    float radius;
    float height;
    float volume;

    std::cout << "����� �ظ��� �������� �Է��Ͻÿ�: ";
    std::cin >> radius;
    std::cout << "������� ���̸� �Է��Ͻÿ�: ";
    std::cin >> height;

    volume = radius * radius * FI * height;

    std::cout << std::fixed;
    std::cout.precision(2);

    std::cout << "������� ���Ǵ� " << volume << "�Դϴ�." << std::endl;

    return 0;

}