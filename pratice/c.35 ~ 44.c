#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
int main()
{
	ch_34();
	ch_35();
	ch_36();
	 
	return 0;
}
int ch_1()//void ������ �����ϱ�
{
	int num1 = 10;
	char c1 = 'a';
	int* numptr1 = &num1;
	char* cptr1 = &c1;

	void* ptr;

	ptr = numptr1;
	ptr = cptr1;


	numptr1 = ptr;
	cptr1 = ptr;
	//�⺻������ c���� �ڷ����� �ٸ� �����ͳ��� �޸� �ּҸ� �����ϸ� ������ ��� ���µ� void�� ����ϸ� ��� ���� �ʴ´�.
	//�̷� Ư�������� void�� ���� ������ ��� �Ѵ�,
	//�� ���� �ڷ����� ��ȯ���� �ʾƵ� �Ͻ������� �ڷ����� ��ȯ�Ǵ� ����̴�.
	//���̵� �����ʹ� ������ �� �� ����.
	return 0;
}
int ch_2()//���� ������ ����ϱ�
{//434������

	int* numptr1;
	int** numptr2;
	int num1 = 10;
	numptr1 = &num1;
	numptr2 = &numptr1;
	int* joyboy;//�׳� ������ �ᵵ ���� �Ǵµ� ���������� �־���''
	//�迭���� ����
	joyboy = &numptr2;
	printf("%d\n", *joyboy);


	return 0;
}
int ch_3()
{
	int num1 = 20;
	int* numptr1;
	numptr1 = &num1;

	int* numptr2;

	numptr2 = malloc(sizeof(int));

	printf("%p\n", numptr1);

	printf("%p\n", numptr2);

	free(numptr2);

	//�޸� ����ϱ�
	//���ϴ� ��ŭ �޸� ������ �޾� ����ϱ�
	return 0;
}
int ch_4()
{
	//�޸� ������ �Ѳ����� �����ϱ�memset
	//�����ϴ� ũ��� ����Ʈ �����̴�.
	long long* numptr = malloc(sizeof(long long));

	memset(numptr, 0x27, sizeof(long long));
	//ù��° ĭ�� �޸� �ּ�, ��ȯ�Ǵ� ��
	//�����ϸ� null ���� ��ȯ

	printf("%d\n", sizeof(long long));

	printf("0x%llx\n", *numptr);

	free(numptr);

	
	return 0;
	
}
int ch_5()
{
	//�������� ����ϱ�
	//�޸𸮰� �Ҵ���� ���� ������
	int* numptr1 = NULL;//�����Ϳ� NULL����

	printf("%p\n", numptr1);
	int* numptr2;

	numptr2 = NULL;
	//�����Ϳ� �޸� ���������� �� �޸� �ּҰ� ����Ǿ� �ִ�.
	printf("%p\n", numptr2);



	return 0;
}
int ch_6()
{
	//�迭 ����ϱ�
	//������ ������ �Ϸķ� ���� ����
	//�迭�� ���� �̸� �ڿ� ���ȣ�� ���� �� ũ�⸦ �����Ѵ�./
	//���� �ʱ�ȭ �Ҷ� �߰�ȣ�� ����Ѵ�.
	int numarr[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110 };//���� �ݷ��� �ٿ��ش�.
	//�̹� ����� �迭���� �߰�ȣ ��� �Ұ�
	//�� �ʱ�ȭ �Ұ��� �ѵ�

	printf("%d\n", numarr[0]);
	printf("%d\n", numarr[1]);
	printf("%d\n", numarr[2]);

	return 0;
	//��Ұ� 0���� �迭�� ������ �� �� ����.
	//�迭�� �̸��� ������ �̴�.
	//�迭�� �����Ҷ� ���� �ʱ�ȭ �ϸ� ũ�⸦ ������ �� �ִ�.
}
int ch_7()
{
	//�迭�� 0���� �ʱ�ȭ�ϱ�
	int numarr[10] = { 0, };//1�� ������ �� �ȵų�';;;
	//0�� ����

	printf("%d\n", numarr[0]);
	printf("%d\n", numarr[4]);

	printf("%d\n", numarr[9]);


	return 0;
}
int ch_8()
{
	//�迭�� ����� �� �Ҵ��ϱ�
	int numarr[10];

	numarr[0] = 11;

	numarr[3] = 33;

	printf("%d %d %d\n", numarr[0], numarr[3], numarr[2]);

	return 0;
}
int ch_9()
{
	int numarr[10] = { 0, };

	printf("%d\n", sizeof(numarr));//sizeof�Լ��� �� ũ�⸦ ���� �� �ִ�.
	printf("%d\n", sizeof(numarr) / sizeof(int));
	return 0;
}
int ch_10()
{
	//�迭�� ũ��� �ε���
	//�ε����� �迭�� ������ ������� �˻����� �����Ƿ� ���α׷��Ӱ� �׻� �� �κ��� �����ϸ� �� �ۼ��ؾ� �Ѵ�.
	int numarr[10] = { 11, 22, 3, 4,  5, 6, 7, 8, 9, 10 };

	for (int i = 0; i < sizeof(numarr) / sizeof(int); i++)
	{
		printf("%d\n", numarr[i]);
	}
	return 0;
}
int ch_11()
{
	//�迭�� �����Ϳ� �ֱ�
	//�迭�� ��� ù ��° ����� �ּӰ��� ��� �ִ�.
	int numarr[10] = { 11, 22, 33, 44, 555, 66, 77 , 88, 9,9 };
	
	int* numptr = numarr;

	printf("%d\n", *numptr);

	printf("%d\n", * numarr);

	printf("%d\n", numptr[10]);//�迭�� �ּҸ� ������ �Ͽ� �̵� ����
	//but sizeof �� �ٸ��� ���´�.


	return 0;
}
int ch_12()
{//10������ 2������ ��ȯ��
	//�������� �������� ������ 2������ �ȴ�.
	int decimal = 13;

	int binary[20] = { 0, };

	int position = 0;

	while (1)
	{
		binary[position] = decimal % 2;
		decimal = decimal / 2;

		position++;

		if (decimal == 0)
			break;
	}

	for (int i = position - 1; i >= 0; i--)
	{
		printf("%d", binary[i]);

	}
	printf("\n");

	return 0;
}
int ch_13()
{//2���� �迭 ����ϱ�
	//2���� �迭�� ���� �˾ƺ���
	//���� x ���� ���·� ǥ���Ѵ�.
	//�ڷ��� �̸� ���� ����
	int numarr[3][4] = {
		{ 11, 22, 33, 44},
		{ 11,22, 33, 44},
		{11,22,33,44}
	};

	printf("%d\n", numarr[2][3]);
	printf("%d\n", numarr[1][2]);
	printf("%d\n", numarr[0][1]);

	return 0;
}
int ch_14()
{
	int numarr[3][4] = {
		{11, 22,3 ,4},
		{22,33,44,55},
		{12,3,4,5}
	};
	printf("%d\n", sizeof(numarr));
	
	int col = sizeof(numarr[0]) / sizeof(int);

	int row = sizeof(numarr) / sizeof(numarr[0]);


	
	//2���� �迭�� ũ�� ���ϱ�
	//���� ���� ũ�⸦ �÷��� �� ��� ���õ� �ݺ����� ���ǽĵ� �Բ� �����ؾ� �Ѵ�.

	return 0;
}
int ch_15()
{
	//�ݺ������� 2���� �迭�� ��Ҹ� ��� ����ϱ�
	//2���� �迭�� �����Ϳ� �ֱ�
	//����int(*numptr)���� ��ȣ���� �� int�� ������ 4���� ���� �� �ִ� �迭�̶�� ���̴�.
	//�� ��ȣ�� ������ ����Ű�� �迭 ������, 
	int numarr[3][4] = {//������ ũ�Ⱑ 3, ������ ũ�Ⱑ 4�� �迭
		{11, 22, 33,44},
		{22,33,44,55},
		{33, 44, 55, 66}
	};

	int(*numptr1)[4] = numarr;//������ ũ�Ⱑ ��ġ�ؾ� �Ѵ�.


	return 0;
}
int ch_16()
{//�����Ϳ� �迭 �����ϱ�
	//���ݱ��� ũ�Ⱑ ������ �迭�� ���
	//�����Ϳ� �޸𸮸� �Ҵٝۿ� �迭ó�� ���
	int* numptr = malloc(sizeof(int) * 10);
	
	numptr[0] = 10;
	numptr[9] = 20;

	printf("%d\n", numptr[0]);
	printf("%d\n", numptr[9]);

	free(numptr);

	//visual studio�� �������ڸ� �迭 ���ڷ� �������� �ʴ´�.

	return 0;
} 
int ch_17() 
{
	int size;

	scanf_s("%d", &size);

	int* numptr = malloc(sizeof(int) * size);

	for (int i = 0; i < size; i++)
	{
		numptr[i] = i;

	}

	for (int i = 0; i < size; i++)
	{
		printf("%d\n", numptr[i]);
	}
	free(numptr);
	return 0;
}
int ch_18()
{//�����Ϳ� �Ҵ�� �޸𸮸� 2���� �迭ó�� ����ϱ�
	int** m = malloc(sizeof(int*) * 3);//��Ʈ �������� ���ϱ� ����(�տ� �ּҸ� �����ϴµ�)(������ ���� �׷� ��ĳ����
	//���� �����Ϳ� int ������ ũ��
	for (int i = 0; i < 3; i++)
	{
		m[i] = malloc(sizeof(int) * 4);//int ũ�� ���ϱ� ����ũ�� ��ŭ ���� �޸� �Ҵ�
		//�迭�� ����
	}
	m[0][0] = 1;
	m[2][0] = 5;
	m[2][3] = 2;

	//���θ��� ����
	//���θ��� Ǯ����
	for (int i = 0; i < 3; i++)
	{
		free(m[i]);
	}
	free(m);

	return 0;
}
int ch_19()
{//���ڿ� ����ϱ�
	//�������� ������ ������ �ȵȴ�.
	//���ڿ��� char ������ �������� ����Ѵ�.
	char c1 = 'a';

	char* s1 = "hello";

	printf("%c\n", c1);
	printf("%s\n", s1);//�������� null ���ڷ� ������.
	//�տ� ���ڿ� �ּҸ� �����ϰ� ������ ä������ �������� �����Ѵ�.
	//�Ƹ���
	//�� ���ڿ��� �б� �����̹Ƿ� �����Ұ�.
	//���ڿ��� �հ� �ڴ� ����ΰ���

	return 0;
}//���ڿ��� �޸� �ּ� ���
int ch_20()
{
	char* s1 = "Hello";

	printf("%c\n", s1[1]);
	printf("%c\n", s1[2]);

	return 0;
}//null�� ��µ��� �ʴ´�...
int ch_21()
{//�迭 ���·� ���ڿ� �����ϱ�
	char s1[10] = "Hello";

	printf("%s\n", s1);

	return 0;//������ �κ��� null�� ���� ����.
	//���ڿ��� ����� ��� �ʱ�ȭ �ؾ� �Ѵ�.
}
int ch_22()
{
	//�迭�� �����Ҷ��� �׻� ũ�� ����

	//ũ�⸦ �����ϸ� ũ�⿡ ���� �˾Ƽ� �迭�� �ش�.
	char s1[] = "Hello";

	printf("%s\n", s1);

	return 0;

	
}
int ch_23()
{
	char s1[10] = "Hello";

	s1[0] = 'a';

	printf("%s\n", s1);

	return 0;
}
int ch_24()
{//�Է°��� ���ڿ��� �����ϱ�
	char s1[10];

	printf("���ڿ��� �Է��ϼ���: ");
	scanf_s("%s", &s1);
	//������ �Է¹��� ���Ѵ�. �ٸ� �����ڸ� �̿��ϸ� ������� �����Ͽ� ���ڿ��� �Է¹��� �� �ִ�.
	printf("%s\n", s1);
	return 0;
}
int ch_25()
{
	char* s1 = malloc(sizeof(char) * 10);// 10�ڸ� �Ҵ�
	
	printf("���ڿ��� �Է��ϼ���:\n");
	scanf_s("%s", s1);

	printf("%s\n", s1);

	free(s1);

	return 0;
}
int ch_26()
{
	//���ڿ� ������ �Է¹ޱ�
	//���ڿ��� ���̸� ���ϰ� ���ϱ�
	//strlen �ռ��� ���� �� �ִ�.
	char s1[10];
	char s2[10];

	printf("���ڿ� �� �� �Է��ϼ���: ");

	return 0;
}
int ch_27()
{
	char* s1 = "hello";
	char s2[10] = "hello";

	printf("%d\n", strlen(s1));
	printf("%d\n", strlen(s2));

	return 0;
}
int ch_28()
{
	//strlen�� ������ ���ڿ� ���̸� ���ϸ� null���ڴ� �������� �ʴ´�.
	//ctrcmp �� ���ڿ��� ������ ��
	char s1[10] = "hello";
	char* s2 = "hello";

	int ret = strcmp(s1, s2);
	//�� ���ڿ��� ������ 0�� ����Ѵ�.
	//-1 �� ���ڿ� 2�� Ŭ��
	//1�� ���ڿ� 1�� Ŭ��
	printf("%d\n", ret);

	return 0;
}
int ch_29()
{//���ڿ��� �����ϰ� �٤���

	char s1[10] = "hello";
	char s2[20];

	strcpy(s2, s1);//���� ����ڿ�, �ڰ� ���� ���ڿ�
	//�ڿ��� �տ� �����ؼ� �ִ� �����ε�

	printf("%s\n", s2);

	return 0;
}
int ch_30()
{//���ڿ� ���̱�
	//string concatenate
	char s1[10] = "world";
	char s2[20] = "hello";

	strcat(s2, s1);

	printf("%s\n", s2);
	
	return 0;
}
int ch_31()
{
	char s1[20];
	
	sprintf(s1, "hello, %s", "world");

	printf("%s", s1);

	return 0;
}//���ڿ��� ������ �� �� �迭�� ���� ��� �θ���.
int ch_32()
{
	char s1[30];

	sprintf(s1, "%c %d %e %f", 'a', 10, 3.2f, (1.123e-21f));

	printf("%s\n", s1);

	return 0;
}
int ch_33()
{
	char* s1 = malloc(sizeof(char) * 20);

	sprintf(s1, "Hello, %s", "world");
	
	printf("%s\n", s1);

	free(s1);

	return 0;
}//printfó�� ������ �����Ͽ� ���ڿ��� ���� �� �ִ�.
//spirntf(�迭, ����, ��)
int ch_34()
{
	//������� �ʰ� ���� ����
	//���ڿ��� ���·� �����Ѵ�.
	//���ڿ� �˻��ϱ�(�����͸� �̿��Ѵ�.)
	//strchr(����ڿ�, �˻��� ����)string ���Ͽ� �����Ѵ�.
	return 0;

}
int ch_35()
{
	return 0;
}
int ch_36()
{
	return 0;
}









