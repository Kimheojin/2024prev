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
		printf("1입니다.\n");
		break;
	case 2:
		printf("2입니다.\n");
		break;
	default:
		printf("default 입니다.");
		break;


	}

	return 0;
}
int ch_2()
{//case안에서 변수 선언 하기
	int num1;

	scanf_s("%d", &num1);

	switch (num1)
	{
	case 1:
	{
		int num2 = num1;
		printf("%d 입니다.\n", num2);
		break;
	}
	//case 안에서 변수 선언할 때 묶어주지 않으면 에러가 발생한다.
	case 2:
		printf("2입니다.\n");
		break;
	default:
		printf("default\n");
		break;
	}

	return 0;
}
int ch_3()
{
	//for(초기식; 조건식; 반복식;)
	//조건식이 참이면 반복할 코드를 실행하고 변화식을 수행한다.
	for (int i = 0; i < 100; i++) //조건이 참이면 실행i 는 마지막 i 는 100일껄로 예상
	{
		printf("hello world!\n");

	}//반복문은 반복 횟수가 정해져 있을 때 융용하다.
	return 0;
	//세미 콜론을 붙이면 안된다.
}

int ch_4()
{
	//반복문이 한줄이면 중괄호를 생략할 수 있다.
	for (int i = 0; i < 100; i++)
		
		printf("Hello world!\n");

	return 0;
}
int ch_5()
{//반복할 코드가 두 줄 이상일때는 생략에 주의해야 한다.
	for (int i = 0, j = 0; i < 10; i++, j += 2)
	{
		printf("i : %d, j : %d\n", i, j);
	}
	return 0;
}
//for 로 무한루프 만들기 for (;;)을 사용하면 무할루프 가 나온다.
int ch_6()
{//while 반복문으로 hello, world 100번 출력하기
	int i = 0;//초기식
	while (i < 100)//조건식
	{
		printf("Hello, world\n");
		i++;//변화식
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
{//랜덤함수 사용하기
	srand(time(NULL));//현재 시간 값으로 시드 설정

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

	} while (i < 100);//뒤에 세미콜론 붙여주기
	//while 반복문은 조건식이 만족하지 않으면 반복을 하지 않고 
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
{//break continue 문으로 반복문 제어하기
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
}//for while 반복문과 if 조건문을 사용하여 계단식으로 별 출력하기
int ch_14()
{//break 와 continue 사용해서 앞에꺼랑 똑같이 만들기
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
	//goto 로 프로그램의 흐름을 원하는 대로 바꾸기
	//레이블은 끝에 :(콜론을 붙여)
	//연산자 우선순위 알아보기
	//실무에선 괄호로 정확히 표시해 주기
	//레이블은 끝에 콜론을 붙이며 이름을 짓는 규칙은 변수화 같다.
	int num1;

	scanf_s("%d", &num1);

	if (num1 == 1)
		goto ONE;//이땐 세미 콜론을 붙이네여
	else if (num1 == 2)
		goto TWO;
	else
		goto EXIT;

ONE:
	printf("1입니다.\n");
	goto EXIT;
TWO:
	printf("2입니다.\n");
	goto EXIT;//그냥 위치만 바꾸는듯
EXIT:
	return 0;
	//괄호를 사용한 연산자가 무조건 먼저 계산 된다.왼쪽에서 오른쪽으로
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

	//중첩 루프 빠져나오기
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
{//Fizzbuzz 는 매우 간단한 프로그래밍 문제이며 규칙은 다음과 같다.
	//3의 배수는 숫자 대신 Fizz
	//5의 배수는 숫자 대신 Buzz
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
{//포인터 사용하기
	//메모리에 일정한 공간을 확보해 두고 원하는 값을 저장하거나 가져오는 방식이다.
	int num1 = 10;

	printf("%p\n", &num1);//서식 지정자는 p또는 x를 사용하여도 괜찮다.
	//포인터 변수 선언하기
	//메모리 주소는 포인터 변수에 저장한다.
	//다음과 같이 포인터 변수는 *을 사용하여 선언한다.


	return 0;
}
int ch_20()
{
	int* numptr;//메모리의 특정 위치를 가르킬떄 사용한다.
	int num1 = 10;

	numptr = &num1;

	printf("%p\n", numptr);
	printf("%p\n", &num1);

	return 0;
}
int ch_21()
{//역참조 연산자 이용하기
	int* numptr;
	int num1 = 10;

	numptr = &num1;
	printf("%d\n", *numptr);

	return 0;
}//선언과 사용을 구분해서 사용하기
int ch_22()
{
	int* numptr;
	int num1 = 10;

	numptr = &num1;
	
	*numptr = 20;//저장 그냥 되는듯

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
{//디버거에서 포인터 확인하기	
	int* numptr;
	int num1 = 10;

	numptr = &num1;

	*numptr = 20;
	
	printf("%d\n", *numptr);
	printf("%d\n", num1);


	return 0;
}
int ch_25()
{//상수와 포인터
	//포인터 에도 const 함수 사용가능
	//상수를 가리키는 포인터
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
