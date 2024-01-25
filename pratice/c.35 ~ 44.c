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
int ch_1()//void 포인터 선언하기
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
	//기본적으로 c언어는 자료형이 다른 포인터끼리 메모리 주소를 저장하면 컴파일 경고가 나는데 void를 사용하면 경고가 나지 않는다.
	//이런 특성때문에 void는 범용 포인터 라고 한다,
	//즉 직접 자료형을 변환하지 않아도 암시적으로 자료형이 변환되는 방식이다.
	//보이드 포인터는 역참조 할 수 없다.
	return 0;
}
int ch_2()//이중 포인터 사용하기
{//434페이지

	int* numptr1;
	int** numptr2;
	int num1 = 10;
	numptr1 = &num1;
	numptr2 = &numptr1;
	int* joyboy;//그냥 포인터 써도 저장 되는데 이중포인터 왜쓰지''
	//배열떔에 쓰나
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

	//메모리 사용하기
	//원하는 만큼 메모리 공간을 받아 사용하기
	return 0;
}
int ch_4()
{
	//메모리 내용을 한꺼번에 설정하기memset
	//설정하는 크기는 바이트 단위이다.
	long long* numptr = malloc(sizeof(long long));

	memset(numptr, 0x27, sizeof(long long));
	//첫번째 칸은 메모리 주소, 변환되는 값
	//실패하면 null 값을 변환

	printf("%d\n", sizeof(long long));

	printf("0x%llx\n", *numptr);

	free(numptr);

	
	return 0;
	
}
int ch_5()
{
	//널포인터 사용하기
	//메모리가 할당되지 않은 포인터
	int* numptr1 = NULL;//포인터에 NULL저장

	printf("%p\n", numptr1);
	int* numptr2;

	numptr2 = NULL;
	//포인터와 메모리 정수형으로 된 메모리 주소가 저장되어 있다.
	printf("%p\n", numptr2);



	return 0;
}
int ch_6()
{
	//배열 사용하기
	//잘형의 변수를 일렬로 놓은 형태
	//배열은 변수 이름 뒤에 대괄호를 붙인 뒤 크기를 설정한다./
	//값을 초기화 할땐 중괄호를 사용한다.
	int numarr[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110 };//세미 콜론을 붙여준다.
	//이미 선언된 배열에는 중괄호 사용 불가
	//재 초기화 불가능 한듯

	printf("%d\n", numarr[0]);
	printf("%d\n", numarr[1]);
	printf("%d\n", numarr[2]);

	return 0;
	//요소가 0개인 배열은 선언할 수 가 없다.
	//배열의 이름도 포인터 이다.
	//배열을 선언할때 값을 초기화 하면 크기를 생략할 수 있다.
}
int ch_7()
{
	//배열을 0으로 초기화하기
	int numarr[10] = { 0, };//1을 넣으면 왜 안돼냐';;;
	//0만 가능

	printf("%d\n", numarr[0]);
	printf("%d\n", numarr[4]);

	printf("%d\n", numarr[9]);


	return 0;
}
int ch_8()
{
	//배열의 요오세 값 할당하기
	int numarr[10];

	numarr[0] = 11;

	numarr[3] = 33;

	printf("%d %d %d\n", numarr[0], numarr[3], numarr[2]);

	return 0;
}
int ch_9()
{
	int numarr[10] = { 0, };

	printf("%d\n", sizeof(numarr));//sizeof함수로 총 크기를 구할 수 있다.
	printf("%d\n", sizeof(numarr) / sizeof(int));
	return 0;
}
int ch_10()
{
	//배열의 크기와 인덱스
	//인덱스가 배열의 범위를 벗어났는지 검사하지 않으므로 프로그래머가 항상 이 부분을 생각하면 서 작서해야 한다.
	int numarr[10] = { 11, 22, 3, 4,  5, 6, 7, 8, 9, 10 };

	for (int i = 0; i < sizeof(numarr) / sizeof(int); i++)
	{
		printf("%d\n", numarr[i]);
	}
	return 0;
}
int ch_11()
{
	//배열을 포인터에 넣기
	//배열은 사실 첫 번째 요소의 주속값만 담고 있다.
	int numarr[10] = { 11, 22, 33, 44, 555, 66, 77 , 88, 9,9 };
	
	int* numptr = numarr;

	printf("%d\n", *numptr);

	printf("%d\n", * numarr);

	printf("%d\n", numptr[10]);//배열의 주소를 역참조 하여 이동 가능
	//but sizeof 는 다르게 나온다.


	return 0;
}
int ch_12()
{//10진수를 2진수로 변환하
	//나머지를 역순으로 읽으면 2진수가 된다.
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
{//2차원 배열 사용하기
	//2차원 배열에 대해 알아보기
	//세로 x 가로 형태로 표현한다.
	//자료형 이름 세로 가로
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


	
	//2차원 배열의 크기 구하기
	//가로 세로 크기를 늘려야 할 경우 관련된 반복문의 조건식도 함께 수정해야 한다.

	return 0;
}
int ch_15()
{
	//반복문으로 2차원 배열의 요소를 모두 출력하기
	//2차원 배열을 포인터에 넣기
	//참고int(*numptr)에서 괄호를뺀 는 int형 포인터 4개를 담을 수 있는 배열이라는 뜻이다.
	//즉 괄호가 있으면 가리키는 배열 포인터, 
	int numarr[3][4] = {//세로의 크기가 3, 가로의 크기가 4인 배열
		{11, 22, 33,44},
		{22,33,44,55},
		{33, 44, 55, 66}
	};

	int(*numptr1)[4] = numarr;//가로의 크기가 일치해야 한다.


	return 0;
}
int ch_16()
{//포인터와 배열 응용하기
	//지금까지 크기가 고정된 배열을 사용
	//포인터에 메모리를 할다앟여 배열처럼 사용
	int* numptr = malloc(sizeof(int) * 10);
	
	numptr[0] = 10;
	numptr[9] = 20;

	printf("%d\n", numptr[0]);
	printf("%d\n", numptr[9]);

	free(numptr);

	//visual studio는 가변인자를 배열 인자로 지원하지 않는다.

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
{//포인터에 할당된 메모리를 2차원 배열처럼 사용하기
	int** m = malloc(sizeof(int*) * 3);//인트 포인터형 곱하기 세로(앞에 주소만 저장하는듯)(포인터 연산 그럼 어캐하지
	//이중 포인터에 int 포인터 크기
	for (int i = 0; i < 3; i++)
	{
		m[i] = malloc(sizeof(int) * 4);//int 크기 곱하기 가로크기 만큼 동적 메모리 할당
		//배열의 가로
	}
	m[0][0] = 1;
	m[2][0] = 5;
	m[2][3] = 2;

	//세로먼저 선언
	//가로먼저 풀어줌
	for (int i = 0; i < 3; i++)
	{
		free(m[i]);
	}
	free(m);

	return 0;
}
int ch_19()
{//문자열 사용하기
	//컴파일은 되지만 실행은 안된다.
	//문자열은 char 포인터 형식으로 사용한다.
	char c1 = 'a';

	char* s1 = "hello";

	printf("%c\n", c1);
	printf("%s\n", s1);//마지막은 null 문자로 끝난다.
	//앞에 문자열 주소만 저장하고 나머진 채워가는 형식으로 저장한다.
	//아마도
	//이 문자열은 읽기 전용이므로 참고할것.
	//문자열의 앞과 뒤는 어디인가요

	return 0;
}//문자열의 메모리 주소 출력
int ch_20()
{
	char* s1 = "Hello";

	printf("%c\n", s1[1]);
	printf("%c\n", s1[2]);

	return 0;
}//null은 출력되지 않는다...
int ch_21()
{//배열 형태로 문자열 선언하기
	char s1[10] = "Hello";

	printf("%s\n", s1);

	return 0;//나머지 부분은 null로 가득 찬다.
	//문자열은 선언과 즉시 초기화 해야 한다.
}
int ch_22()
{
	//배열을 선언할때는 항상 크게 하자

	//크기를 생략하면 크기에 맞춰 알아서 배열해 준다.
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
{//입력값을 문자열에 저장하기
	char s1[10];

	printf("문자열을 입력하세요: ");
	scanf_s("%s", &s1);
	//공백은 입력받지 못한다. 다른 서식자를 이용하면 공백까지 포함하여 문자열을 입력받을 수 있다.
	printf("%s\n", s1);
	return 0;
}
int ch_25()
{
	char* s1 = malloc(sizeof(char) * 10);// 10자리 할당
	
	printf("문자열을 입력하세요:\n");
	scanf_s("%s", s1);

	printf("%s\n", s1);

	free(s1);

	return 0;
}
int ch_26()
{
	//문자열 여러개 입력받기
	//문자열의 길이를 구하고 비교하기
	//strlen 합수로 구할 수 있다.
	char s1[10];
	char s2[10];

	printf("문자열 두 개 입력하세요: ");

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
	//strlen은 순수한 문자열 길이만 구하며 null문자는 포함하지 않는다.
	//ctrcmp 두 문자열이 같은지 비교
	char s1[10] = "hello";
	char* s2 = "hello";

	int ret = strcmp(s1, s2);
	//두 문자열이 같으면 0을 출력한다.
	//-1 은 문자열 2가 클때
	//1을 문자열 1이 클때
	printf("%d\n", ret);

	return 0;
}
int ch_29()
{//문자열을 복사하고 붙ㅇ기

	char s1[10] = "hello";
	char s2[20];

	strcpy(s2, s1);//앞이 대상문자열, 뒤가 원본 문자열
	//뒤에껄 앞에 복사해서 넣는 형태인듯

	printf("%s\n", s2);

	return 0;
}
int ch_30()
{//문자열 붙이기
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
}//문자열을 저장할 때 빈 배열을 버퍼 라고 부른다.
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
}//printf처럼 서식을 지정하여 문자열을 만들 수 있다.
//spirntf(배열, 서식, 값)
int ch_34()
{
	//출력하지 않고 따로 저장
	//문자열의 형태로 저장한다.
	//문자열 검색하기(포인터를 이용한다.)
	//strchr(대상문자열, 검색할 문자)string 파일에 존재한다.
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









