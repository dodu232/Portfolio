// �ڵ����� ���� ����ϴ� ���α׷��� �ۼ��Ͽ� ����.
// ����ڷκ��� ����� ������ ����Ÿ����� ���ݰ� ������ ���������� ���� �Ÿ����� ������ �Է¹޴´�.
// ���� ����� ������ ���� �Է¹޴´�. �ڵ����� ���� ����Ͽ� ȭ�鿡 ����Ѵ�.
#include <iostream>

int main(){
    int start, end, fuel;

    std::cout << "����� ������ ���� �Ÿ���: ";
    std::cin >> start;
    std::cout << "������ ������ ���� �Ÿ���: ";
    std::cin >> end;
    std::cout << "����� ����: ";
    std::cin >> fuel;

    float fuelEfficiency = (end - start) / 10.0;

    std::cout << "����� " << fuelEfficiency << "km/l �Դϴ�." << std::endl;
    
    return 0;
}