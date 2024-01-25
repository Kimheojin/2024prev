

//main함수 따로 추가해서 실행시키기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <stddef.h>//offsetoff 가 저장된 헤더파일
//구조체 정의 따로
#pragma pack(push, 1)//1바이크 크기로 정렬
struct packetheader {
	char flags;//1바이트
	int seq;//4바이트
};
#pragma pack(pop)//정렬 상태를 이전 상태로 복원
typedef struct Person {
	char name[20];
	int age;
	char address[100];
}pp;
typedef struct _Person {
	char name[20];
	int age;
	char address[100];
}Person;
struct Data {
	char c1;
	int* numPtr;
};
struct Point2D {
	int x;
	int y;
};
union Box {
	short candy;
	float snack;
	char doll[8];

};
union Data_1 {
	char c1;
	short num1;
	int num2;
};
int master_210926()
{
	printf("9월 26일\n");
	ch_27();
	ch_28();
	ch_29();
	return 0;
}
int ch_1()
{
	printf("hello\n");
	
	char s1[30] = "The Little World";//배열

	char* ptr = strtok(s1, " ");//공백 기준으로 문자열을 자름, 포인터 반환
	//THe

	while (ptr != NULL)
	{
		printf("%s\n", ptr);
		ptr = strtok(NULL, " ");//널을 넣으면 직ㅈ처리햇던 문자열에서 잘린 문자열 만큼 다음문자로 이동한 뒤 문자열을 자른다.
	}
	return 0;
}//포인터에 문자열 리터럴이 들어있는 경우 읽기전용이라 사용불가하다.
int ch_2()
{
	char* s1 = malloc(sizeof(char) * 30);

	strcpy(s1, "The Little World");
	char* ptr = strtok(s1, " ");
	while (ptr != NULL)
	{
		printf("%s\n", ptr);
		ptr = strtok(NULL, " ");
	}
	free(s1);

	return 0;
}
//자른 문자열 보관하기
int ch_3()
{
	printf("please");

	char s1[30] = "The Little Prince";
	char* sArr[10] = { NULL, };

	int i = 0;

	char* ptr = strtok(s1, " ");

	while (ptr != NULL)
	{
		sArr[i] = ptr;
		i++;

		ptr = strtok(NULL, " ");
	}
	for (int i = 0; i < 10; i++)
	{
		if (sArr[i] != NULL)
			printf("%s\n", sArr[i]);

	}
	return 0;
}
int ch_4()//문자열과 숫자를 서로 변환하기
{
	//문자열을 정수로 변환하기
	char* s1 = "283";
	int num1;
	num1 = atoi(s1);
	printf("%d\n", num1);

	return 0;

}
int ch_5()
{
	//strtol(문자열, 끝포인터, 진법)
	//단 문자열은 정수로 되어 있어야 하며 특수문자등이 포함되어 있으면 실행되지 않는다.
	char* s1 = "0xaf10";
	int num1;

	num1 = strtol(s1, NULL, 16);//널 자리에 포인터를 넣으면 끝 포인터를 저장해 준다
	
	printf("%x %d\n", num1, num1);

	return 0;
}
int ch_6()//회문 판별과 엔 그램 만들기
{
	char word[30];
	int length;
	bool isPalindrome = true;

	printf("단어를 입력하세요:");
	scanf("%s" , word);

	length = strlen(word);

	for (int i = 0 ; i < length / 2; i++) //마지막에는 세미 콜론을 붙이지 않는다.
	{
		if (word[i] != word[length - 1 - i])
		{
			isPalindrome = false;
			break;
		}
	}
	
	
	
	printf("hello");
	printf("%d\n", isPalindrome);


	return 0;
}
int ch_7()
{
	//연속된 요소를 추출하는 방법
	char text[30] = "Hello";
	int length;

	length = strlen(text);

	for (int i = 0; i < length - 1; i++)
	{
		printf("%c%c\n", text[i], text[i + 1]);

	}
	return 0;
}
//반 했다..
//구조체 사용하기 변수 한두개로는 처리하기가 힘든 상황이 많다.
//이름 나이 정보

