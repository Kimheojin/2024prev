#include<stdio.h>
#include<limits.h>
#include<stdint.h>
#define _CRT_SECURE_NO_WARNINGS
int main()//176p�����ؾߴ�
{
	ch_19();
	ch_20();
	ch_21();

	return 0;
}
ch_1()
//����������
{
	printf("%s\n", "Hello,world!");
	printf("%s %s\n", "Hello", "world\n");//s�� string �� ���� �̴�.
	return 0;

}//�⺻���� �˾ƺ��� ������ ������ �����ݷ��� ���δ�.
//�߰�ȣ�� �ڵ��� ������ ��Ÿ���µ� ���� ���ȴ�.
//f7�� ������ �ҽ��ڵ带 ������ ���ش�
//\n�� �ٸ����ڿ� �ٿ� �ᵵ �ȴ�.
//main�Լ��� ������ ��ũ ������ ����.
//���� �̸��� ���ϴ� ��� ������ ������ ��� ��Ģ�� ����� �Ѵ�.
//���� ���ڿ� ���ڸ� ����Ҽ� �ִ�. ��ҹ��ڸ� �����Ѵ�. ���ں��� �����ؾ� �ϸ� ��
ch_2()
{
	int num1, num2, num3;//������ �޸��� �����Ͽ� ���� �������� ���ÿ� ������ �� �ִ�.

	num1 = 10;//������ �Ҵ��ϴ� �������� �ܿ���.
	num2 = 20;
	num3 = 30;

	printf("%d %d %d\n", num1, num2, num3);
	//decimal
	return 0;
}
ch_3()
{
	//������ �����ϸ鼭 �ʱ�ȭ �ϱ�
	int num1 = 10;
	int num2 = 20, num3 = 30;

	printf("%d %d %d\n", num1, num2, num3);

	return 0;
}
ch_4() //����� ����ϱ�
//�ߴ��� ����ϱ�
{
	printf("hello world\n");
	printf("hello world\n");
	printf("hello world\n");
	return 0;
}
ch_5()
{
	//���� �ڷ��� ����ϱ�
	//signed ���� �����Ѵ�.
	char num1 = -10;
	short num2 = 30000;
	int num3 = -12345;
	long num4 = 1234;
	long long num5 = 123123123123;

	printf("%d %d %d %ld %lld\n", num1, num2, num3, num4, num5);//char short int �� ��� long �� ld lld�� ���� ���


	return 0;
}
ch_6()
{
	unsigned char num1 = 200;

	unsigned short num2 = 60000;

	unsigned int num3 = 412312;

	unsigned long num4 = 123123123;

	unsigned long long num5 = 123123123;
	//��ȣ ���� �ڷ����� u��� ���������ڸ� ����Ѵ�.
	return 0;
}
ch_7()//���� �÷ο�� ��� �÷ο�
//�ڷ����� ũ�� ���ϱ�
{
	int num1 = 0;
	int size;

	size = sizeof num1;//sizeof ǥ������ �̿��Ͽ� ����
	//sizeof(�ڷ���)��ȣ ����ϸ� �� �� ���Ҽ� �ִ�.

	printf("num1�� ũ��:%d\n", size);

	return 0;
}
ch_8()
{
	char num1 = CHAR_MIN;
	short num2 = SHRT_MIN;
	int num3 = INT_MIN;
	long num4 = LONG_MIN;
	long long num5 = LLONG_MIN;

	printf("%d %d %d %ld %lld\n", num1, num2, num3, num4, num5);

	return 0;

}
ch_9()
{
	int8_t num1 = -128;
	int16_t num2 = 32767;
	int32_t num3 = 21474123;//�׳� u�� �ٿ��� ��ȣ���� �ڷ������ε� �ٲ� �� �ִ�.
	int64_t num4 = 123123123;

	printf("%d %d %d %lld\n", num1, num2, num3, num4);

	return 0;
}
ch_10()//119p
{//�Ǽ� �ڷ��� ����ϱ�
	//float double long double ������
	//float 4����Ʈ 32��Ʈ
	float num1 = 0.1f;//�����е� �ε��Ҽ��� 
	//float �� ���� �ڿ� f �� ����

	double num2 = 3245;
	
	return 0;
}
ch_11()//��ȿ�ڸ����� �Ǽ��� ���� �ڸ��� ��ŭ ǥ���� �� �ִ�.
//���� �ڷ��� ����ϱ�
{
	char c1 = 'a';
	char c2 = 'b';

	printf("%c\n", c1);
	printf("%C\n", c2);//d���� �־ �״�� ��µȴ�.
	//16������ x�� ǥ���ϱ�
	return 0;
}
ch_12()
{//����� ����ϱ�
	char c1 = 'a';
	char c2 = 'b';
	char linefeed = '\n';

	printf("%c%c%c%c", c1, linefeed, c2, linefeed);

	return 0;
}
ch_13()
{
	//��� ����ϱ�
	//����� ���ͷ� �����ϱ�
	const int con1 = 10;
	//�ڵ��� �ǵ��� ��Ȯ�� �ϱ� ����
	printf("%d\n", 10);
	printf("%d\n", 0.1f);//���ͷ��� �ݴٽ� ǥ�� ����� ���Ѿ� �Ѵ�.
	//���ڴ� �ݵ�� ���� ����ǥ, ���ڿ��� ū ����ǥ��
	return 0;
}
ch_14()
{
	//��� ����ϱ�
	const int con1 = 1;
	const float con2 = 0.1f;
	const char con3 = 'a';

	printf("%d %f %c\n", con1, con2, con3);
	//const �� �ݵ�� ����� ���ÿ� ���� �Ҵ� �� �־�� �Ѵ�. �ʱ�ȭ ���� ������ ������ �߻��Ѵ�.
	return 0;
}
ch_15()
{//����� ���� �Ҵ��� �� ������ �ϸ� ������ ������ �߻��Ѵ�.
	//���̻�� ��ҹ��ڸ� ��� ����ص� �ȴ�.
	//�Է� ���� ������ �����ϱ�
	int num1;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &num1);

	printf("%d\n", num1);//ū ����ǥ �ȿ� ���� ������
	//define �� ����� ��Ʃ������� ������ �ȴ�.

	return 0;
}
ch_16()
{
	int num1, num2;

	printf("������ �� �� �Է��Ͻÿ�:");
	scanf_s("%d %d", &num1, &num2);

	printf("%d %d\n", num1, num2);
	
	return 0;
}
ch_17()
{
	//�Ǽ� �Է¹ޱ�
	//�Ǽ��� �Է¹޾� ������ �����ϱ�
	float num1;//double �� ����Ҷ� lf�� ������ ����ϱ�

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf_s("%f", &num1);//�Ǽ��� �Է¹޾Ƽ� ������ ����

	printf("%f", num1);


	return 0;
}
ch_18()
{//getchar�� ���� �Է¹ޱ�
	//scanf �Լ� ��� ��밡���ϴ�.
	char c1 = getchar();

	printf("%c\n", c1);
	putchar(c1);
	return 0;
}
ch_19()
{//���� ���� ����ϱ�
	int num1;
	int num2;

	num1 = 1 + 2;
	num2 = 1 - 2;

	printf("%d\n", num1);
	printf("%d\n", num2);

	return 0;
}
ch_20()
{//�Ǽ��� ������ ���������� + - �����ڷ� ���� �� �ִ�.
	//����1 = ����1 + ��;
	//
	return 0;
}