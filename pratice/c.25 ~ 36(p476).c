#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main()
{
	ch_24();
	ch_25();
	ch_26();

	return 0;
}
int ch_1()
{
	int num1;

	scanf_s("%d", &num1);

	switch (num1)
	{
	case 1:
		printf("1�Դϴ�.\n");
		break;
	case 2:
		printf("2�Դϴ�.\n");
		break;
	default:
		printf("default �Դϴ�.");
		break;


	}

	return 0;
}
int ch_2()
{//case�ȿ��� ���� ���� �ϱ�
	int num1;

	scanf_s("%d", &num1);

	switch (num1)
	{
	case 1:
	{
		int num2 = num1;
		printf("%d �Դϴ�.\n", num2);
		break;
	}
	//case �ȿ��� ���� ������ �� �������� ������ ������ �߻��Ѵ�.
	case 2:
		printf("2�Դϴ�.\n");
		break;
	default:
		printf("default\n");
		break;
	}

	return 0;
}
int ch_3()
{
	//for(�ʱ��; ���ǽ�; �ݺ���;)
	//���ǽ��� ���̸� �ݺ��� �ڵ带 �����ϰ� ��ȭ���� �����Ѵ�.
	for (int i = 0; i < 100; i++) //������ ���̸� ����i �� ������ i �� 100�ϲ��� ����
	{
		printf("hello world!\n");

	}//�ݺ����� �ݺ� Ƚ���� ������ ���� �� �����ϴ�.
	return 0;
	//���� �ݷ��� ���̸� �ȵȴ�.
}

int ch_4()
{
	//�ݺ����� �����̸� �߰�ȣ�� ������ �� �ִ�.
	for (int i = 0; i < 100; i++)
		
		printf("Hello world!\n");

	return 0;
}
int ch_5()
{//�ݺ��� �ڵ尡 �� �� �̻��϶��� ������ �����ؾ� �Ѵ�.
	for (int i = 0, j = 0; i < 10; i++, j += 2)
	{
		printf("i : %d, j : %d\n", i, j);
	}
	return 0;
}
//for �� ���ѷ��� ����� for (;;)�� ����ϸ� ���ҷ��� �� ���´�.
int ch_6()
{//while �ݺ������� hello, world 100�� ����ϱ�
	int i = 0;//�ʱ��
	while (i < 100)//���ǽ�
	{
		printf("Hello, world\n");
		i++;//��ȭ��
	}
	return 0;
}
int ch_7()
{
	int count;

	scanf_s("%d", &count);

	int i = 0;
	while (i < count)
	{
		printf("Hello world\n", i);
		i++;
	}
	return 0;
}
int ch_8()
{//�����Լ� ����ϱ�
	srand(time(NULL));//���� �ð� ������ �õ� ����

	int i = 0;
	while (i != 3)
	{
		i = rand() % 10;

		printf("%d\n", i);
	}

	return 0;
}
int ch_9()
{
	int i = 0;

	do
	{
		printf("Hello, world! %d\n", i);
		i++;

	} while (i < 100);//�ڿ� �����ݷ� �ٿ��ֱ�
	//while �ݺ����� ���ǽ��� �������� ������ �ݺ��� ���� �ʰ� 
	return 0;
}
int ch_10()
{
	int count;

	scanf_s("%d", &count);

	do
	{
		printf("Hello,wolrd! %d\n", count);
		count--;
	} while (count > 0);

	return 0;
}
int ch_11()
{//break continue ������ �ݺ��� �����ϱ�
	int num1 = 0;

	while (1)
	{
		num1++;

		printf("%d\n", num1);

		if (num1 == 100)
			break;
	}
	return 0;
}
int ch_12()
{
	int count;

	scanf_s("%d\n", &count);

	int i = 1;

	while (1)
	{
		printf("%d\n", i);
		if (i == count)
			break;
		i++;
	}
	return 0;
}
int ch_13()
{
	int j = 0;
	for (int i = 1; i < 6; i++)
	{
		for (j = i; j > 0; j--)
		{
			printf("#");
		}
		printf("\n");

	}
	return 0;
}//for while �ݺ����� if ���ǹ��� ����Ͽ� ��ܽ����� �� ����ϱ�
int ch_14()
{//break �� continue ����ؼ� �տ����� �Ȱ��� �����
	for (int i = 1; i < 6; i++)
	{
		int j = 0;
		while (0)
		{	
			j++;
			printf("@");
			if (j = i)
			{
				printf("\n");
				continue;
			}
		}
	}
	return 0;
}
int ch_15()
{
	//goto �� ���α׷��� �帧�� ���ϴ� ��� �ٲٱ�
	//���̺��� ���� :(�ݷ��� �ٿ�)
	//������ �켱���� �˾ƺ���
	//�ǹ����� ��ȣ�� ��Ȯ�� ǥ���� �ֱ�
	//���̺��� ���� �ݷ��� ���̸� �̸��� ���� ��Ģ�� ����ȭ ����.
	int num1;

	scanf_s("%d", &num1);

	if (num1 == 1)
		goto ONE;//�̶� ���� �ݷ��� ���̳׿�
	else if (num1 == 2)
		goto TWO;
	else
		goto EXIT;

ONE:
	printf("1�Դϴ�.\n");
	goto EXIT;
TWO:
	printf("2�Դϴ�.\n");
	goto EXIT;//�׳� ��ġ�� �ٲٴµ�
EXIT:
	return 0;
	//��ȣ�� ����� �����ڰ� ������ ���� ��� �ȴ�.���ʿ��� ����������
	return 0;
}
int ch_16()
{
	int num1 = 0;

	bool exitouterloop = false;
	for (int j = 0; j < 10; j++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (num1 == 20) {
				exitouterloop = true;
				break;
			}
			num1++;
	
		}
		if (exitouterloop == true)
			break;
	}

	printf("%d\n", num1);

	//��ø ���� ����������
	return 0;
}
int ch_17()
{
	int num1 = 0;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (num1 == 20)
				goto EXIT;
			
			num1++;
		}
	}