int ch_8()
{
	struct Person p1;

	strcpy(p1.name, "홍길동");
	p1.age = 30;
	strcpy(p1.address, "서울시 용산구");

	printf("이름: %s\n", p1.name);
	printf("나이: %d\n", p1.age);
	printf("주소: %s\n", p1.address);

	return 0;
}//일반 변수로 선언한 구조체의 멤버에 접근할때는 점을 사용한다.
//전역변수로 사용할수 있다
//typedef로 struct키워드 없이 구조체를 선언할 수 있다,
//별칭을 지정하면 된다.
//typedef는 자료형의 별칭을 만드는 기능이다.
//따라서 모든 자료형의 별칭을 선언할 수 있다.
//익명 구조체 사용하기
int ch_9()
{

	pp * p1 = malloc(sizeof(struct Person));

	strcpy(p1->name, "홍길동");
	p1->age = 30;
	strcpy(p1->address, "서울시 용산구");

	printf("이름: %s\n", p1->name);//구조체 포인터에 접근할때는 점을 사용하면 안된다..
	//화살표연산자 라고 부른다.
	printf("나이: %d\n", p1->age);
	printf("주소: %s\n", p1->address);

	free(p1);

	return 0;
}
//보통 구조체의 크기는 큰편이다. 포인터에 메모리ㄴ를 할당해서 사용하는 편이 효율적이다.
int ch_10()
{
	int num1 = 10;
	struct Data d1;
	struct Data* d2 = malloc(sizeof(struct Data));

	d1.numPtr = &num1;
	d2->numPtr = &num1;

	printf("%d\n", *d1.numPtr);
	printf("%d\n", *d2->numPtr);

	d2->c1 = 'a';
	printf("%c\n", (*d2).c1);

	printf("%d\n", *(*d2).numPtr);
	return 0;
}
//구조체 별칭으로 포인터를 선언하고 메모리 할당하기
int ch_11()
{
	Person* p1 = malloc(sizeof(Person));

	strcpy(p1->name, "홍길동");
	p1->age = 30;
	strcpy(p1->address, "서울 용산구");

	printf("이름: %s\n", p1->name);
	printf("나이: %d\n", p1->age);
	printf("주소: %s\n", p1->address);


	//구조체 별칭 포인터 이름 = mallocsizeof 구조체 별칭
	return 0;
}
//구조체 포인터에 구조체 변수의 주소 할당하기
//동적 메모리를 할당하지 않고 구조체 포인터를 사용하는 방벙 = 구조체 변소에 주소 연산자를 사용하면 된다.
int ch_12()
{
	struct Person p1;
	struct Person* ptr;

	ptr = &p1;

	ptr->age = 30;
	printf("나이:%d\n", p1.age);
	printf("나이:%d\n", ptr->age);

	return 0;
}
int ch_13()//두점 사이의 거리 구하기(구조체를 활용하여 2차원 평면에서 위치를 표형)
{
	struct Point2D p1;
	struct Point2D p2;

	p1.x = 30;
	p1.y = 20;

	p2.x = 60;
	p2.y = 50;

	printf("p1 : %d %d\n", p1.x, p1.y);
	printf("p2 : %d %d\n", p2.x, p2.y);

	int a = p2.x - p1.x;
	int b = p1.y - p2.y;

	double c = sqrt(pow(a,2) + pow(b,2));//pow를 사용해도된다
	//math.h에 적혀있는거
	printf("%f\n", c);
	

	//sqrt 제곱근 값을 반환하는 거 sqrt를 사용
	return 0;
}
//typedef를 이용하면 별칭을 사용할 수 있다.
//절댓값 함수도 존재한다.
//abs, fabs, fabsg함수를 사용하면 양수 또는 음수를 절댓값으로 만들수 있다.
int ch_14()
{
	//구조체 멤버 정렬 사용하기
	//이번에는 구조체가 메모리에 올라갔을때 멤버를 정렬하는 기능에 대해 아랑alignment
	return 0;
}
//구조체의 크기 알아보기
int ch_15()
{
	printf("            $$$$$$$$          \n");
	printf("          $$$--$$--$$         \n");
	printf("          $$$--$%$$@$         \n");
	printf("            $$$$&&&$            \n");
	printf("             $$$$$             \n");
	printf("         $$$$$$$$$$           \n");
	printf("        $$  $$$$$$ $$         \n");
	printf("        $$  $$$$$$   $$       \n");
	printf("        $$  $$  $$            \n");
	printf("            $$  $$            \n");
	printf("            $$  $$$           \n");
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	
	return 0;
}

