#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable : 4996)
struct person {
	char name[20];
	int age;
	char address[100];
};//���� ���ͷ� ����ϱ�(����ü ������)
int main()
{//enum �ʱ�ȭ ���ϸ� 0���� �ڵ����� �ȴ�..
	ch_15();
	ch_16();
	ch_17();
	return 0;
}
void hellostring(char* s1)
{
	printf("hello, %s\n", s1);
}
int ch_1()
{
	hellostring("world\n");

	return 0;
}
void hellostring_1(char* s1)
{
	printf("hello,%s\n", s1);
}
int ch_2()
{
	char s1[10] = "world!";

	hellostring(s1);

	return 0;
}
void printarray(int arr[], int count)
{
	for (int i = 0; i < count; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
}
int ch_3()
{//�Լ����� �迭 �Ű� ����
	int numarr[10] = { 1,2,3,32,5,6,7,8,9,10 };

	printarray(numarr, sizeof(numarr) / sizeof(int));

	return 0;
}
void setelement(int arr[])
{
	arr[2] = 300;
}
int ch_4()
{
	int numarr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	setelement(numarr);

	printf("%d\n", numarr[2]);
	return 0;
}
//���ȣ ��� �Ű������� �����ͷ� ����
void printarray_1(int* arr, int count)
{
	for (int i = 0; i < count; i++)
	{
		printf("%d", arr[i]);
	}

	printf("\n");
}
int ch_5()
{
	int numarr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	printarray(numarr, sizeof(numarr) / sizeof(int));
	
	return 0;
}//���� ���ͷ� ����ϱ�(�迭)
void printperson(struct person p)
{
	printf("�̸�: %s\n", p.name);
	printf("����: %d\n", p.age);
	printf("�ּ�: %s\n", p.address);
}

int ch_6()
{//�Լ����� ����ü �Ű����� ����ϱ�
	struct person p1;
	
	strcpy(p1.name, "ȫ�浿");
	p1.age = 30;
	strcpy(p1.address, "���� ��걸");

	printperson(p1);
	return 0;
}
void setperson(struct person p)
{
	strcpy(p.name, "ȫ�浿");
	p.age = 40;
	strcpy(p.address, "���� ���ʱ� ������");
}//���⼭ �ƹ��� �ٲ㵵 ������ ��ġ�� �ʴ´�.
int ch_7()
{
	struct person p1;

	return 0;
}
void setperson_2(struct person* p)
{
	strcpy(p->name, "��浿");
	p->age = 40;
	strcpy(p->address, "����� ���ʱ� ������");
}
int ch_8()
{
	struct person p1;

	strcpy(p1.name, "ȫ�浿");
	p1.age = 30;
	strcpy(p1.address, "����� ���ʱ� ������");

	setperson_2(&p1);

	printf("�̸�");
	return 0;
}//922������
void printnumbers_1(int args, ...)//���� ���� ���
{
	printf("%d\n", args);
}
int ch_9()
{//���� ���ͷ� ����ϱ�(����ü ������
	//�Լ����� �������� ����ϱ�
	//���� ���ڸ� ����� ���� ���� ����
	printnumbers_1(1, 19);

	printnumbers_1(2, 10, 11);//ó���� ���� 2�� �Ű����� args�� ���� ������ ������ ... �κп� ����.

	printnumbers_1(3, 5, 10, 23);//1,2,3 �� ����

	

	return 0;

}
void printnumbers_2(int args, ...)//���������� ������ ����
{
	va_list ap;//�������� ��� ������

	va_start(ap, args);//���� ���� ��� ������ ����
	for (int i = 0; i < args; i++)//���� ���� ����ŭ �ݺ�
	{
		int num = va_arg(ap, int);//int ũ�⸸ŭ �������� ��� �����Ϳ��� ���� �����´�
		//ap�� int ũ�⸸ŭ ���������� �̵�

		printf("%d", num);
	}
	va_end(ap);//�������� ��� �����͸� null�� �ʱ�ȭ

	printf("\n");
}
int ch_10()
{
	//va_list ���� ���� ��� ������ �����Ǹ޸� �ּҸ� �����ϴ� ������ �̴�
	//va_strt �������ڸ� ������ �� �ֵ��� �����͸� �����Ѵ�.
	//����_������ rkqus dlswk vhdlsxjdptj xmrwjd wkfygud zmrlakszma rkqtdmf�����´�
	//va_end �������� ó���� ������ �� �����͸� null�� �ʱ�ȭ �Ѵ�......

	printnumbers_2(1, 10);//stdarg�� ��ũ�θ� ������ �Լ��̴�/
	printnumbers_2(2, 19, 29);
	return 0;
}
void printvalues_1(char* types, ...)
{
	va_list ap;//�������� ������ ����
	int i = 0;

	va_start(ap, types);//types���ڿ����� ���� ������ ���ؼ� ���� ���� ������ ����
	while (types[i] != '\0')//���� ���� �ڷ����� ������ ���� �ݺ�
	{
		switch (types[i])
		{
		case 'i':
			printf("%d", va_arg(ap, int));
		case 'd':
			printf("%");
		}
	}
}
int ch_11()
{//�ڷ����� �ٸ� ���� ���� �Լ� �����
	//�� �� �ڷ����� �ٸ��ٸ� swithc�� ����ϸ� �ȴ�.
	//���� ��
	return 0;
}
void hello_jin(int count)
{
	if (count == 0)
		return;

	printf("hello , world %d\n", count);

	hello_jin(--count);
}//���ȣ��� ���丮�� ���ϱ�
int ch_12()
{//�Լ����� ���ȣ�� ����ϱ�
	//�Լ� �ڱ� �ڽ��� ȣ���ϴ� ����� ���ȣ�� �̶�� �Ѵ�.
	hello_jin(8);
	
	//�˰����� ������ �� �ſ� �����ϴ�.
	return 0;
}
int factorial(int n)
{
	if (n == 1)//n�� 1�̸� �׳� 1 ȣ��
		return 1;
	return n * factorial(n - 1);
}
int ch_13()
{
	printf("%d", factorial(5));
	return 0;
}
void hello_0()
{
	printf("hello, world\n");
}
int ch_14()
{//�Լ� ������ ����ϱ�
	//�Լ��� �迭 ���� ����ü�� �ְų� �Լ� ��ü�� �Լ��� �Ű������� �Ѱ��ְ� ��ȯ������ �����ü� ������?
	printf("%p\n", hello_0);//�Լ� �̸��� ������ �̹Ƿ�
	return 0;
}
void kello()
{
	printf("bonjour le monde!\n");
}
int ch_15()
{
	void(*fp)();//��ȯ���� �Ű������� ���� �Լ� ������ fp����

	fp = hello_0;
	fp();
	//�Լ� �����͸� ������ ���� �Լ� �����Ϳ� ����� �Լ��� ��ȯ�� �ڷ���, �Ű���� �ڷ����� ������ ��ġ�ؾ� �Ѵ�.
	//�׳� �Ȱ��� ���� �����ؾ� �Ѵ�...
	fp = kello;
	fp();

	//�Լ� ������ �����
	//�Լ� �����ʹ� ���� �Լ��� ��ȯ�� �ڷ����� ������ �ְ��Լ� ������ �̸� �տ� asterlisk �� ���� �� ��ȣ�� �����ش�.
	return 0;
}
int add_12(int a, int b)
{
	return a + b;
}
int mul(int a, int b)
{
	return a * b;
}
int ch_16()
{//��ȯ���� �Ű������ �ִ� �Լ� ������ �����
	int (*fp)(int, int);

	fp = add_12;
	printf("%d\n", fp(10, 20));

	fp = mul;
	printf("%d\n", fp(10, 20));


	return 0;
}
int add_000(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;

}
int mul(int a, int b)
{
	return a * b;

}
int div(int a, int b)
{
	return a / b;
}
int ch_17()
{//�Լ� ������ Ȱ���ϱ�
	//�Լ� ��ȣ�� ����� ���� �Է¹��� �� �Լ� �����ͷ� ���
	int funcnumber;//�Լ���ȣ
	int num1, num2;
	int (*fp)(int, int) = NULL;//int�� ��ȯ��, int �� �Ű����� �� ���� �ִ� �Լ� ������ ����

	printf("�Լ� ��ȣ�� ����� ���� ���ض� ");
	scanf_s("%d %d %d", &funcnumber, &num1, &num2);
	
	switch (funcnumber)
	{
	case 0:
		fp = add_000;
		break;
	case 1:
		fp = sub;
		break;
	case 2:
		fp = mul;
		break;
	case 3:
		fp = div;
		break;
	}
	printf("%d\n", fp(num1, num2));

	return 0;
}
int ch_18()
{//�Լ��� ������ �迭�� ���� �ϴ°� �� ���� ���� �ִ�.
	int funcnumber;
	int num1, num2;
	int (*fp[4])(int, int);//int�� ��ȯ��, int �� �Ű����� 2���� �ִ� �Լ� ������ �迭 ����

	fp[0] = add_000;
	fp[1] = sub;
	fp[2] = mul;
	fp[3] = div;

	printf("�Լ� ��ȣ�� ����� ���� �Է��ϼ���");
	scanf_s("%d %d %d", &funcnumber, &num1, num2);

	return 0;
}