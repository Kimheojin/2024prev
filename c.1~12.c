#include<stdio.h>
#include<limits.h>
#include<stdint.h>
#define _CRT_SECURE_NO_WARNINGS
int main()//176p까지해야댐
{
	ch_19();
	ch_20();
	ch_21();

	return 0;
}
ch_1()
//서식지정자
{
	printf("%s\n", "Hello,world!");
	printf("%s %s\n", "Hello", "world\n");//s는 string 의 약자 이다.
	return 0;

}//기본문법 알아보기 구문이 끝날때 세미콜론을 붙인다.
//중괄호는 코드의 범위를 나타내는데 많이 사용된다.
//f7을 누르면 소스코드를 컴파일 해준다
//\n은 다른문자와 붙여 써도 된다.
//main함수가 없으면 링크 에러가 난다.
//변수 이름은 원하는 대로 지으면 되지만 몇가지 규칙을 따라야 한다.
//영문 문자와 숫자를 사용할수 있다. 대소문자를 구분한다. 문자부터 시작해야 하며 숫
ch_2()
{
	int num1, num2, num3;//변수를 콤마로 구분하여 벼누 여러개를 동시에 선언할 수 있다.

	num1 = 10;//변수에 할당하는 느낌으로 외우자.
	num2 = 20;
	num3 = 30;

	printf("%d %d %d\n", num1, num2, num3);
	//decimal
	return 0;
}
ch_3()
{
	//변수를 선언하면서 초기화 하기
	int num1 = 10;
	int num2 = 20, num3 = 30;

	printf("%d %d %d\n", num1, num2, num3);

	return 0;
}
ch_4() //디버거 사용하기
//중단점 사용하기
{
	printf("hello world\n");
	printf("hello world\n");
	printf("hello world\n");
	return 0;
}
ch_5()
{
	//정수 자료형 사용하기
	//signed 보통 생략한다.
	char num1 = -10;
	short num2 = 30000;
	int num3 = -12345;
	long num4 = 1234;
	long long num5 = 123123123123;

	printf("%d %d %d %ld %lld\n", num1, num2, num3, num4, num5);//char short int 는 모두 long 은 ld lld를 각각 사용


	return 0;
}
ch_6()
{
	unsigned char num1 = 200;

	unsigned short num2 = 60000;

	unsigned int num3 = 412312;

	unsigned long num4 = 123123123;

	unsigned long long num5 = 123123123;
	//부호 없는 자료형은 u라는 서식지정자를 사용한다.
	return 0;
}
ch_7()//오버 플로우와 언더 플로우
//자료형의 크기 구하기
{
	int num1 = 0;
	int size;

	size = sizeof num1;//sizeof 표현식을 이용하여 구함
	//sizeof(자료형)괄호 사용하면 둘 다 구할수 있다.

	printf("num1의 크기:%d\n", size);

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
	int32_t num3 = 21474123;//그냥 u를 붙여서 부호없는 자료형으로도 바꿀 수 있다.
	int64_t num4 = 123123123;

	printf("%d %d %d %lld\n", num1, num2, num3, num4);

	return 0;
}
ch_10()//119p
{//실수 자료형 사용하기
	//float double long double 세가지
	//float 4바이트 32비트
	float num1 = 0.1f;//단정밀도 부동소수점 
	//float 은 숫자 뒤에 f 를 붙임

	double num2 = 3245;
	
	return 0;
}
ch_11()//유효자릿수는 실수를 일정 자릿수 만큼 표현할 수 있다.
//문자 자료형 사용하기
{
	char c1 = 'a';
	char c2 = 'b';

	printf("%c\n", c1);
	printf("%C\n", c2);//d값을 넣어도 그대로 출력된다.
	//16진수는 x로 표현하기
	return 0;
}
ch_12()
{//제어문자 사용하기
	char c1 = 'a';
	char c2 = 'b';
	char linefeed = '\n';

	printf("%c%c%c%c", c1, linefeed, c2, linefeed);

	return 0;
}
ch_13()
{
	//상수 사용하기
	//상수와 리터럴 구분하기
	const int con1 = 10;
	//코드의 의도를 명확히 하기 위해
	printf("%d\n", 10);
	printf("%d\n", 0.1f);//리터럴은 반다시 표기 방법을 지켜야 한다.
	//문자는 반드시 작은 따옴표, 문자열은 큰 따옴표로
	return 0;
}
ch_14()
{
	//상수 사용하기
	const int con1 = 1;
	const float con2 = 0.1f;
	const char con3 = 'a';

	printf("%d %f %c\n", con1, con2, con3);
	//const 는 반드시 선언과 동시에 값을 할당 해 주어야 한다. 초기화 하지 않으면 에러가 발생한다.
	return 0;
}
ch_15()
{//상수에 값을 할당한 뒤 컴파일 하면 컴파일 에러가 발생한다.
	//접미사는 대소문자를 섞어서 사용해도 된다.
	//입력 값을 변수에 저장하기
	int num1;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &num1);

	printf("%d\n", num1);//큰 따옴표 안에 서식 지정자
	//define 은 비쥬얼 스튜디오에만 넣으면 된다.

	return 0;
}
ch_16()
{
	int num1, num2;

	printf("정수를 두 개 입력하시오:");
	scanf_s("%d %d", &num1, &num2);

	printf("%d %d\n", num1, num2);
	
	return 0;
}
ch_17()
{
	//실수 입력받기
	//실수를 입력받아 정수에 저장하기
	float num1;//double 을 사용할땐 lf를 무조건 사용하기

	printf("실수를 입력하시오: ");
	scanf_s("%f", &num1);//실수를 입력받아서 변수에 저장

	printf("%f", num1);


	return 0;
}
ch_18()
{//getchar로 문자 입력받기
	//scanf 함수 대신 사용가능하다.
	char c1 = getchar();

	printf("%c\n", c1);
	putchar(c1);
	return 0;
}
ch_19()
{//덧셉 뺄셈 사용하기
	int num1;
	int num2;

	num1 = 1 + 2;
	num2 = 1 - 2;

	printf("%d\n", num1);
	printf("%d\n", num2);

	return 0;
}
ch_20()
{//실수도 정수와 마찬가지로 + - 연산자로 구할 수 있다.
	//변수1 = 변수1 + 값;
	//
	return 0;
}