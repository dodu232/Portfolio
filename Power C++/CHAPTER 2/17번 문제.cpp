// ���� ������ ?���� �̿��Ͽ� 2���� ������ x��ǥ�� y��ǥ�� �Է¹޾Ƽ� �� ��ǥ�� ���ϴ� ��и��� ����ϴ� ���α׷��� �ۼ��϶�.
#include <iostream>

int main(){
    int x, y;

    std::cout << "x��ǥ �Է�: ";
    std::cin >> x;
    std::cout << "y��ǥ �Է�: ";
    std::cin >> y;

    x > 0 ? (y > 0 ? std::cout << "�� 1��и�" : std::cout << "�� 4��и�") : (y > 0 ? std::cout << "�� 2��и�" : std::cout << "�� 3��и�");
    return 0;
}