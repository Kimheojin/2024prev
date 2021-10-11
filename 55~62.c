#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:4996)
struct vector3 {
	union {
		struct {
			float x;
			float y;
			float z;

		};
		float v[3];

	};
};
struct flags {
	unsigned int a : 1;//비트크기를 지정한 것
	unsigned int b : 3;//비트필드 에는 지정한 비트수 만큼 저장되며 나머지 비트는 버려진다.
	unsigned int c : 7;
	unsigned int v : 3;
	unsigned int f : 32;//패딩 하므로 
};
struct flag {
	union {
		struct {
			unsigned short a : 3;
			unsigned short b : 2;
			unsigned short c : 7;
			unsigned short d : 4;

		};
		unsigned short e;
	};
};
enum dayofweek {
	sunday = 0,
	monday,//자동으로 증가한다.1
	tuesday, //2
	wednesday,//3
	thursday, //4
	friday,//5
	saturday
};
enum luxskil {
	lightbinding = 1,//열거형은 항상 콤마 사용하기
	prismaticbarrier,
	lucensingularity,
	finalspark,
};
struct data {
	int num2;
	int num1;
};
struct data_1 {
	int num1;
	char c1;
};
struct person {
	char name[20];
	int age;
	char address[100];
};
int main()
{
	ch_26();
	ch_27();
	ch_28();

	return 0;
}
int ch_1()
{//익명 구조체와 익명 공용체 활용하기
	struct vector3 pos;

	for (int i = 0; i < 3; i++)
	{
		pos.v[i] = 1.0f;

	}

	printf("%f %f %f\n", pos.x, pos.y, pos.z);
	
	return 0;


}
int ch_2()
{//구조체 비트필드 사용하기
	struct flags f1;

	f1.a = 1;
	f1.b = 15;
	f1.c = 255;

	printf("%u\n", f1.a);
	printf("%u\n", f1.b);
	printf("%u\n", f1.c);

	return 0;
}
int ch_3()
{
	printf("%d\n", sizeof(struct flags));
	printf("%d\n", sizeof(int));

	return 0;
}
int ch_4()
{
	struct flag f1 = { 0, };

	f1.a = 4;

	//비트 필드와 공용체를 함께 사용하기
	return 0;
}
int ch_5()
{
	enum dayofweek week;

	week = tuesday;

	printf("%d\n", week);

	//열거형 사용하기
	//열거형은 정수형 상수에 이름을 붙여서 코드를 이해하기 쉽게 해준다.
	return 0;
}
int ch_6()
{//열거형은 swithch 분기문을 사용할 때 유용하다.
	enum luxskill skill;

	skill = lightbinding;

	switch (skill)
	{
	case lightbinding:
		printf("lightbinding\n");
	}
	return 0;
}
int ch_7()
{//자료형 변환하기
	//c언어 에서는 자로형이 같거나 크기가 큰쪽, 자동 변환된다.(암시적 형 변환)
	//명시적 형 변환을 괄호를 사용하여 나타낸다.
	//(자료형)변수, (자료형)값

	int num1 = 32;
	int num2 = 7;
	float num3;

	num3 = (float)num1 / num2;
	
	printf("%f\n", num3);


	return 0;
}
int ch_8()
{//포인터 변환하기
	//포인터 끼리 변환하는 방법
	
	int* numptr = malloc(sizeof(int));//4바이트
	char* chptr;//1바이트

	*numptr = 0x12345678;

	chptr = (char*)numptr;//int 포인터 numptr 을 char 포인터로 변환
	//메모리 주소만 저장됨

	printf("0x%x\n", *chptr);

	free(numptr);

	return 0;
}
int ch_9()
{
	short* numptr1 = malloc(sizeof(short));
	int* numptr2;

	*numptr1 = 0x1234;

	numptr2 = (int*)numptr1;

	printf("0x%x\n", *numptr2);

	free(numptr1);
	
	return 0;
}
int ch_10()
{//포인터 변환과 컴파일 경고
	int* numptr = malloc(sizeof(int));

	char* cptr;

	*numptr = 0x12345678;

	printf("ox%x\n", *(char*)numptr);

	free(numptr);

	return 0;
}
int ch_11()
{
	int num1 = 10;
	float num2 = 3.5f;
	char c1 = 'a';
	void* ptr;

	ptr = &num1;

	printf("%d\n", *(int*)ptr);

	ptr = &num2;

	printf("%f\n", *(float*)ptr);

	ptr = &c1;

	printf("%c\n", *(char*)ptr);


	return 0;
}
int ch_12()
{//data char int 들어있는거
	//구조체 포인터 변환하기
	struct data_1* d1 = malloc(sizeof(struct data_1));
	void* ptr;
	d1->c1 = 'a';
	d1->num1 = 10;

	ptr = d1;

	printf("%c\n", ((struct data_1*)ptr)->c1);//void포이너라 변환해주기

	printf("%d\n", ((struct data_1*)ptr)->num1);

	free(d1);


	return 0;
}
int ch_13()
{
	//포인터 연산 사용하기
	//forward 순방향으로 이동
	int numarr[5] = { 11, 22, 33, 44,55 };
	int* numptra;
	int* numptrb;
	int* numptrc;

	numptra = numarr;

	numptrb = numptra + 1;//곱하거나 나누는 것은 의미가 없음
	//더하기는 포인터의 크기만큼 더하거나 뺀다.
	//즉 계산식는 sizeof(자료형)akszma ejgkrjsk Qosms rkq
	numptrc = numptrb + 1;

	printf("%p\n", numptra);
	printf("%p\n", numptrb);
	printf("%p\n", numptrc);

	return 0;
}
int ch_14()
{
	int numarr[5] = { 11, 22, 33, 44, 55 };
	int* numptra;
	int* numptrb;
	int* numptrc;

	numptra = &numarr[2];

	numptrb = numptra - 1;
	numptrc = numptra - 2;

	printf("%d\n", numptra);
	printf("%d\n", numptrb);
	printf("%d\n", numptrc);


	return 0;
}
int ch_15()
{
	//void포인터로 연산하기
	void* ptr = malloc(100);

	printf("%p\n", ptr);
	printf("%p\n", (int*)ptr + 1);//int포인터로 변환 후 포인터 연산 사용
	printf("%p\n", (int*)ptr - 1);

	void* ptr2 = ptr;

	printf("%p\n", ((int*)ptr2)++);
	printf("%p\n", ((int*)ptr2)--);

	free(ptr);


//void포인터로 연산하고 싶다면 다른 포인터로 변환한 뒤 연산을 하면 된다.
	return 0;
}
int ch_16()
{//구조체 포인터로 포인터 연산하기
	//괄호로 묶어준 뒤 화살표 연산자를 사용하여 멤버에 접근하면 된다.
	struct data d[3] = { {10,20}, {30,40}, {50,60} };
	struct data* ptr; //구조체 포인터 선언

	ptr = d;

	printf("%d %d\n", (ptr + 1)->num1, (ptr + 1)->num2);

	printf("%d %d\n", (ptr + 2)->num1, (ptr + 2)->num2);

	return 0;
}
void hello()//반환값이 없다는 뜻....
{
	printf("hello world\n");
}//위에쓸 경우 앞에서 정의를 해주어야 한다.
//정의가 없다면 링크 에러가 발생한다.
int ch_17()
{//함수 사용하기

	//c언어로 프로그래밍을 하다보면 들어가는 값만 바뀔 뿐 같은 코드가 계속 반복되는 경우가 많다.
	hello();//함수를 호출한다.

	return 0;
}
int one()
{
	return 1;

}
int ch_18()
{//함수에서 반환값 사용하기
	//정수, 식수, 불 반환값 사용하기
	int num1;

	num1 = one();

	printf("%d\n", num1);

	return 0;
}
float realnumber()
{
	return 1.234567f;
}
bool truth()
{
	return true;
}
int ch_19()
{
	float num1;
	bool b1;

	num1 = realnumber();
	b1 = truth();

	printf("%f\n", num1);
	printf("%d\n", b1);


	return 0;
}//()로 변환하는거 항상 기억하자
//포인터 변환하기
int* ten()
{
	int* numptr = malloc(sizeof(int));

	*numptr = 10;

	return numptr;
	
}
int ch_20()
{
	int* numptr;

	numptr = ten();

	printf("%d\n", *numptr);

	free(numptr);

	return 0;
}
char* helloliteral()
{
	char* s1 = "hello, world";

	return s1;
}
char *hellodynamicmemory()
{
	char* s1 = malloc(sizeof(char) * 20);

	strcpy(s1, "hello, world");


	return s1;
}
int ch_21()
{
	char* s1;
	char* s2;

	s1 = helloliteral();
	s2 = hellodynamicmemory();

	printf("%s\n", s1);
	printf("%s\n", s2);

	free(s2);

	return 0;
}
void* allocmemory()
{
	void* ptr = malloc(100);

	return ptr;

}
int ch_22()
{//#pragma warning(disable :4996)
	//포인터형 반환값에서 *dnlclsms?
	char* s1 = allocmemory();
	strcpy(s1, "hello, world");
	printf("%s\n", s1);
	free(s1);

	int* numptr1 = allocmemory();
	numptr1[0] = 10;
	numptr1[1] = 20;
	printf("%d %d\n", numptr1[0], numptr1[1]);
	free(numptr1);

	return 0;
}
struct person getperson()//person 구조체를 반활하는 getperson 함수
{
	struct person p;

