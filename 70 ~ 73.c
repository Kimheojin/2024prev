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
{//함수 포인터를 함수의 매개변수로 사용하기
	executer(add);
	return 0;
}
int (*getadd())(int, int)
{
	return add;
}
int ch_3()
{//함수 포인터를 함수의 반환값으로 사용하기
	printf("%d\n", getadd()(10, 20));//getadd함수를 호출한 뒤 반환값으로 add함수 호출

	return 0;
}
int ch_4()
{//파일에서 문자열 읽고 쓰기
	FILE* fp = fopen("hello.txt", "w");//hello.txt 파일을 쓰기 모드로 열기
	
	fprintf(fp, "%s %d\n", "hello", 100);//서식을 지정하여 문자열을 파일에 저장
	//stdout 이라는 매크로를 활용하면 화면에 문자열이 출력된다.
	fclose(fp);//파일 포인터 닫기

	return 0;
}
int ch_5()//파일처리
{//서식을 지정하여 파이렝 문자열 쓰기
	//문자열을 쓸 때는 먼저
	//서식을 지정하여 파일에 문자열 쓰기
	//fopen 함수로 파일을 연 뒤
	//r 읽기 전용 반드시 파일이 있어야 한다
	//w쓰기전용 새파일을 생성한다. 단 존재하면 덮어슨다.
	char s1[10];
	int num1;

	FILE* fp = fopen("hello.txt", "r");//읽기모드로 전환
	if (fp == NULL) {
		printf("실패, 종료\n");
		return 1;
	}
	
	fscanf(fp, "%s %d", s1, &num1);//fscanf함수는 stdin 함수를 사용하면 scanf처럼 사용할 수 있다.

	printf("%s %d\n", s1, num1);

	fclose(fp);
	return 0;
}
int ch_6()
{
	//파일에 문자열 쓰기
	FILE* fp = fopen("hello.txt", "w");

	fputs("hello, word!", fp);//fputs 사용하면 문자열 그대로 파일에 쓸 수 있다.

	fclose(fp);
	return 0;
}
int ch_7()
{//파일에서 문자열  함수로 내용을 읽음
	//fopen 함수로 파일을 영러서 파일포인터를 얻은 뒤fgets
	char buffer[20];

	FILE* fp = fopen("hello.txt", "r");

	fgets(buffer, sizeof(buffer), fp);//바로 읽지는 못함..
	
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
{//파일 포인터 활용하기
	//파일 크기를 구할 땐 fseek ftell함수를 사용한다.
	int size;

	FILE* fp = fopen("hello.txt", "r");

	fseek(fp, 0, SEEK_END);//파일 포인터를 파일의 끝으로 이동시킴
	size = ftell(fp);

	printf("%d\n", size);

	fclose(fp);
	return 0;
}
int ch_10()
{//파일 크기만큼 파일 읽ㄱ
	char* buffer;
	int size;
	int count;

	FILE* fp = fopen("hello.txt", "r");

	fseek(fp, 0, SEEK_END);
	size = ftell(fp);//파일 크기만큼 수를 반환시킴

	buffer = malloc(size + 1);//null 포함시키기 위해 1더함

	memset(buffer, 0, size + 1);

	fseek(fp, 0, SEEK_SET);
	count = fread(buffer, size, 1, fp);

	printf("%s size: %d, count: %d\n", buffer, size, count);

	fclose(fp);

	free(buffer);

	return 0;
}
int ch_11()
{//fseek 함수를 사용하여 파일 포인터의 위치를 설정한 뒤 파일의 내용을 부분적으로 읽어보겠다.

	char buffer[10] = { 0, };//0으로 초기화
	FILE* fp = fopen("hello.txt", "r");//읽기모드로 열고 파일 포인터를 반환

	fseek(fp, 2, SEEK_SET);//파일 포인터를 파일 처음에서 
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
{//파일에 값을 부분적으로 써보겠다.
	char* s1 = "abcd";
	char buffer[20] = { 0, };

	FILE* fp = fopen("hello.txt", "r+");//읽기 쓰기모드 설정
	//파일 포인터를 반환

	fseek(fp, 3, SEEK_SET);
	fwrite(s1, strlen(s1), 1, fp);

	printf("%s\n", buffer);

	fclose(fp);

	return 0;
}
int ch_13()
{//파일에서 구조체를 읽고 쓰기
	struct data d1;
	d1.num1 = 100;
	d1.num2 = 300;
	d1.num3 = 200;//d1을 한개씩 호출
	d1.num4 = 400;

	FILE* fp = fopen("data.bin", "wb");//파일을 쓰기 /바이너리 모드

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
{//배열 정렬하기
	int numarr[10] = { 8,4,2,5,3,7,10,1,6,9 };
	bubble_sort(numarr, sizeof(numarr) / sizeof(int));

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", numarr[i]);
	}
	printf("\n");

	//거품 정렬 구현하기

	return 0;
}