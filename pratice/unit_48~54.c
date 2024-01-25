#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stddef.h>//offsetof �Լ��� �����ϰ� �ִ�..
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#pragma pack(push, 1)  //1����Ʈ�� ����(������ �����̳� �����Ҷ� ���)(ȿ�������� ����ϱ� ����)
struct _packetheader {
	int seq;//1����Ʈ
	char flags;//4����Ʈ
};
#pragma(pop)
//����ü �ʵ�
struct Person {
	char name[20];
	int age;
	char address[100];
};
typedef struct _person {
	char name[20];
	int age;
	char address[100];
}po;
struct Point2D {
	int x;
	int y;
};
struct Packetheader {
	char flags;
	int seq;

};
union Box {
	short candy;//2��2Ʈ �Ƹ���
	float snack;//4�٤�Ʈ
	char doll[8];//���ڿ� 8����Ʈ
};
union data {
	char c1;
	short num1;
	int num2;

};

int main()
{
	//union ����ü�̸�{
	//�ڷ��� �̸�
	ch_16();
	ch_17();
	ch_18();
	return 0;
}
int ch_1()
{//����ü ����ϱ�
	struct Person p1;

	strcpy(p1.name, "ȫ�浿");
	p1.age = 30;
	strcpy(p1.address, "���� ��걸 �ľϵ�");

	printf("%s \n%d \n%s", p1.name, p1.age, p1.address);
	return 0;
}
int ch_2()
{//����ü �ȿ� ����ִ� ������ ������ �Ѵ�.
	//���� �����Լ� �ۿ� �����Ѵ�.
	//������ ����ü�� ����Ϸ��� ����ü ������ �����ؾ� �Ѵ�.
	//struct ����ü �̸�{�ڷ��� ����̸�}����
	//�����ϴ� ���ÿ� ������ ������ �� �ִ�.
	//�ٸ� ����
	struct Person p1 = { .name = "ȫ�浿", .age = 30, .address = "����� ��걸 �ѳ���" };

	printf("%s \n%d \n%s", p1.name, p1.age, p1.address);

	struct Person p2 = { "��浿", 40, "����� ���ʱ� ������" };

	return 0;
}
int ch_3()
{//typedef�� struct Ű���� ���� ����ü �����ϱ�
	po toil = { "ȫ����", 24, "���� ������ �Ϳ쵿" };

	printf("%s \n%d \n%s", toil.name, toil.age, toil.address);
	return 0;
}
int ch_4()
//typedef Ȱ���ϱ�
//�ڷ����� ��Ī�� ����� ����̴�. ��� �ڷ����� ��Ī�� ���� �� �ִ�.
{//�͸� ����ü ����ϱ�
	//����ü ������ ����ϱ�
	struct Person* p3 = malloc(sizeof(struct Person));

	strcpy(p3->name, "ȫ�浿");
	p3->age = 30;
	strcpy(p3->address, "����� ��걸 �ѳ���");

	printf("%s \n%d \n%s", p3->name, p3->age, p3->address);
	//malloc ��� ���� �� �׻� ����ϱ�
	//����ü �����Ϳ��� .���� ����� �����ϱ�
	return 0;
}
int ch_5()
{
	//����ü ��Ī���� �����͸� �����ϰ� �޸� �Ҵ��ϱ�
	//����ü��Ī *������ �̸� =  malloc(sizeof(����ü ��Ī));���� ������ �ҽ��ڵ� ����â�� �Է��ϼ���
	po* p1 = malloc(sizeof(po));

	strcpy(p1->name, "ȫ�浿");
	p1->age = 30;
	strcpy(p1->address, "���� ��걸 �ѳ���");

	free(p1);
	printf("%s \n%d \n%s", p1->name, p1->age, p1->address);
	return 0;
}
int ch_6()
{//����ü �����Ϳ� ����ü ������ �ּ� �Ҵ��ϱ�
	struct Person p1;
	struct Person* ptr;

	ptr = &p1;

	ptr->age = 30;

	printf("����: %d\n", p1.age);
	printf("����: %d\n", ptr->age);

	return 0;
}
int ch_7()
{//�� �� ������ �Ÿ� ���ϱ�
	struct Point2D p1;
	struct Point2D p2;

	p1.x = 30;
	p1.y = 20;

	p2.x = 60;
	p2.y = 50;

	int a = p2.x - p1.x;

	int b = p2.y - p1.y;

	double c = sqrt((a * a) + (b * b));

	double d = sqrt(pow(a, 2) + pow(b, 2));


	printf("%f\n", c);

	return 0;
}
int ch_8()
{//����ü ��� ���� ����ϱ�
	//����� ���� �ϴ� ��ɿ� ���� �˾ƺ��ڽ��ϴ�.
	//����ü ��� ���� ����ϱ�alignmentalignment�ϴ� ��ɿ� ���� �˾ƺ��ٽ��ϴ�.
	//���������� ����Ʈ ������ �߻��ؼ� ȿ���� ��������.
	struct Packetheader header;

	printf("%d\n", sizeof(header.flags));
	printf("%d\n", sizeof(header.seq));
	printf("%d\n", sizeof(header));
	printf("%d\n", sizeof(struct Packetheader));
	//c������ ����ü�� �����Ҷ� ��� �߿��� ���� ū �ڷ����� ũ���� ����� �����Ѵ�.
	//���� ������ �е��̶�� �Ѵ�.
	//����ü���� ����� ��ġ�� ���� ���� offseof��ũ�θ� ����Ѵ�.
	return 0;
}
int ch_9()
{//����ü�� ��ġ�� ���ϴ� �Լ� 
	//stddef�� inlcuding ���Ѽ� �Ѵ�.
	//�е��� �Ǿ����� ��ġ �ľ��ϴµ� ����Ѵ�.
	//offsetof(struct ����ü, ���)
	//offsetof(����ü��Ī, ���)
	//������� ��ġ �����ϴ� �� ����.
	printf("%d\n", offsetof(struct Packetheader, flags));
	printf("%d\n", offsetof(struct Packetheader, seq));

	
	return 0;

}
int ch_10()
{//����ü ���� ũ�� �����ϱ�
	//c������ ����ü�� �����ϴ� ǥ�� ����� ����.
	//�� �����Ϸ����� �����ϴ� Ư���� �����ڸ� ����ϸ� �ȴ�
	struct _packetheader header;

	printf("%d\n", sizeof(header.flags));
	printf("%d\n", sizeof(header.seq));
	printf("%d\n", sizeof(header));
	printf("%d\n ", sizeof(struct _packetheader));

	printf("%d\n", offsetof(struct _packetheader, flags));//4
	printf("%d\n", offsetof(struct _packetheader, seq));//0
														//������� ��ġ ǥ��
//���� ������ ���� �迭�ǳ�?


	return 0;
}
int ch_11()
{
	//�޸� ���� �Լ� �� ����Ҽ� �ְ� �ȴ�.
	//����ü�� �޸𸮿� ���� �����ϴ� ����� ����ü�� �޸��� ������ �����ϴ� ���
	//malloc�Լ��� ����ü�� ����� 0���� �ʱ�ȭ ���� ���Ѵ�.
	struct Point2D p1;

	memset(&p1, 0, sizeof(struct Point2D));
	//memset (����ü������, �����Ұ�, sizeof(struct ����ü))
	printf("%d %d\n", p1.x, p1.y);

	return 0;
}
int ch_12()
{
	struct Point2D* p1 = malloc(sizeof(struct Point2D));

	memset(p1, 0, sizeof(struct Point2D));

	printf("%d %d\n", p1->x, p1->y);

	return 0;
}
int ch_13()
{//����ü�� �޸� �����ϱ�
	//�Ź� ������ ���� ����ü�� ������� ���ŷӴ�.
	//memcpy�� �̿��ؼ� �����Ҽ� �ִ�.
	struct Point2D p1;
	struct Point2D p2;

	p1.x = 10;
	p1.y = 20;

	memcpy(&p2, &p1, sizeof(struct Point2D));
	//���������� ����
	//����������, ����������, ũ��

	printf("%d %d\n", p2.x, p2.y);

	return 0;
}
int ch_14()
{//����ü �迭 ����ϱ�
	//struct ����ü �̸� �����̸�[ũ��]
	struct Point2D p[3];

	p[0].x = 10;
	p[0].y = 20;
	p[1].x = 30;
	p[1].y = 40;
	p[2].x = 50;
	p[2].y = 60;

	printf("%d %d\n", p[0].x, p[0].y);
	printf("%d %d\n", p[1].x, p[1].y);
	printf("%d %d\n", p[2].x, p[2].y);

	//���ϰ� ���� ���V�� �迭�� �����ϴ� ���ÿ� �ʱ�ȭ ����
 

	return 0;
}

