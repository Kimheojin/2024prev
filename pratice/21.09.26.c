

//main�Լ� ���� �߰��ؼ� �����Ű��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <stddef.h>//offsetoff �� ����� �������
//����ü ���� ����
#pragma pack(push, 1)//1����ũ ũ��� ����
struct packetheader {
	char flags;//1����Ʈ
	int seq;//4����Ʈ
};
#pragma pack(pop)//���� ���¸� ���� ���·� ����
typedef struct Person {
	char name[20];
	int age;
	char address[100];
}pp;
typedef struct _Person {
	char name[20];
	int age;
	char address[100];
}Person;
struct Data {
	char c1;
	int* numPtr;
};
struct Point2D {
	int x;
	int y;
};
union Box {
	short candy;
	float snack;
	char doll[8];

};
union Data_1 {
	char c1;
	short num1;
	int num2;
};
int master_210926()
{
	printf("9�� 26��\n");
	ch_27();
	ch_28();
	ch_29();
	return 0;
}
int ch_1()
{
	printf("hello\n");
	
	char s1[30] = "The Little World";//�迭

	char* ptr = strtok(s1, " ");//���� �������� ���ڿ��� �ڸ�, ������ ��ȯ
	//THe

	while (ptr != NULL)
	{
		printf("%s\n", ptr);
		ptr = strtok(NULL, " ");//���� ������ ����ó���޴� ���ڿ����� �߸� ���ڿ� ��ŭ �������ڷ� �̵��� �� ���ڿ��� �ڸ���.
	}
	return 0;
}//�����Ϳ� ���ڿ� ���ͷ��� ����ִ� ��� �б������̶� ���Ұ��ϴ�.
int ch_2()
{
	char* s1 = malloc(sizeof(char) * 30);

	strcpy(s1, "The Little World");
	char* ptr = strtok(s1, " ");
	while (ptr != NULL)
	{
		printf("%s\n", ptr);
		ptr = strtok(NULL, " ");
	}
	free(s1);

	return 0;
}
//�ڸ� ���ڿ� �����ϱ�
int ch_3()
{
	printf("please");

	char s1[30] = "The Little Prince";
	char* sArr[10] = { NULL, };

	int i = 0;

	char* ptr = strtok(s1, " ");

	while (ptr != NULL)
	{
		sArr[i] = ptr;
		i++;

		ptr = strtok(NULL, " ");
	}
	for (int i = 0; i < 10; i++)
	{
		if (sArr[i] != NULL)
			printf("%s\n", sArr[i]);

	}
	return 0;
}
int ch_4()//���ڿ��� ���ڸ� ���� ��ȯ�ϱ�
{
	//���ڿ��� ������ ��ȯ�ϱ�
	char* s1 = "283";
	int num1;
	num1 = atoi(s1);
	printf("%d\n", num1);

	return 0;

}
int ch_5()
{
	//strtol(���ڿ�, ��������, ����)
	//�� ���ڿ��� ������ �Ǿ� �־�� �ϸ� Ư�����ڵ��� ���ԵǾ� ������ ������� �ʴ´�.
	char* s1 = "0xaf10";
	int num1;

	num1 = strtol(s1, NULL, 16);//�� �ڸ��� �����͸� ������ �� �����͸� ������ �ش�
	
	printf("%x %d\n", num1, num1);

	return 0;
}
int ch_6()//ȸ�� �Ǻ��� �� �׷� �����
{
	char word[30];
	int length;
	bool isPalindrome = true;

	printf("�ܾ �Է��ϼ���:");
	scanf("%s" , word);

	length = strlen(word);

	for (int i = 0 ; i < length / 2; i++) //���������� ���� �ݷ��� ������ �ʴ´�.
	{
		if (word[i] != word[length - 1 - i])
		{
			isPalindrome = false;
			break;
		}
	}
	
	
	
	printf("hello");
	printf("%d\n", isPalindrome);


	return 0;
}
int ch_7()
{
	//���ӵ� ��Ҹ� �����ϴ� ���
	char text[30] = "Hello";
	int length;

	length = strlen(text);

	for (int i = 0; i < length - 1; i++)
	{
		printf("%c%c\n", text[i], text[i + 1]);

	}
	return 0;
}
//�� �ߴ�..
//����ü ����ϱ� ���� �ѵΰ��δ� ó���ϱⰡ ���� ��Ȳ�� ����.
//�̸� ���� ����

