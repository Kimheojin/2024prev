#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	ch_24();
	ch_25();
	ch_26();

	return 0;
}
ch_1()
{//���� ���� ������ ����ϱ�
	//���� ++
	//++����
	int num1 = 1;
	num1++;//������ �������� 1 ����
	//������ ��ü�� �ٲ�
	//+=�� �ᵵ ���� ȿ���� �� �� �ִ�.
	printf("%d\n", num1);

	return 0;
}
ch_2()
{
	float num1 = 2.1f;
	float num2 = 2.1f;

	num1++;
	num2--;

	printf("%f %f\n", num1, num2);

	return 0;

}
ch_3()
{
	char c1 = 'b';
	char c2 = 'b';

	c1++;
	c2--;

	printf("%c %c\n", c1, c2);

	return 0;
}
ch_4()
{//���� �����ڸ� ���� �տ� ����� ���� ���� ������ ��� �Ѵ�.
	int num1 = 2;
	int num2 = 2;

	printf("%d %d\n", num1++, num2--);

	printf("%d %d\n", num1, num2);

	return 0;
}
ch_5()
{//���� ������ �ϱ�
	int num1;
	int num2;

	num1 = 2 * 3;
	num2 = 7 / 2;

	printf("%d\n", num1);
	printf("%d\n", num2);

	return 0;
}
ch_6()
{//0���� ������ ������ ������ �߻����� ������ �����ϸ� ������ �߻��Ѵ�.
	float num1;
	float num2;

	num1 = 2.73f * 3.81f;
	num2 = 7.0f / 2.0f;

	printf("%f\n", num1);
	printf("%f\n", num2);

	return 0;
}//�Ǽ����� 0/0�� ������ ������ �ߴܵ��� �ʰ� ���Ѵ밡 ���´�.
ch_7()
{
	int num1 = 2;
	int num2 = 7;

	return 0;

}
ch_8()
{//������ �����ϱ�
	//������ ������ �������� ����Ҽ� �ְ� �Ǽ����� ����� �� ����.
	//�Ǽ��� ������ ���ϱ� fmod
	//������ ���� �Ҷ� 0���� ���� �� ����.
	//������ ������ �ʴ´�.
	//fmod ����� ��
	//fmod
	double num1 = 10.843;
	double num2 = 3.79;

	printf("%f\n", fmod(num1, num2));//double �ڷ��� scanf ������ lf�� �ޱ�

	float num3 = 10.878;
	float num4;
	return 0;
}
ch_9()
{
	int num1 = 7;

	num1 = num1 % 2;

	printf("%d\n", num1);

	return 0;
}//���� %= ���� �����ϴ�
ch_10()
{
	//������ ������ ����
	int num1 = 11;
	float num2 = 4.4f;

	printf("%f\n", num1 + num2);//float ���� �ڷ����� Ȯ��ȴ�.
	//�Ͻ��� �� ��ȯ
	//ũ�Ⱑ ū��, ������ ���� ������ ��ȯ�ȴ�.
	return 0;
}
ch_11()
{
	long long num1 = 1234567890;//8byte
	int num2 = 10;
	printf("%d\n", sizeof(num1));
	printf("%d\n", sizeof(num2));
	
	printf("%d\n", sizeof(num1 + num2));//?

	printf("%d\n");

	return 0;
}
ch_12()//�ڷ����� ��� �˾ƺ���
{
	//������ ������ �ڷ����� ��� �ȴ�.
	//������ ���� ��������(NOT �ݿø�)
	unsigned char num1 = 28;
	unsigned int num2 = 10000002;

	unsigned char num3 = num1 + num2;

	printf("%d\n", num3);
	//�ڷ����� Ȯ��� ���


	return 0;
}
ch_13()
//if ���ǹ����� Ư�� �����϶� �ڵ� �����ϱ�
//���� �����Ҷ�
{
	int num1 = 10;
	if (num1 == 10)//������ �����Ҷ� �� �����Ѵ�.�Ƹ���
	{
		printf("10�Դϴ�\n");
	}
	return 0;

}
ch_14()
{// loop���� �����̸� �߰�ȣ ���� ����
	//2���̻��̸� �ݵ�� �߰�ȣ ����ؾߵȴ�.
	float num1 = 0.1f;
	char c1 = 'a';
	
	if (num1 == 0.1f)
		printf("0.1�Դϴ�.\n");
	
	if (c1 == 'a')
		printf("a�Դϴ�.");
	return 0;
}
ch_15()
{
	int num1;

	scanf_s("%d", &num1);
	if (num1 == 0)
	{
		printf("10�Դϴ�.\n");
	}
	return 0;
}
ch_16()//else�� �̿��Ͽ� �б��ϱ�
{
	int num1 = 5;

	if (num1 == 10)
	{
		printf("10�Դϴ�\n");
	}
	else//���ǽ��� �������� ������ �����Ѵ�.
		// �����ݷ��� ���̸� �ȵȴ�.
	{
		printf("10�� �ƴմϴ�.");

	}//�������� 2�� �̻��϶� �߰�ȣ�� �����ϸ� ������ ������ �߻��Ѵ�.
	return 0;
}
ch_17()
{

	if (2)//0�� �ƴ� ������ ������ �� �����Ѵ�.
	{
		printf("��\n");

	}
	else
		printf("����\n");
	return 0;
}
ch_18()
{//���ǽ� ������ �����ϱ�
	//&&������ �Ѵ� ���̿��� �� ���� �����Ѵ�.
	//else if ���̴� �׻� �� ����ϱ�
	//else �� else if ���� �׻� �����ؼ� ����ϱ�
	//�񱳿����� 6�� ����
	//== != > <>= <=if �Ӹ� �ƴ϶� whiledo while
	//���׿����� ���϶� �տ��� �����϶� �ڿ��� �Ҵ��Ѵ�.
	//���̸� 1�� ��ȯ �����̸� 0�� ��ȯ�Ѵ�.
	int num1 = 5;
	int num2;

	if (num1)
		num2 = 100;
	else
		num2 = 200;
	printf("%d\n", num2);

	return 0;
}
ch_19()
{//���� ������ ���� ? ��1 = ��2 ���·� �����Ѵ�.
	int num1 = 5;
	int num2;

	num2 = num1 ? 100 : 200;//num1 �� 0�� �ƴϹǷ� �� ���� ���� = 10

	printf("%d\n", num2);

	return 0;
}
ch_20()
{//��Ʈ�����ڿ� ���׿����� ����ϱ�
	int num1 = 10;
	int num2;

	num2 = (num1 == 10) ? 100: 200;

	printf("%d\n", num2);
	//���׿������� ������ �������� ��ġ�⵵ �Ѵ�.
	return 0;
}
ch_21()//�������� ����ϱ�
//&& ���� ��� ���ϋ�
//|| ���� �ϳ��� ���϶� ������ �����Ѵ�.
//! not ������ true �� false�� �����´�.
//and ������ �˾ƺ���
{
	//and ������ = &&
	printf("%d\n", 1 && 1);//&�Ѱ��� ����ϸ� ��Ʈ �����ڰ� �ȴ�.
	//�� ���꿡�� �߿��� �κ��� �ܶ��� �̴�.
	//if ���ǹ��� �������� ����ϱ�
	//bool �ڷ��� ����ϱ� boolean

	return 0;
}
ch_22()
{
	bool n1 = true;

	if (n1 == true)
	{
		printf("��\n");
	}
	else
		printf("����\n");
	return 0;

}
ch_23()
{//�� �ڷ��� ũ�� �˾ƺ���
	printf("int�� ũ��:%d\n", sizeof(int));
	printf("bool�� ũ��:%d\n", sizeof(bool));
	return 0;
}
ch_24()
{
	unsigned char num1 = 1;
	unsigned char num2 = 3;

	printf("%d\n", num1 & num2);
	printf("%d\n", num1 ^ num2);// �� ���� �ٸ����� ���� ����
	//�� ���� �ٸ����� ���� ����
	return 0;
}
ch_25()
{
	

	return 0;
}
ch_26()
{
	//bit =  2������ �����ϴ� �����̴�.��ǻ�Ϳ��� ����Ҽ� �ִ� �ּҴ��� �̸� 0�� 1�� ��Ÿ����.
	//byte = 8��Ʈ ũ���� �����Դϴ�.
	//��Ʈ �����ڴ� ��Ʈ�� �ɼ��� ������ �� �ַ� ����Ѵ�. ��������� �Ƴ��ٴµ� ���ǰ� �ִ�. �Ƹ��� �̷� ����� flag��� �Ѵ�.
	return 0;
}