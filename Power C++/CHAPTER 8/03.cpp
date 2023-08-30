// 사각형을 나타내는 클래스 Rectangle을 만들어보자. 사각형에 필요한 속성과 멤버 함수를 생각하여 보자.

class Rectangle{
    int type; // 1번 정사각형, 2번 직사각형, 3번 사다리꼴, 4번 마름모
    int color; // 1: 빨강, 2: 파랑, 3: 보라, 4: 초록
    double height;
    double width;
    
    public:
        void init(double height, double width);
        void init(double height);
        double printWidth();
        double printHeight();
        void modifyWidth(double width);
        void modifyHeight(double height);
};