int ch_16()
{
	struct packetheader header;
	printf("%d\n", sizeof(header.flags));
	printf("%d\n", sizeof(header.seq));
	printf("%d\n", sizeof(header));
	printf("%d\n", sizeof(struct packetheader));
	
	return 0;
}
//구조체는 가장큰 거의 바이트 단위로 계산한다,
//구조체 정렬 크기 조절하기
//졸라 많이 남았네
int ch_17()
{
	//ofsetoff로 상대적인 위치를 구할 수 있다.
	printf("%d\n", offsetof(struct packetheader, flags));
	printf("%d\n", offsetof(struct packetheader, seq));
	

	return 0;
}
int ch_18()//구조체 정렬 크기 조절하기
{
	struct packetheader header;

	printf("%d\n", sizeof(header. flags));
	printf("%d\n", sizeof(header.seq));
	printf("%d\n", sizeof(header));
	//pack을 1바이트 단위로 저장해서 빈 공간이 없게 만듬
	
	return 0;
}
//구조체와 메모리 활용하기
//메모리 관련 함수도 사용할수 있게 된다.
int ch_19()
{
	struct Point2D p1;
	memset(&p1, 0, sizeof(struct Point2D));//메모리 주소를 구해서 넣어준 후 설정할 값과 크기를 넣는다.
	printf("%d %d\n", p1.x, p1.y);

	return 0;
}
int ch_20()
{
	struct Point2D* p2 = malloc(sizeof(struct Point2D));

	memset(p2, 0, sizeof(struct Point2D));

	printf("%d %d\n", p2->x, p2->y);
	
	free(p2);

	return 0;
}
int ch_21()
{
	struct Point2D p1;
	struct Point2D p2;

	p1.x = 10;
	p1.y = 20;

	memcpy(&p2, &p1, sizeof(struct Point2D));
	//목적 포인터 원본포인터 크기를 지정한다
	printf("%d %d\n", p2.x, p2.y);

	return 0;
}
//동적 메모리 복사
int ch_22()
{
	struct Point2D* p1 = malloc(sizeof(struct Point2D));
	struct Point2D* p2 = malloc(sizeof(struct Point2D));
	
	p1->x = 10;
	p1->y = 20;
	memcpy(p2, p1, sizeof(struct Point2D));

	printf("%d %d\n", p2->x, p2->y);


	return 0;

}
//구조체 배열 사용하기
//구조체 배열 사용하기
int ch_23()
{
	struct Point2D p[3];

	p[0].x = 10;
	//등등
	//구조체 배열을 선언하는 동시에 초기화하기
	return 0;
}
//구조체 배열은 선언과 동시에 초기화하기
int ch_24()
{
	//이 형식을 사용하면 일일이 지정 안하고 해도 돼서 편한듯
	struct Point2D p1[3] = { {.x = 10, .y = 20}, {.x= 30, .y = 40}, {.x= 50, .y = 60} };

	printf("%d %d\n", p1[0].x, p1[0].y);

	return 0;

}
int ch_25()//요소마다 메모리 할당하기
{
	//구조체 포인터 배열 사용하기
	//구조체 멤버 정렬 효율을 높이기 위해 구조체를 일정한 크기로 정렬해준다
	//공용체는 구조체와 정의 방법이 같지만 멤버를 저장하는 방식이 다르다.
	//하지만 공용체는 모든 멤버가 공간을 공유한다.
	//공용체는 멤버중에서 가장 큰 자료형의 공간을 공유한다.
	//쓸일이 많지는 않다.
	union Box b1;

	printf("%d\n", sizeof(b1));

	strcpy(b1.doll, "bear");
	//공간을 공유하므로 하나씩 사용해야 한다.

	printf("%d\n", b1.candy);
	printf("%f\n", b1.snack);
	printf("%s\n", b1.doll);

	return 0;
}
int ch_26()
{
	union Data_1 d1;

	d1.num2= 0x12345678;

	printf("0x%x\n", d1.num2);
	printf("0x%x\n", d1.num1);
	printf("0x%x\n", d1.c1);

	printf("%d\n", sizeof(d1));
	//우리가 사용하는 x86은 엔디언 방식을 채용한다
	//따라서 리틀 엔디언은 숫자를 1바이트씩 쪼개서 낮은 자릿수가 앞에온다낮은 자릿수
	//typedef와 익명공동체 공용체도 구조체와 마찬가지로 로 별칭을 지정하고 
	//공용체 포인터를 선언하고 메모리 할당하기
	
	
	return 0;
}
int ch_27()//구조체와 공용체 활용하기
{
	return 0;
}
int ch_28()//리틀 엔디언
{
	return 0;
}
int ch_29()
{
	return 0;
}