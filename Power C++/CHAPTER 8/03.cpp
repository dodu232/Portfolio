// �簢���� ��Ÿ���� Ŭ���� Rectangle�� ������. �簢���� �ʿ��� �Ӽ��� ��� �Լ��� �����Ͽ� ����.

class Rectangle{
    int type; // 1�� ���簢��, 2�� ���簢��, 3�� ��ٸ���, 4�� ������
    int color; // 1: ����, 2: �Ķ�, 3: ����, 4: �ʷ�
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