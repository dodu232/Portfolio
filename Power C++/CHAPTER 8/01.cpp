// ���Ҽ��� ��Ÿ���� Ŭ������ ������. ���Ҽ��� ������ ���� ���¸� ���´�.
// real + imag*i ���⼭ i =  ��-1 �̴�.
// ���Ҽ��� �ʿ��� �Ӽ���� ������ ��� �Լ����� �����϶�.

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