int ch_15()
{
	//����ü ������ �迭 �����ϱ�
	struct Point2D* p[3];
	//struct ����ü �̸�*vhdlsxj dlfma[ũ��]
	for (int i = 0; i < sizeof(p) / sizeof(struct Point2D*); i++)
	{
		p[i] = malloc(sizeof(struct Point2D));
	}

	p[0]->x = 10;
	p[0]->y = 20;

	for (int i = 0; i < sizeof(p) / sizeof(struct Point2D*); i++)
	{
		free(p[i]);
	}
	
	return 0;
}
int ch_16()
{//����ü ����ϱ�
	//����ü�� ����ü�� ���� ����� ������ ����� �����ϴ� ����� �ٸ���
	//����ü�� ������� ���� ������ ���������� ����ü�� ��� ����� ������ �����Ѵ�.
	union Box b1;

	printf("%d\n", sizeof(b1));

	strcpy(b1.doll, "bear");

	printf("%d\n", b1.candy);
	printf("%d\n", b1.snack);
	printf("%s\n", b1.doll);


	return 0;
}
int ch_17()
{
	//����ü�� �����
	union data d1;
	d1.num2 = 0x12345678;

	printf("ox%x\n", d1.num2);
	printf("ox%x\n", d1.num1);
	printf("ox%x\n", d1.c1);

	printf("%d\n", sizeof(d1));


	return 0;

}
int ch_18()
{
	return 0;
}