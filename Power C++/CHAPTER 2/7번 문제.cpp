// cm�� ǥ���� Ű�� �Է��Ͽ� ��Ʈ�� ��ġ�� ��ȯ�ϴ� ���α׷��� �ۼ��غ���. 
//1��Ʈ�� 12��ġ�̰� 1��ġ�� 2.54cm�̴�.
#include <iostream>

int main(){
    const int FEET = 12;
    const float INCH = 2.54;
    float height;

    std::cout << "Ű�� �Է��Ͻÿ�. ";
    std::cin >> height;

    int feet = height / (INCH * FEET);
    float inch = height / INCH - feet * FEET;

    std::cout << height << "cm�� " << feet << "��Ʈ " << inch << "��ġ �Դϴ�." << std::endl;

    return 0;
}
