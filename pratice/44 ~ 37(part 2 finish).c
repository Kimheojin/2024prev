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
	//문자열 검색하기
	//strchr(대상문자열, 검색할 문자)
	char s1[30] = "A Garden Diary";

	char* ptr = strchr(s1, 'a');

	while (ptr != NULL)
	{
		printf("%s\n", ptr);
		ptr = strchr(ptr + 1, 'a');
	}
	return 0;
}//해당 문자열의 포인터를 반환한다
int ch_2()
{//문자열의 오른쪽 끝부터 문자로 검색하기
	char s1[30] = "A Garden Diary";

	char* ptr = strchr(s1, 'a');

	printf("%s\n", ptr);

	return 0;
}
int ch_3()
{//문자열 안에서 문자열로 겁색하기
	char s1[30] = "A Garden Diary";

	char* ptr = strstr(s1, "den");

	printf("%s\n", ptr);

	return 0;
}
int ch_4()
{
	//문자열 자르기
	//strtok 를 이용한다.
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
	//문자열 자르기(문자를 기준으로)
	//strtok(대상문자열, 기준문자)
	char s1[30] = "THe little prince";

	char* ptr = strtok(s1, " ");
	//strtok와 같이 넣어주면 공백으로 구분하여 문자열을 자른다.
	//잘린 문자열 만큼 다음 문자로 옮겨준다.

	while (ptr != NULL)
	{
		printf("%s\n", ptr);
		ptr = strtok(NULL, " ");
	}

	return 0;
}
int ch_6()
{//문자열 포인터 자르기
	//그냥 저장한거는 읽기 전용이라 하지 못하고 malloc으로 된거만 자를 수 있다.
	//자른 문자열 보관하기
	char s1[30] = "the little prince";//원본 문자열
	char* sarr[10] = { NULL, };//널 문자열 배열

	int i = 0;
	char* ptr = strtok(s1, " ");//ptr에 자른 문자열 포인터 배열
	while (ptr != NULL)
	{
		sarr[i] = ptr;//포인터를 넣을 수 있다.
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
	//문자열과 숫자를 서로 변환하기
	//문자열을 정수로 변환하기
	//atoi를 사용하면 10진법으로 사용된 문장열을 정수 로 바꿀수 있다.
	char* s1 = "283";
	int num1;

	num1 = atoi(s1);

	printf("%d\n", num1);

	return 0;
}
//단 특수 문자가 포함되면 그 문자부터는 변환되지 않는다.
int ch_8()
{
	//특정 진법으로 표기된 문자열을 정수로 변환하기
	//strtol(문자열, 끝포인터, 진법)
	char* s1 = "0xaf10";
	int num1;

	num1 = strtol(s1, NULL, 16);

	printf("%x %d\n", num1, num1);

	return 0;

}
int ch_9()
{
	//문자열을 실수로 변환하기
	//atof(문자열) ==변환된 실수를 반환한다.
	char* s1 = "35.283672";
	float num1;

	num1 = atof(s1);

	printf("%f\n", num1);

	return 0;
}
int ch_10()
{//정수를 문자열로 변환하기
	char s1[10];
	int num1 = 283;

	sprintf(s1, "%d", num1);

	printf("%s\n", s1);

	return 0;
}
int ch_11()
{//회문 판별과 ngram 만들기
	char word[30];
	int length;
	bool ispalindrome = true;

	printf("단어를 입력하세요: ");
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