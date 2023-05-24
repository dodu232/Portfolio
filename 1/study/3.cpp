// 매개변수의 디폴트 값
#include <iostream>

int boxVolume(int length, int width, int height){
    return length*width*height;
}

int boxVolume(int length, int width){
    return length*width*1;
}

int boxVolume(int length){
    return length*1*1;
}

// 위 세개를 한번에 하려면 
// int boxVolume(int lengtht, int width = 1, int height = 1){ // 디폴트 값은 오른쪽 부터 채워줌 (매개 변수가 왼 -> 오 순이기 때문에)
//         return length*width*height;
// }

int main() {
    std::cout<<"[3, 3, 3] : " << boxVolume(3, 3, 3)<<std::endl;
    std::cout<<"[5, 5, D] : " << boxVolume(5, 5)<<std::endl;
    std::cout<<"[7, D, D] : " << boxVolume(7)<<std::endl;
    // std::cout<<"[D, D, D] : " << boxVolume()<<std::endl;
    return 0;
}
