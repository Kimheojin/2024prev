#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
union data {
	char c1;
	short num1;
	int num2;
};
union box {
	short candy;
	float snack;
	char doll[8];
};
struct phone {
	int areacode;
	unsigned long long number;
};
struct person {
	char name[20];
	int age;
	struct phone p1;
};//����ü �ȿ� ����ü�� �� �ִ�.
int main()
{//����ü�� �����
	//����ü ����� ���� �����ϰ� �������� ����� ��
	ch_1();
	ch_2();
	ch_3();

	return 0;
}
int ch_1()
{
	union box* b1 = malloc(sizeof(union box));

	printf("%d\n", sizeof(union box));

	strcpy(b1->doll, "bear");

	printf("%d\n", b1->candy);
	printf("%d\n", b1->snack);
	printf("%s\n", b1->doll);

	free(b1);
	//tydef�� �͸� ����ü
	//����ü�� ����ü�� ���������� typedef�� ��Ī�� �����ϰ� �͸����ü�� ������ �� �մ�.
	//typedef union ����ü �̸�
	//����ü �����͸� �����ϰ� �޸� �Ҵ��ϱ�
	return 0;
}
int ch_2()
{//����ü ��Ī�� �͸� ����ü �����Ϳ� �޸� �Ҵ��ϱ�
	//����ü�� ����ü �����ϴ� ���
	//typedef �� ������ ����ü ��Ī���ε� �����͸� �����ϰ� ��
	struct person po;

	po.p1.areacode = 82;
	po.p1.number = 3034567;

	printf("%d %llu\n", po.p1.areacode, po.p1.number);

	
	return 0;

}
int ch_3()
{
	union box {
		
	}

	return 0;
}