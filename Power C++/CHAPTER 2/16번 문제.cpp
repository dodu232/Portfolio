// 삼각형 ABC와 삼각형 ADE가 닮음꼴일 때 다음의 수식이 성립한다.
// AC:AE = BC:DE
// 따라서 AC와 AE, BC를 안다면 DE를 계산할 수 있다. AC와 AE, BC를 입력하여서 DE를 구하는 프로그램을 작성하라.
// 입력되는 수치는 모두 실수로 한다.
#include <iostream>

int main(){
    float ac, ae, bc;

    std::cout << "ac를 입력하시오. ";
    std::cin >> ac;
    std::cout << "ae를 입력하시오. ";
    std::cin >> ae;
    std::cout << "bc를 입력하시오. ";
    std::cin >> bc;

    float de = ae * bc / ac;

    std::cout << "ac, ae, dc가 각 " << ac << ", "<< ae << ", " << bc << "일 때, de는 " << de << "입니다." << std::endl;

    return 0;
}