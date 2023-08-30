// 복소수를 나타내는 클래스를 만들어보자. 복소수는 다음과 같은 형태를 갖는다.
// real + imag*i 여기서 i =  √-1 이다.
// 복소수에 필요한 속성들과 가능한 멤버 함수들을 결정하라.

class ComplexNumber{
    double imaginaryPart;
    double realPart;

  public:
    void init(double imaginaryPart, double realPart); 
    double plus(double x, double y);
    double minus(double x, double y);
    double phaseAngle(double imaginaryPart, double realPart);
    double absoluteValue(double imaginaryPart, double realPart);
};
