// ���� �Ÿ��� ���� �ð��� �Է¹޾Ƽ� ���� ��� �ӵ��� ����Ͽ� ����. 
// ���� �Ÿ��� km ������ �Է¹ް� ���� �ð��� �а� �ʷ� ����� �Է¹޴´�.
#include <iostream>

int main(){
    float distance;
    float minute;
    float second;
    float speed;

    std::cout << "�޸� �Ÿ��� �Է��Ͻÿ�(kmh):";
    std::cin >> distance;
    std::cout << "�޸� �ð� �߿��� ���� �Է��Ͻÿ�: ";
    std::cin >> minute;
    std::cout << "�޸� �ð� �߿��� �ʸ� �Է��Ͻÿ�: ";
    std::cin >> second;

    speed = distance / (minute * 60 + second) * 3600;

    std::cout << "��� �ӵ��� " << speed << "km/h �Դϴ�." << std::endl;

    return 0;

}