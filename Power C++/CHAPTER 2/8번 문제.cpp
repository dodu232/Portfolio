// 시, 분, 초로 표현된 시간을 초 단위의 시간으로 변환하는 프로그램을 작성하라.
// 예를 들어서 1시간 1분 1초는 3661초이다.
#include <iostream>

int main(){
    int time, hour, minute, second;

    std::cout << "시를 입력하세요. ";
    std::cin >> hour;
    std::cout << "분을 입력하세요. ";
    std::cin >> minute;
    std::cout << "초를 입력하세요. ";
    std::cin >> second;

    time = hour * 3600 + minute * 60 + second;

    std::cout << hour << "시간 " << minute << "분 " << second << "초는 " << time << " 초 입니다." << std::endl;

    return 0;
}