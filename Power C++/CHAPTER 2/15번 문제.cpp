// ���� ǥ������ ü���� ���ϴ� ���α׷��� �ۼ��϶�.
// ���� �������� �Ǽ��� �Էµȴ�. �Ʒ��� ������ ����϶�.
// A = 4��r�� ǥ����
// V = 4/3��r�� ����
#include <iostream>

int main(){
    const float FI = 3.14;
    float radius;

    std::cout << "�������� �Է��Ͻÿ�. ";
    std::cin >> radius;

    float a = 4 * FI * radius * radius;
    float v = 4 * FI * radius * radius * radius / 3;

    std::cout << "�������� " << radius << "�� ���, ǥ������ " << a << "�̰�, ���Ǵ� " << v << "�Դϴ�." << std::endl;
    return 0;
}