	strcpy(p.name, "홍길동");
	p.age = 30;
	strcpy(p.address, "서울 동작구 흑석동");
	
	return p;
}
int ch_23()
{
	struct person p1;
	p1 = getperson();


	return 0;

}
void hellonumber(int num1)
{
	printf("hellos, %d\n", num1);
}
int ch_24()
{//함수에서 매개변수 사용하기
	hellonumber(10);
	hellonumber(20);

	return 0;
}
int add(int a, int b)
{
	return a + b;
}
int ch_25()
{//덧셈함수 만들기
	int num1;

	num1 = add(10, 20);

	printf("%d\n", num1);


	return 0;
}
//함수에서 포인터 매개변수 사용하기
void swapnumber(int first, int second)
{
	int temp;

	temp = first;
	first = second;
	second = temp;

}
int ch_26()
{
	int num1 = 10;
	int num2 = 20;
	swapnumber(num1, num2);
	printf("%d %d\n", num1, num2);


	return 0;

}
void swapnumber_1(int* first, int* second)
{
	int temp;

	temp = *first;//역참조 후 교환
	*first = *second;
	*second = temp;
}

int ch_27()
{
	int num1 = 10;
	int num2 = 20;

	swapnumber_1(&num1, &num2);

	printf("%d %d\n", num1, num2);


	return 0;
}
enum type {
	type_char, 
	type_int,
	type_float
};
int ch_28()//void포인터 매개변수 사용하기
{
	enum type pt;
	pt
	return 0;
}