// 10000���� ���� ������ �Է¹޾Ƽ� �̰��� õ�� �ڸ�, ���� �ڸ�, ���� �ڸ�, ���� �ڸ��� �и��Ͽ� ����ϴ� ���α׷��� �ۼ��϶�.
// �� ����ڰ� ���� 5623�� �Է��ϸ� 5, 6, 2, 3�� ���ʷ� ����ϸ� �ȴ�. �̰��� �������� ������ ������ ����ϸ� �ȴ�.
#include <iostream>

int main(){
    int num;
    std::cout << "������ �Է��Ͻÿ�. ";
    std::cin >> num;

    int thousand = num / 1000; 
    int hundred = num % 1000 / 100;
    int ten = num % 100 / 10;
    int one = num % 10;

    std::cout << "õ�� �ڸ�: " << thousand << std::endl;
    std::cout << "���� �ڸ�: " << hundred << std::endl;
    std::cout << "���� �ڸ�: " << ten << std::endl;
    std::cout << "���� �ڸ�: " << one << std::endl;

    return 0;
}
