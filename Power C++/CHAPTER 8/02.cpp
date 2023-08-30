// 2차원 공간에서 점을 나타내는 클래스 Point를 만들어보자. 점에 필요한 속성과 멤버 함수를 생각하여 보자.

class Point{
    double dirX;
    double dirY;

public:
    void init(double x, double y);
    void move(double x, double y);
    void printPointDir();
    double pointDirX();
    double pointDirY();
};