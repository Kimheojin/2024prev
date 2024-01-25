#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:4996)
struct vector3 {
	union {
		struct {
			float x;
			float y;
			float z;

		};
		float v[3];

	};
};
struct flags {
	unsigned int a : 1;//��Ʈũ�⸦ ������ ��
	unsigned int b : 3;//��Ʈ�ʵ� ���� ������ ��Ʈ�� ��ŭ ����Ǹ� ������ ��Ʈ�� ��������.
	unsigned int c : 7;
	unsigned int v : 3;
	unsigned int f : 32;//�е� �ϹǷ� 
};
struct flag {
	union {
		struct {
			unsigned short a : 3;
			unsigned short b : 2;
			unsigned short c : 7;
			unsigned short d : 4;

		};
		unsigned short e;
	};
};
enum dayofweek {
	sunday = 0,
	monday,//�ڵ����� �����Ѵ�.1
	tuesday, //2
	wednesday,//3
	thursday, //4
	friday,//5
	saturday
};
enum luxskil {
	lightbinding = 1,//�������� �׻� �޸� ����ϱ�
	prismaticbarrier,
	lucensingularity,
	finalspark,
};
struct data {
	int num2;
	int num1;
};
struct data_1 {
	int num1;
	char c1;
};
struct person {
	char name[20];
	int age;
	char address[100];
};
int main()
{
	ch_26();
	ch_27();
	ch_28();

	return 0;
}
int ch_1()
{//�͸� ����ü�� �͸� ����ü Ȱ���ϱ�
	struct vector3 pos;

	for (int i = 0; i < 3; i++)
	{
		pos.v[i] = 1.0f;

	}

	printf("%f %f %f\n", pos.x, pos.y, pos.z);
	
	return 0;


}
int ch_2()
{//����ü ��Ʈ�ʵ� ����ϱ�
	struct flags f1;

	f1.a = 1;
	f1.b = 15;
	f1.c = 255;

	printf("%u\n", f1.a);
	printf("%u\n", f1.b);
	printf("%u\n", f1.c);

	return 0;
}
int ch_3()
{
	printf("%d\n", sizeof(struct flags));
	printf("%d\n", sizeof(int));

	return 0;
}
int ch_4()
{
	struct flag f1 = { 0, };

	f1.a = 4;

	//��Ʈ �ʵ�� ����ü�� �Բ� ����ϱ�
	return 0;
}
int ch_5()
{
	enum dayofweek week;

	week = tuesday;

	printf("%d\n", week);

	//������ ����ϱ�
	//�������� ������ ����� �̸��� �ٿ��� �ڵ带 �����ϱ� ���� ���ش�.
	return 0;
}
int ch_6()
{//�������� swithch �б⹮�� ����� �� �����ϴ�.
	enum luxskill skill;

	skill = lightbinding;

	switch (skill)
	{
	case lightbinding:
		printf("lightbinding\n");
	}
	return 0;
}
int ch_7()
{//�ڷ��� ��ȯ�ϱ�
	//c��� ������ �ڷ����� ���ų� ũ�Ⱑ ū��, �ڵ� ��ȯ�ȴ�.(�Ͻ��� �� ��ȯ)
	//����� �� ��ȯ�� ��ȣ�� ����Ͽ� ��Ÿ����.
	//(�ڷ���)����, (�ڷ���)��

	int num1 = 32;
	int num2 = 7;
	float num3;

	num3 = (float)num1 / num2;
	
	printf("%f\n", num3);


	return 0;
}
int ch_8()
{//������ ��ȯ�ϱ�
	//������ ���� ��ȯ�ϴ� ���
	
	int* numptr = malloc(sizeof(int));//4����Ʈ
	char* chptr;//1����Ʈ

	*numptr = 0x12345678;

	chptr = (char*)numptr;//int ������ numptr �� char �����ͷ� ��ȯ
	//�޸� �ּҸ� �����

	printf("0x%x\n", *chptr);

	free(numptr);

	return 0;
}
int ch_9()
{
	short* numptr1 = malloc(sizeof(short));
	int* numptr2;

	*numptr1 = 0x1234;

	numptr2 = (int*)numptr1;

	printf("0x%x\n", *numptr2);

	free(numptr1);
	
	return 0;
}
int ch_10()
{//������ ��ȯ�� ������ ���
	int* numptr = malloc(sizeof(int));

	char* cptr;

	*numptr = 0x12345678;

	printf("ox%x\n", *(char*)numptr);

	free(numptr);

	return 0;
}
int ch_11()
{
	int num1 = 10;
	float num2 = 3.5f;
	char c1 = 'a';
	void* ptr;

	ptr = &num1;

	printf("%d\n", *(int*)ptr);

	ptr = &num2;

	printf("%f\n", *(float*)ptr);

	ptr = &c1;

	printf("%c\n", *(char*)ptr);


	return 0;
}
int ch_12()
{//data char int ����ִ°�
	//����ü ������ ��ȯ�ϱ�
	struct data_1* d1 = malloc(sizeof(struct data_1));
	void* ptr;
	d1->c1 = 'a';
	d1->num1 = 10;

	ptr = d1;

	printf("%c\n", ((struct data_1*)ptr)->c1);//void���̳ʶ� ��ȯ���ֱ�

	printf("%d\n", ((struct data_1*)ptr)->num1);

	free(d1);


	return 0;
}
int ch_13()
{
	//������ ���� ����ϱ�
	//forward ���������� �̵�
	int numarr[5] = { 11, 22, 33, 44,55 };
	int* numptra;
	int* numptrb;
	int* numptrc;

	numptra = numarr;

	numptrb = numptra + 1;//���ϰų� ������ ���� �ǹ̰� ����
	//���ϱ�� �������� ũ�⸸ŭ ���ϰų� ����.
	//�� ���Ĵ� sizeof(�ڷ���)akszma ejgkrjsk Qosms rkq
	numptrc = numptrb + 1;

	printf("%p\n", numptra);
	printf("%p\n", numptrb);
	printf("%p\n", numptrc);

	return 0;
}
int ch_14()
{
	int numarr[5] = { 11, 22, 33, 44, 55 };
	int* numptra;
	int* numptrb;
	int* numptrc;

	numptra = &numarr[2];

	numptrb = numptra - 1;
	numptrc = numptra - 2;

	printf("%d\n", numptra);
	printf("%d\n", numptrb);
	printf("%d\n", numptrc);


	return 0;
}
int ch_15()
{
	//void�����ͷ� �����ϱ�
	void* ptr = malloc(100);

	printf("%p\n", ptr);
	printf("%p\n", (int*)ptr + 1);//int�����ͷ� ��ȯ �� ������ ���� ���
	printf("%p\n", (int*)ptr - 1);

	void* ptr2 = ptr;

	printf("%p\n", ((int*)ptr2)++);
	printf("%p\n", ((int*)ptr2)--);

	free(ptr);


//void�����ͷ� �����ϰ� �ʹٸ� �ٸ� �����ͷ� ��ȯ�� �� ������ �ϸ� �ȴ�.
	return 0;
}
int ch_16()
{//����ü �����ͷ� ������ �����ϱ�
	//��ȣ�� ������ �� ȭ��ǥ �����ڸ� ����Ͽ� ����� �����ϸ� �ȴ�.
	struct data d[3] = { {10,20}, {30,40}, {50,60} };
	struct data* ptr; //����ü ������ ����

	ptr = d;

	printf("%d %d\n", (ptr + 1)->num1, (ptr + 1)->num2);

	printf("%d %d\n", (ptr + 2)->num1, (ptr + 2)->num2);

	return 0;
}
void hello()//��ȯ���� ���ٴ� ��....
{
	printf("hello world\n");
}//������ ��� �տ��� ���Ǹ� ���־�� �Ѵ�.
//���ǰ� ���ٸ� ��ũ ������ �߻��Ѵ�.
int ch_17()
{//�Լ� ����ϱ�

	//c���� ���α׷����� �ϴٺ��� ���� ���� �ٲ� �� ���� �ڵ尡 ��� �ݺ��Ǵ� ��찡 ����.
	hello();//�Լ��� ȣ���Ѵ�.

	return 0;
}
int one()
{
	return 1;

}
int ch_18()
{//�Լ����� ��ȯ�� ����ϱ�
	//����, �ļ�, �� ��ȯ�� ����ϱ�
	int num1;

	num1 = one();

	printf("%d\n", num1);

	return 0;
}
float realnumber()
{
	return 1.234567f;
}
bool truth()
{
	return true;
}
int ch_19()
{
	float num1;
	bool b1;

	num1 = realnumber();
	b1 = truth();

	printf("%f\n", num1);
	printf("%d\n", b1);


	return 0;
}//()�� ��ȯ�ϴ°� �׻� �������
//������ ��ȯ�ϱ�
int* ten()
{
	int* numptr = malloc(sizeof(int));

	*numptr = 10;

	return numptr;
	
}
int ch_20()
{
	int* numptr;

	numptr = ten();

	printf("%d\n", *numptr);

	free(numptr);

	return 0;
}
char* helloliteral()
{
	char* s1 = "hello, world";

	return s1;
}
char *hellodynamicmemory()
{
	char* s1 = malloc(sizeof(char) * 20);

	strcpy(s1, "hello, world");


	return s1;
}
int ch_21()
{
	char* s1;
	char* s2;

	s1 = helloliteral();
	s2 = hellodynamicmemory();

	printf("%s\n", s1);
	printf("%s\n", s2);

	free(s2);

	return 0;
}
void* allocmemory()
{
	void* ptr = malloc(100);

	return ptr;

}
int ch_22()
{//#pragma warning(disable :4996)
	//�������� ��ȯ������ *dnlclsms?
	char* s1 = allocmemory();
	strcpy(s1, "hello, world");
	printf("%s\n", s1);
	free(s1);

	int* numptr1 = allocmemory();
	numptr1[0] = 10;
	numptr1[1] = 20;
	printf("%d %d\n", numptr1[0], numptr1[1]);
	free(numptr1);

	return 0;
}
struct person getperson()//person ����ü�� ��Ȱ�ϴ� getperson �Լ�
{
	struct person p;

