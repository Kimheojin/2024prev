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
{//증가 감소 연산자 사용하기
	//변수 ++
	//++변수
	int num1 = 1;
	num1++;//정수형 변수값을 1 더함
	//변수값 자체가 바뀜
	//+=을 써도 같은 효과를 낼 수 있다.
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
{//증감 연산자를 변수 앞에 사용할 것을 전위 연산자 라고 한다.
	int num1 = 2;
	int num2 = 2;

	printf("%d %d\n", num1++, num2--);

	printf("%d %d\n", num1, num2);

	return 0;
}
ch_5()
{//곱셈 나눗셈 하기
	int num1;
	int num2;

	num1 = 2 * 3;
	num2 = 7 / 2;

	printf("%d\n", num1);
	printf("%d\n", num2);

	return 0;
}
ch_6()
{//0으로 나누면 컴파일 에러는 발생하지 않지만 실행하면 에러가 발생한다.
	float num1;
	float num2;

	num1 = 2.73f * 3.81f;
	num2 = 7.0f / 2.0f;

	printf("%f\n", num1);
	printf("%f\n", num2);

	return 0;
}//실숫값에 0/0을 나누면 실행이 중단되지 않고 무한대가 나온다.
ch_7()
{
	int num1 = 2;
	int num2 = 7;

	return 0;

}
ch_8()
{//나머지 연산하기
	//나머지 연산은 정수에만 사용할수 있고 실수에는 사용할 수 없다.
	//실수의 나머지 구하기 fmod
	//나머지 연산 할때 0으로 나눌 수 없다.
	//순서는 변하지 않는다.
	//fmod 사용해 보
	//fmod
	double num1 = 10.843;
	double num2 = 3.79;

	printf("%f\n", fmod(num1, num2));//double 자료형 scanf 받을때 lf로 받기

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
}//변수 %= 값도 가능하다
ch_10()
{
	//음수의 나머지 연산
	int num1 = 11;
	float num2 = 4.4f;

	printf("%f\n", num1 + num2);//float 으로 자료형이 확장된다.
	//암시적 형 변환
	//크기가 큰쪽, 범위가 넓은 쪽으로 변환된다.
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
ch_12()//자료형의 축소 알아보기
{
	//강제로 넣으면 자료형이 축소 된다.
	//나머지 값은 버려진다(NOT 반올림)
	unsigned char num1 = 28;
	unsigned int num2 = 10000002;

	unsigned char num3 = num1 + num2;

	printf("%d\n", num3);
	//자료형의 확장과 축소


	return 0;
}
ch_13()
//if 조건문으로 특정 조건일때 코드 실행하기
//조건 만족할때
{
	int num1 = 10;
	if (num1 == 10)//조건을 만족할때 만 실행한다.아마도
	{
		printf("10입니다\n");
	}
	return 0;

}
ch_14()
{// loop문이 한줄이면 중괄호 생략 가능
	//2줄이상이면 반드시 중괄호 사용해야된다.
	float num1 = 0.1f;
	char c1 = 'a';
	
	if (num1 == 0.1f)
		printf("0.1입니다.\n");
	
	if (c1 == 'a')
		printf("a입니다.");
	return 0;
}
ch_15()
{
	int num1;

	scanf_s("%d", &num1);
	if (num1 == 0)
	{
		printf("10입니다.\n");
	}
	return 0;
}
ch_16()//else를 이용하여 분기하기
{
	int num1 = 5;

	if (num1 == 10)
	{
		printf("10입니다\n");
	}
	else//조건식이 만족하지 않을때 실행한다.
		// 세미콜론을 붙이면 안된다.
	{
		printf("10이 아닙니다.");

	}//루프식이 2줄 이상일때 중괄호를 생략하면 컴파일 오류가 발생한다.
	return 0;
}
ch_17()
{

	if (2)//0이 아닌 수들을 넣으면 다 실행한다.
	{
		printf("참\n");

	}
	else
		printf("거짓\n");
	return 0;
}
ch_18()
{//조건식 여러개 지정하기
	//&&연산자 둘다 참이여야 참 값을 배출한다.
	//else if 사이는 항상 띄어서 사용하기
	//else 와 else if 순서 항상 유의해서 사용하기
	//비교연산자 6개 존재
	//== != > <>= <=if 뿐만 아니라 whiledo while
	//삼항연산자 참일때 앞에거 거짓일때 뒤에거 할당한다.
	//참이면 1을 반환 거짓이면 0을 반환한다.
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
{//삼항 연산자 변수 ? 값1 = 값2 형태로 저장한다.
	int num1 = 5;
	int num2;

	num2 = num1 ? 100 : 200;//num1 은 0이 아니므로 참 값을 배출 = 10

	printf("%d\n", num2);

	return 0;
}
ch_20()
{//비트연산자와 삼항연산자 사용하기
	int num1 = 10;
	int num2;

	num2 = (num1 == 10) ? 100: 200;

	printf("%d\n", num2);
	//삼항연산자의 가독석 가독성을 해치기도 한다.
	return 0;
}
ch_21()//논리연산자 사용하기
//&& 양쪽 모두 참일떄
//|| 둘중 하나라도 참일때 참값을 배출한다.
//! not 연산자 true 와 false를 뒤집는다.
//and 연산자 알아보기
{
	//and 연산자 = &&
	printf("%d\n", 1 && 1);//&한개만 사용하면 비트 연산자가 된다.
	//논리 연산에서 중요한 부분이 단락평가 이다.
	//if 조건문과 논리연산자 사용하기
	//bool 자료형 사용하기 boolean

	return 0;
}
ch_22()
{
	bool n1 = true;

	if (n1 == true)
	{
		printf("참\n");
	}
	else
		printf("거짓\n");
	return 0;

}
ch_23()
{//불 자료형 크기 알아보기
	printf("int의 크기:%d\n", sizeof(int));
	printf("bool의 크기:%d\n", sizeof(bool));
	return 0;
}
ch_24()
{
	unsigned char num1 = 1;
	unsigned char num2 = 3;

	printf("%d\n", num1 & num2);
	printf("%d\n", num1 ^ num2);// 두 값이 다를때만 참을 배출
	//두 값이 다를때만 참을 배출
	return 0;
}
ch_25()
{
	

	return 0;
}
ch_26()
{
	//bit =  2진수를 저장하는 단위이다.컴퓨터에서 사용할수 있는 최소단위 이며 0과 1을 나타낸다.
	//byte = 8비트 크기의 단위입니다.
	//비트 연산자는 비트로 옵션을 설정할 떄 주로 사용한다. 저장공간을 아낀다는데 의의가 있다. 아마도 이런 방식을 flag라고 한다.
	return 0;
}