int ch_8()
{
	struct Person p1;

	strcpy(p1.name, "ȫ�浿");
	p1.age = 30;
	strcpy(p1.address, "����� ��걸");

	printf("�̸�: %s\n", p1.name);
	printf("����: %d\n", p1.age);
	printf("�ּ�: %s\n", p1.address);

	return 0;
}//�Ϲ� ������ ������ ����ü�� ����� �����Ҷ��� ���� ����Ѵ�.
//���������� ����Ҽ� �ִ�
//typedef�� structŰ���� ���� ����ü�� ������ �� �ִ�,
//��Ī�� �����ϸ� �ȴ�.
//typedef�� �ڷ����� ��Ī�� ����� ����̴�.
//���� ��� �ڷ����� ��Ī�� ������ �� �ִ�.
//�͸� ����ü ����ϱ�
int ch_9()
{

	pp * p1 = malloc(sizeof(struct Person));

	strcpy(p1->name, "ȫ�浿");
	p1->age = 30;
	strcpy(p1->address, "����� ��걸");

	printf("�̸�: %s\n", p1->name);//����ü �����Ϳ� �����Ҷ��� ���� ����ϸ� �ȵȴ�..
	//ȭ��ǥ������ ��� �θ���.
	printf("����: %d\n", p1->age);
	printf("�ּ�: %s\n", p1->address);

	free(p1);

	return 0;
}
//���� ����ü�� ũ��� ū���̴�. �����Ϳ� �޸𸮤��� �Ҵ��ؼ� ����ϴ� ���� ȿ�����̴�.
int ch_10()
{
	int num1 = 10;
	struct Data d1;
	struct Data* d2 = malloc(sizeof(struct Data));

	d1.numPtr = &num1;
	d2->numPtr = &num1;

	printf("%d\n", *d1.numPtr);
	printf("%d\n", *d2->numPtr);

	d2->c1 = 'a';
	printf("%c\n", (*d2).c1);

	printf("%d\n", *(*d2).numPtr);
	return 0;
}
//����ü ��Ī���� �����͸� �����ϰ� �޸� �Ҵ��ϱ�
int ch_11()
{
	Person* p1 = malloc(sizeof(Person));

	strcpy(p1->name, "ȫ�浿");
	p1->age = 30;
	strcpy(p1->address, "���� ��걸");

	printf("�̸�: %s\n", p1->name);
	printf("����: %d\n", p1->age);
	printf("�ּ�: %s\n", p1->address);


	//����ü ��Ī ������ �̸� = mallocsizeof ����ü ��Ī
	return 0;
}
//����ü �����Ϳ� ����ü ������ �ּ� �Ҵ��ϱ�
//���� �޸𸮸� �Ҵ����� �ʰ� ����ü �����͸� ����ϴ� �溡 = ����ü ���ҿ� �ּ� �����ڸ� ����ϸ� �ȴ�.
int ch_12()
{
	struct Person p1;
	struct Person* ptr;

	ptr = &p1;

	ptr->age = 30;
	printf("����:%d\n", p1.age);
	printf("����:%d\n", ptr->age);

	return 0;
}
int ch_13()//���� ������ �Ÿ� ���ϱ�(����ü�� Ȱ���Ͽ� 2���� ��鿡�� ��ġ�� ǥ��)
{
	struct Point2D p1;
	struct Point2D p2;

	p1.x = 30;
	p1.y = 20;

	p2.x = 60;
	p2.y = 50;

	printf("p1 : %d %d\n", p1.x, p1.y);
	printf("p2 : %d %d\n", p2.x, p2.y);

	int a = p2.x - p1.x;
	int b = p1.y - p2.y;

	double c = sqrt(pow(a,2) + pow(b,2));//pow�� ����ص��ȴ�
	//math.h�� �����ִ°�
	printf("%f\n", c);
	

	//sqrt ������ ���� ��ȯ�ϴ� �� sqrt�� ���
	return 0;
}
//typedef�� �̿��ϸ� ��Ī�� ����� �� �ִ�.
//���� �Լ��� �����Ѵ�.
//abs, fabs, fabsg�Լ��� ����ϸ� ��� �Ǵ� ������ �������� ����� �ִ�.
int ch_14()
{
	//����ü ��� ���� ����ϱ�
	//�̹����� ����ü�� �޸𸮿� �ö����� ����� �����ϴ� ��ɿ� ���� �ƶ�alignment
	return 0;
}
//����ü�� ũ�� �˾ƺ���
int ch_15()
{
	printf("            $$$$$$$$          \n");
	printf("          $$$--$$--$$         \n");
	printf("          $$$--$%$$@$         \n");
	printf("            $$$$&&&$            \n");
	printf("             $$$$$             \n");
	printf("         $$$$$$$$$$           \n");
	printf("        $$  $$$$$$ $$         \n");
	printf("        $$  $$$$$$   $$       \n");
	printf("        $$  $$  $$            \n");
	printf("            $$  $$            \n");
	printf("            $$  $$$           \n");
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	
	return 0;
}

