#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#define _CRT_SEXURE_NO_WARNINGS
#pragma warning(disable:4996)
int main()
{
	ch_8();
	ch_9();
	ch_10();

	return 0;
}
int ch_1()
{
	//���ڿ� �˻��ϱ�
	//strchr(����ڿ�, �˻��� ����)
	char s1[30] = "A Garden Diary";

	char* ptr = strchr(s1, 'a');

	while (ptr != NULL)
	{
		printf("%s\n", ptr);
		ptr = strchr(ptr + 1, 'a');
	}
	return 0;
}//�ش� ���ڿ��� �����͸� ��ȯ�Ѵ�
int ch_2()
{//���ڿ��� ������ ������ ���ڷ� �˻��ϱ�
	char s1[30] = "A Garden Diary";

	char* ptr = strchr(s1, 'a');

	printf("%s\n", ptr);

	return 0;
}
int ch_3()
{//���ڿ� �ȿ��� ���ڿ��� �̻��ϱ�
	char s1[30] = "A Garden Diary";

	char* ptr = strstr(s1, "den");

	printf("%s\n", ptr);

	return 0;
}
int ch_4()
{
	//���ڿ� �ڸ���
	//strtok �� �̿��Ѵ�.
	char s1[30] = "The little prince";

	char* ptr = strtok(s1, " ");

	while (ptr != NULL)
	{
		printf("%s\n", ptr);

		ptr = strtok(NULL, " ");

	}
	return 0;
}
int ch_5()
{
	//���ڿ� �ڸ���(���ڸ� ��������)
	//strtok(����ڿ�, ���ع���)
	char s1[30] = "THe little prince";

	char* ptr = strtok(s1, " ");
	//strtok�� ���� �־��ָ� �������� �����Ͽ� ���ڿ��� �ڸ���.
	//�߸� ���ڿ� ��ŭ ���� ���ڷ� �Ű��ش�.

	while (ptr != NULL)
	{
		printf("%s\n", ptr);
		ptr = strtok(NULL, " ");
	}

	return 0;
}
int ch_6()
{//���ڿ� ������ �ڸ���
	//�׳� �����ѰŴ� �б� �����̶� ���� ���ϰ� malloc���� �ȰŸ� �ڸ� �� �ִ�.
	//�ڸ� ���ڿ� �����ϱ�
	char s1[30] = "the little prince";//���� ���ڿ�
	char* sarr[10] = { NULL, };//�� ���ڿ� �迭

	int i = 0;
	char* ptr = strtok(s1, " ");//ptr�� �ڸ� ���ڿ� ������ �迭
	while (ptr != NULL)
	{
		sarr[i] = ptr;//�����͸� ���� �� �ִ�.
		i++;
	
		ptr = strtok(NULL, " ");
	}
	 
	for (int i = 0; i < 10; i++)
	{
		if (sarr[i] != NULL)
			printf("%s\n", sarr[i]);
	}

	return 0;
}
int ch_7()
{
	//���ڿ��� ���ڸ� ���� ��ȯ�ϱ�
	//���ڿ��� ������ ��ȯ�ϱ�
	//atoi�� ����ϸ� 10�������� ���� ���忭�� ���� �� �ٲܼ� �ִ�.
	char* s1 = "283";
	int num1;

	num1 = atoi(s1);

	printf("%d\n", num1);

	return 0;
}
//�� Ư�� ���ڰ� ���ԵǸ� �� ���ں��ʹ� ��ȯ���� �ʴ´�.
int ch_8()
{
	//Ư�� �������� ǥ��� ���ڿ��� ������ ��ȯ�ϱ�
	//strtol(���ڿ�, ��������, ����)
	char* s1 = "0xaf10";
	int num1;

	num1 = strtol(s1, NULL, 16);

	printf("%x %d\n", num1, num1);

	return 0;

}
int ch_9()
{
	//���ڿ��� �Ǽ��� ��ȯ�ϱ�
	//atof(���ڿ�) ==��ȯ�� �Ǽ��� ��ȯ�Ѵ�.
	char* s1 = "35.283672";
	float num1;

	num1 = atof(s1);

	printf("%f\n", num1);

	return 0;
}
int ch_10()
{//������ ���ڿ��� ��ȯ�ϱ�
	char s1[10];
	int num1 = 283;

	sprintf(s1, "%d", num1);

	printf("%s\n", s1);

	return 0;
}
int ch_11()
{//ȸ�� �Ǻ��� ngram �����
	char word[30];
	int length;
	bool ispalindrome = true;

	printf("�ܾ �Է��ϼ���: ");
	scanf_s("%s", word);

	length = strlen(word);

	for (int i = 0; i < length / 2; i++)
	{

		if (word[i] != word[length -1 -i])
	}
	return 0;
}
int ch_12()
{
	return 0;
}
int ch_13()
{
	return 0;
}