	strcpy(p.name, "ȫ�浿");
	p.age = 30;
	strcpy(p.address, "���� ���۱� �漮��");
	
	return p;
}
int ch_23()
{
	struct person p1;
	p1 = getperson();


	return 0;

}
void hellonumber(int num1)
{
	printf("hellos, %d\n", num1);
}
int ch_24()
{//�Լ����� �Ű����� ����ϱ�
	hellonumber(10);
	hellonumber(20);

	return 0;
}
int add(int a, int b)
{
	return a + b;
}
int ch_25()
{//�����Լ� �����
	int num1;

	num1 = add(10, 20);

	printf("%d\n", num1);


	return 0;
}
//�Լ����� ������ �Ű����� ����ϱ�
void swapnumber(int first, int second)
{
	int temp;

	temp = first;
	first = second;
	second = temp;

}
int ch_26()
{
	int num1 = 10;
	int num2 = 20;
	swapnumber(num1, num2);
	printf("%d %d\n", num1, num2);


	return 0;

}
void swapnumber_1(int* first, int* second)
{
	int temp;

	temp = *first;//������ �� ��ȯ
	*first = *second;
	*second = temp;
}

int ch_27()
{
	int num1 = 10;
	int num2 = 20;

	swapnumber_1(&num1, &num2);

	printf("%d %d\n", num1, num2);


	return 0;
}
enum type {
	type_char, 
	type_int,
	type_float
};
int ch_28()//void������ �Ű����� ����ϱ�
{
	enum type pt;
	pt
	return 0;
}