int ch_16()
{
	struct packetheader header;
	printf("%d\n", sizeof(header.flags));
	printf("%d\n", sizeof(header.seq));
	printf("%d\n", sizeof(header));
	printf("%d\n", sizeof(struct packetheader));
	
	return 0;
}
//����ü�� ����ū ���� ����Ʈ ������ ����Ѵ�,
//����ü ���� ũ�� �����ϱ�
//���� ���� ���ҳ�
int ch_17()
{
	//ofsetoff�� ������� ��ġ�� ���� �� �ִ�.
	printf("%d\n", offsetof(struct packetheader, flags));
	printf("%d\n", offsetof(struct packetheader, seq));
	

	return 0;
}
int ch_18()//����ü ���� ũ�� �����ϱ�
{
	struct packetheader header;

	printf("%d\n", sizeof(header. flags));
	printf("%d\n", sizeof(header.seq));
	printf("%d\n", sizeof(header));
	//pack�� 1����Ʈ ������ �����ؼ� �� ������ ���� ����
	
	return 0;
}
//����ü�� �޸� Ȱ���ϱ�
//�޸� ���� �Լ��� ����Ҽ� �ְ� �ȴ�.
int ch_19()
{
	struct Point2D p1;
	memset(&p1, 0, sizeof(struct Point2D));//�޸� �ּҸ� ���ؼ� �־��� �� ������ ���� ũ�⸦ �ִ´�.
	printf("%d %d\n", p1.x, p1.y);

	return 0;
}
int ch_20()
{
	struct Point2D* p2 = malloc(sizeof(struct Point2D));

	memset(p2, 0, sizeof(struct Point2D));

	printf("%d %d\n", p2->x, p2->y);
	
	free(p2);

	return 0;
}
int ch_21()
{
	struct Point2D p1;
	struct Point2D p2;

	p1.x = 10;
	p1.y = 20;

	memcpy(&p2, &p1, sizeof(struct Point2D));
	//���� ������ ���������� ũ�⸦ �����Ѵ�
	printf("%d %d\n", p2.x, p2.y);

	return 0;
}
//���� �޸� ����
int ch_22()
{
	struct Point2D* p1 = malloc(sizeof(struct Point2D));
	struct Point2D* p2 = malloc(sizeof(struct Point2D));
	
	p1->x = 10;
	p1->y = 20;
	memcpy(p2, p1, sizeof(struct Point2D));

	printf("%d %d\n", p2->x, p2->y);


	return 0;

}
//����ü �迭 ����ϱ�
//����ü �迭 ����ϱ�
int ch_23()
{
	struct Point2D p[3];

	p[0].x = 10;
	//���
	//����ü �迭�� �����ϴ� ���ÿ� �ʱ�ȭ�ϱ�
	return 0;
}
//����ü �迭�� ����� ���ÿ� �ʱ�ȭ�ϱ�
int ch_24()
{
	//�� ������ ����ϸ� ������ ���� ���ϰ� �ص� �ż� ���ѵ�
	struct Point2D p1[3] = { {.x = 10, .y = 20}, {.x= 30, .y = 40}, {.x= 50, .y = 60} };

	printf("%d %d\n", p1[0].x, p1[0].y);

	return 0;

}
int ch_25()//��Ҹ��� �޸� �Ҵ��ϱ�
{
	//����ü ������ �迭 ����ϱ�
	//����ü ��� ���� ȿ���� ���̱� ���� ����ü�� ������ ũ��� �������ش�
	//����ü�� ����ü�� ���� ����� ������ ����� �����ϴ� ����� �ٸ���.
	//������ ����ü�� ��� ����� ������ �����Ѵ�.
	//����ü�� ����߿��� ���� ū �ڷ����� ������ �����Ѵ�.
	//������ ������ �ʴ�.
	union Box b1;

	printf("%d\n", sizeof(b1));

	strcpy(b1.doll, "bear");
	//������ �����ϹǷ� �ϳ��� ����ؾ� �Ѵ�.

	printf("%d\n", b1.candy);
	printf("%f\n", b1.snack);
	printf("%s\n", b1.doll);

	return 0;
}
int ch_26()
{
	union Data_1 d1;

	d1.num2= 0x12345678;

	printf("0x%x\n", d1.num2);
	printf("0x%x\n", d1.num1);
	printf("0x%x\n", d1.c1);

	printf("%d\n", sizeof(d1));
	//�츮�� ����ϴ� x86�� ����� ����� ä���Ѵ�
	//���� ��Ʋ ������� ���ڸ� 1����Ʈ�� �ɰ��� ���� �ڸ����� �տ��´ٳ��� �ڸ���
	//typedef�� �͸����ü ����ü�� ����ü�� ���������� �� ��Ī�� �����ϰ� 
	//����ü �����͸� �����ϰ� �޸� �Ҵ��ϱ�
	
	
	return 0;
}
int ch_27()//����ü�� ����ü Ȱ���ϱ�
{
	return 0;
}
int ch_28()//��Ʋ �����
{
	return 0;
}
int ch_29()
{
	return 0;
}