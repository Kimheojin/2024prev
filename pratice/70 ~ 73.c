#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#pragma pack(push, 1)
struct data {
	short num1;
	short num2;
	short num3;
	short num4;
};
struct data_1 {
	char c1;
	short num1;
	int num2;
	char s1[20];
};
#pragma pack(pop)

struct calc {
	int (*fp)(int, int);
};

int main()
{
	ch_13();
	ch_14();
	ch_15();
	return 0;
}
int add(int a, int b)
{
	return a + b;
}
void executer(int (*fp)(int, int))
{
	printf("%d\n", fp(10, 20));
}
int ch_1()
{
	struct calc c;

	c.fp = add;

	printf("%d\n", c.fp(10, 20));

	return 0;
}
int ch_2()
{//�Լ� �����͸� �Լ��� �Ű������� ����ϱ�
	executer(add);
	return 0;
}
int (*getadd())(int, int)
{
	return add;
}
int ch_3()
{//�Լ� �����͸� �Լ��� ��ȯ������ ����ϱ�
	printf("%d\n", getadd()(10, 20));//getadd�Լ��� ȣ���� �� ��ȯ������ add�Լ� ȣ��

	return 0;
}
int ch_4()
{//���Ͽ��� ���ڿ� �а� ����
	FILE* fp = fopen("hello.txt", "w");//hello.txt ������ ���� ���� ����
	
	fprintf(fp, "%s %d\n", "hello", 100);//������ �����Ͽ� ���ڿ��� ���Ͽ� ����
	//stdout �̶�� ��ũ�θ� Ȱ���ϸ� ȭ�鿡 ���ڿ��� ��µȴ�.
	fclose(fp);//���� ������ �ݱ�

	return 0;
}
int ch_5()//����ó��
{//������ �����Ͽ� ���̷� ���ڿ� ����
	//���ڿ��� �� ���� ����
	//������ �����Ͽ� ���Ͽ� ���ڿ� ����
	//fopen �Լ��� ������ �� ��
	//r �б� ���� �ݵ�� ������ �־�� �Ѵ�
	//w�������� �������� �����Ѵ�. �� �����ϸ� �����.
	char s1[10];
	int num1;

	FILE* fp = fopen("hello.txt", "r");//�б���� ��ȯ
	if (fp == NULL) {
		printf("����, ����\n");
		return 1;
	}
	
	fscanf(fp, "%s %d", s1, &num1);//fscanf�Լ��� stdin �Լ��� ����ϸ� scanfó�� ����� �� �ִ�.

	printf("%s %d\n", s1, num1);

	fclose(fp);
	return 0;
}
int ch_6()
{
	//���Ͽ� ���ڿ� ����
	FILE* fp = fopen("hello.txt", "w");

	fputs("hello, word!", fp);//fputs ����ϸ� ���ڿ� �״�� ���Ͽ� �� �� �ִ�.

	fclose(fp);
	return 0;
}
int ch_7()
{//���Ͽ��� ���ڿ�  �Լ��� ������ ����
	//fopen �Լ��� ������ ������ ���������͸� ���� ��fgets
	char buffer[20];

	FILE* fp = fopen("hello.txt", "r");

	fgets(buffer, sizeof(buffer), fp);//�ٷ� ������ ����..
	
	printf("%s\n", buffer);

	fclose(fp);

	return 0;
}
int ch_8()
{
	char buffer[20] = { 0, };
	
	FILE* fp = fopen("hello.txt", "r");

	fread(buffer, sizeof(buffer), 1, fp);

	printf("%s\n", buffer);

	return 0;
}
int ch_9()
{//���� ������ Ȱ���ϱ�
	//���� ũ�⸦ ���� �� fseek ftell�Լ��� ����Ѵ�.
	int size;

	FILE* fp = fopen("hello.txt", "r");

	fseek(fp, 0, SEEK_END);//���� �����͸� ������ ������ �̵���Ŵ
	size = ftell(fp);

	printf("%d\n", size);

	fclose(fp);
	return 0;
}
int ch_10()
{//���� ũ�⸸ŭ ���� �Ф�
	char* buffer;
	int size;
	int count;

	FILE* fp = fopen("hello.txt", "r");

	fseek(fp, 0, SEEK_END);
	size = ftell(fp);//���� ũ�⸸ŭ ���� ��ȯ��Ŵ

	buffer = malloc(size + 1);//null ���Խ�Ű�� ���� 1����

	memset(buffer, 0, size + 1);

	fseek(fp, 0, SEEK_SET);
	count = fread(buffer, size, 1, fp);

	printf("%s size: %d, count: %d\n", buffer, size, count);

	fclose(fp);

	free(buffer);

	return 0;
}
int ch_11()
{//fseek �Լ��� ����Ͽ� ���� �������� ��ġ�� ������ �� ������ ������ �κ������� �о�ڴ�.

	char buffer[10] = { 0, };//0���� �ʱ�ȭ
	FILE* fp = fopen("hello.txt", "r");//�б���� ���� ���� �����͸� ��ȯ

	fseek(fp, 2, SEEK_SET);//���� �����͸� ���� ó������ 
	fread(buffer, 3, 1, fp);

	printf("%s\n", buffer);

	memset(buffer, 0, 10);

	fseek(fp, 3, SEEK_CUR);
	fread(buffer, 4, 1, fp);

	printf("%s\n", buffer);
	
	free(fp);

	return 0;
}
int ch_12()
{//���Ͽ� ���� �κ������� �Ẹ�ڴ�.
	char* s1 = "abcd";
	char buffer[20] = { 0, };

	FILE* fp = fopen("hello.txt", "r+");//�б� ������ ����
	//���� �����͸� ��ȯ

	fseek(fp, 3, SEEK_SET);
	fwrite(s1, strlen(s1), 1, fp);

	printf("%s\n", buffer);

	fclose(fp);

	return 0;
}
int ch_13()
{//���Ͽ��� ����ü�� �а� ����
	struct data d1;
	d1.num1 = 100;
	d1.num2 = 300;
	d1.num3 = 200;//d1�� �Ѱ��� ȣ��
	d1.num4 = 400;

	FILE* fp = fopen("data.bin", "wb");//������ ���� /���̳ʸ� ���

	fwrite(&d1, sizeof(d1), 1, fp);

	fclose(fp);

	return 0;
}
int ch_14()
{
	struct data_1 d1_1;
	memset(&d1_1, 0, sizeof(d1_1));

	d1_1.c1 = 'a';
	d1_1.num1 = 32100;
	d1_1.num2 = 2100000100;
	strcpy(d1_1.s1, "hello world!");

	FILE* fp = fopen("data2.bin", "wb");

	fwrite(&d1_1, sizeof(d1_1), 1, fp);

	fclose(fp);



	return 0;

}
void bubble_sort(int arr[], int count)
{
	int temp;

	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}

		}
	}
}
int ch_15()
{//�迭 �����ϱ�
	int numarr[10] = { 8,4,2,5,3,7,10,1,6,9 };
	bubble_sort(numarr, sizeof(numarr) / sizeof(int));

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", numarr[i]);
	}
	printf("\n");

	//��ǰ ���� �����ϱ�

	return 0;
}