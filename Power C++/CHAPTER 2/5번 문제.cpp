// � �л��� �̹� �б⿡ ��ǻ�� ����, C��� ���α׷���, ����, �Ϲ� ������ ���� ��û�Ͽ��ٰ� ����.
// �� ������ ������ �Է��ϸ� �� �л��� �̹� �б� ��� ������ ����ϴ� ���α׷��� �ۼ��϶�.
#include <iostream>

int main(){
    float score;
    float scoreSum;
    float scoreAve;

    std::cout << "��ǻ�� ������ ������ �Է��Ͻÿ�. " ;
    std::cin >> score;
    scoreSum += score;

    std::cout << "c��� ���α׷����� ������ �Է��Ͻÿ�. " ;
    std::cin >> score;
    scoreSum += score;

    std::cout << "������ ������ �Է��Ͻÿ�. " ;
    std::cin >> score;
    scoreSum += score;

    std::cout << "�Ϲ� ������ ������ �Է��Ͻÿ�. " ;
    std::cin >> score;
    scoreSum += score;

    scoreAve = scoreSum / 4.0;

    std::cout << "��� ������ " << scoreAve << "�� �Դϴ�." << std::endl;

    return 0;
}