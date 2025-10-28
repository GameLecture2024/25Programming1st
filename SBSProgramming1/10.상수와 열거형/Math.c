#include "Math.h"

const static double PI;	   // �����̴� , �������� �Լ��� �ְ�, �������� ����ϴ� ������ �����ϰ� �ʹ�.
						   // ��� �ҽ����������� PI ���������� ����� ���ɼ��� �����.
void Test()
{
	double test = PI;
	printf("�׽�Ʈ ���� �� : %lf\n", PI);
}

// static �Լ� �ȿ� �����ϸ� � ���� �߻��ϳ���?
// ���� ������ ������ �����Ͱ� ������ �˴ϴ�.
// ���α׷��� ������ �� �����Ͱ� ������ �˴ϴ�.
// ���� ������ static�� �����ϴ� ������ �����ΰ���? -> �Լ� �ȿ����� �������� ����ϰڴ�.
void Test2()
{
	static int number = 1;
	int result = 0;
	for (int i = 0; i < 10; i++)
	{
		number += i;	//number = number + i; ����		
	}
	result = number;
}

void CalculateCircleArea()
{
	//const double pi = 3.14;	 // �ڡڡڡڡڡڡڡ� �� ���� ����Ǹ� �ȵǴ� �����̿��� �ڡڡڡڡڡڡڡ�
	double radius;
	printf("�������� ���̸� �Է����ּ��� : ");
	scanf("%lf", &radius);
	double circleArea = PI * radius * radius;
	printf("���� ���� : %lf\n", circleArea);
	// ���� ���̰� 2, 3, 4.5, 5.5 .....
}

void CalculateCircleDiameter()
{
	//const double pi = 3.14;	 // �ڡڡڡڡڡڡڡ� �� ���� ����Ǹ� �ȵǴ� �����̿��� �ڡڡڡڡڡڡڡ�
	double radius;
	printf("�������� ���̸� �Է����ּ��� : ");
	scanf("%lf", &radius);
	double circleDiameter = 2 * PI * radius;
	printf("���� ���� : %lf\n", circleDiameter);
}