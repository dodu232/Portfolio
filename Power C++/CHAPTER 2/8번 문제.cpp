// ��, ��, �ʷ� ǥ���� �ð��� �� ������ �ð����� ��ȯ�ϴ� ���α׷��� �ۼ��϶�.
// ���� �� 1�ð� 1�� 1�ʴ� 3661���̴�.
#include <iostream>

int main(){
    int time, hour, minute, second;

    std::cout << "�ø� �Է��ϼ���. ";
    std::cin >> hour;
    std::cout << "���� �Է��ϼ���. ";
    std::cin >> minute;
    std::cout << "�ʸ� �Է��ϼ���. ";
    std::cin >> second;

    time = hour * 3600 + minute * 60 + second;

    std::cout << hour << "�ð� " << minute << "�� " << second << "�ʴ� " << time << " �� �Դϴ�." << std::endl;

    return 0;
}