// 어떤 학생이 이번 학기에 컴퓨터 개론, C언어 프로그래밍, 영어, 일반 수학을 수강 신청하였다고 하자.
// 각 과목의 점수를 입력하면 그 학생의 이번 학기 평균 점수를 계산하는 프로그램을 작성하라.
#include <iostream>

int main(){
    float score;
    float scoreSum;
    float scoreAve;

    std::cout << "컴퓨터 개론의 점수를 입력하시오. " ;
    std::cin >> score;
    scoreSum += score;

    std::cout << "c언어 프로그래밍의 점수를 입력하시오. " ;
    std::cin >> score;
    scoreSum += score;

    std::cout << "영어의 점수를 입력하시오. " ;
    std::cin >> score;
    scoreSum += score;

    std::cout << "일반 수학의 점수를 입력하시오. " ;
    std::cin >> score;
    scoreSum += score;

    scoreAve = scoreSum / 4.0;

    std::cout << "평균 점수는 " << scoreAve << "점 입니다." << std::endl;

    return 0;
}