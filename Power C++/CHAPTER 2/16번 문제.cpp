// �ﰢ�� ABC�� �ﰢ�� ADE�� �������� �� ������ ������ �����Ѵ�.
// AC:AE = BC:DE
// ���� AC�� AE, BC�� �ȴٸ� DE�� ����� �� �ִ�. AC�� AE, BC�� �Է��Ͽ��� DE�� ���ϴ� ���α׷��� �ۼ��϶�.
// �ԷµǴ� ��ġ�� ��� �Ǽ��� �Ѵ�.
#include <iostream>

int main(){
    float ac, ae, bc;

    std::cout << "ac�� �Է��Ͻÿ�. ";
    std::cin >> ac;
    std::cout << "ae�� �Է��Ͻÿ�. ";
    std::cin >> ae;
    std::cout << "bc�� �Է��Ͻÿ�. ";
    std::cin >> bc;

    float de = ae * bc / ac;

    std::cout << "ac, ae, dc�� �� " << ac << ", "<< ae << ", " << bc << "�� ��, de�� " << de << "�Դϴ�." << std::endl;

    return 0;
}