EXIT:
	printf("%d\n", num1);

	return 0;
}
int ch_18()
{//Fizzbuzz �� �ſ� ������ ���α׷��� �����̸� ��Ģ�� ������ ����.
	//3�� ����� ���� ��� Fizz
	//5�� ����� ���� ��� Buzz
	for (int i = 1; i < 101; i++)
	{

		//15
		if (i % 15 == 0)
		{
			printf("FizzBuzz\n");
			continue;
		}
		if (i % 3 == 0)
		{
			printf("Fizz\n");
			continue;
		}
		if (i % 5 == 0)
		{
			printf("Buzz\n");
			continue;
		}
		

		printf("%d\n", i);
	}
	return 0;
}
int ch_19()
{//������ ����ϱ�
	//�޸𸮿� ������ ������ Ȯ���� �ΰ� ���ϴ� ���� �����ϰų� �������� ����̴�.
	int num1 = 10;

	printf("%p\n", &num1);//���� �����ڴ� p�Ǵ� x�� ����Ͽ��� ������.
	//������ ���� �����ϱ�
	//�޸� �ּҴ� ������ ������ �����Ѵ�.
	//������ ���� ������ ������ *�� ����Ͽ� �����Ѵ�.


	return 0;
}
int ch_20()
{
	int* numptr;//�޸��� Ư�� ��ġ�� ����ų�� ����Ѵ�.
	int num1 = 10;

	numptr = &num1;

	printf("%p\n", numptr);
	printf("%p\n", &num1);

	return 0;
}
int ch_21()
{//������ ������ �̿��ϱ�
	int* numptr;
	int num1 = 10;

	numptr = &num1;
	printf("%d\n", *numptr);

	return 0;
}//����� ����� �����ؼ� ����ϱ�
int ch_22()
{
	int* numptr;
	int num1 = 10;

	numptr = &num1;
	
	*numptr = 20;//���� �׳� �Ǵµ�

	printf("%d\n", *numptr);
	printf("%d\n", num1);

	return 0;
}
int ch_23()
{
	int* ptru= malloc(sizeof(int));

	
	*ptru = 100;
	printf("%d\n", *ptru);
	free(ptru);
	return 0;
}
int ch_24()
{//����ſ��� ������ Ȯ���ϱ�	
	int* numptr;
	int num1 = 10;

	numptr = &num1;

	*numptr = 20;
	
	printf("%d\n", *numptr);
	printf("%d\n", num1);


	return 0;
}
int ch_25()
{//����� ������
	//������ ���� const �Լ� ��밡��
	//����� ����Ű�� ������
	int num1 = 10;
	int* numptr;

	numptr = &num1;
	*numptr = 20;

	return 0;

}
int ch_26()
{
	
	return 0;
}
