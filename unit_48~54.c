#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stddef.h>//offsetof 함수를 포함하고 있다..
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#pragma pack(push, 1)  //1바이트로 정렬(데이터 전송이나 저장할때 사용)(효율적으로 사용하기 위해)
struct _packetheader {
	int seq;//1바이트
	char flags;//4바이트
};
#pragma(pop)
//구조체 필드
struct Person {
	char name[20];
	int age;
	char address[100];
};
typedef struct _person {
	char name[20];
	int age;
	char address[100];
}po;
struct Point2D {
	int x;
	int y;
};
struct Packetheader {
	char flags;
	int seq;

};
union Box {
	short candy;//2바2트 아마도
	float snack;//4바ㅣ트
	char doll[8];//문자열 8바이트
};
union data {
	char c1;
	short num1;
	int num2;

};

int main()
{
	//union 공용체이름{
	//자료형 이름
	ch_16();
	ch_17();
	ch_18();
	return 0;
}
int ch_1()
{//구조체 사용하기
	struct Person p1;

	strcpy(p1.name, "홍길동");
	p1.age = 30;
	strcpy(p1.address, "서울 용산구 후암동");

	printf("%s \n%d \n%s", p1.name, p1.age, p1.address);
	return 0;
}
int ch_2()
{//구조체 안에 들어있는 변수를 멤버라고 한다.
	//보통 메인함수 밖에 정의한다.
	//정의한 구조체를 사용하려면 구조체 변수를 선언해야 한다.
	//struct 구조체 이름{자료형 멤버이름}변수
	//선언하는 동시에 변수를 선언할 수 있다.
	//다른 형태
	struct Person p1 = { .name = "홍길동", .age = 30, .address = "서울시 용산구 한남동" };

	printf("%s \n%d \n%s", p1.name, p1.age, p1.address);

	struct Person p2 = { "고길동", 40, "서울시 서초구 반포동" };

	return 0;
}
int ch_3()
{//typedef로 struct 키워드 없이 구조체 선언하기
	po toil = { "홍익이", 24, "서울 마포구 와우동" };

	printf("%s \n%d \n%s", toil.name, toil.age, toil.address);
	return 0;
}
int ch_4()
//typedef 활용하기
//자료형의 별칭을 만드는 기능이다. 모든 자료형의 별칭을 만들 수 있다.
{//익명 구조체 사용하기
	//구조체 포인터 사용하기
	struct Person* p3 = malloc(sizeof(struct Person));

	strcpy(p3->name, "홍길동");
	p3->age = 30;
	strcpy(p3->address, "서울시 용산구 한남동");

	printf("%s \n%d \n%s", p3->name, p3->age, p3->address);
	//malloc 사용 해제 를 항상 기억하기
	//구조체 포인터에서 .으로 멤버에 접근하기
	return 0;
}
int ch_5()
{
	//구조체 별칭으로 포인터를 선언하고 메모리 할당하기
	//구조체별칭 *포인터 이름 =  malloc(sizeof(구조체 별칭));다음 내용을 소스코드 편집창에 입력하세요
	po* p1 = malloc(sizeof(po));

	strcpy(p1->name, "홍길동");
	p1->age = 30;
	strcpy(p1->address, "서울 용산구 한남동");

	free(p1);
	printf("%s \n%d \n%s", p1->name, p1->age, p1->address);
	return 0;
}
int ch_6()
{//구조체 포인터에 구조체 변수의 주소 할당하기
	struct Person p1;
	struct Person* ptr;

	ptr = &p1;

	ptr->age = 30;

	printf("나이: %d\n", p1.age);
	printf("나이: %d\n", ptr->age);

	return 0;
}
int ch_7()
{//두 점 사이의 거리 구하기
	struct Point2D p1;
	struct Point2D p2;

	p1.x = 30;
	p1.y = 20;

	p2.x = 60;
	p2.y = 50;

	int a = p2.x - p1.x;

	int b = p2.y - p1.y;

	double c = sqrt((a * a) + (b * b));

	double d = sqrt(pow(a, 2) + pow(b, 2));


	printf("%f\n", c);

	return 0;
}
int ch_8()
{//구조체 멤버 정렬 사용하기
	//멤버를 정렬 하는 기능에 대해 알아보겠습니다.
	//구조체 멤버 정렬 사용하기alignmentalignment하는 기능에 대해 알아보겟습니다.
	//내부적으로 시프트 연산이 발생해서 효율이 떨어진다.
	struct Packetheader header;

	printf("%d\n", sizeof(header.flags));
	printf("%d\n", sizeof(header.seq));
	printf("%d\n", sizeof(header));
	printf("%d\n", sizeof(struct Packetheader));
	//c언어에서는 구조체를 정렬할때 멤버 중에서 가장 큰 자료형의 크기의 배수로 정렬한다.
	//남는 공간을 패딩이라고 한다.
	//구조체에서 멤버의 위치를 구할 때는 offseof매크로를 사용한다.
	return 0;
}
int ch_9()
{//구조체의 위치를 구하는 함수 
	//stddef를 inlcuding 시켜서 한다.
	//패딩이 되었는지 위치 파악하는데 사용한다.
	//offsetof(struct 구조체, 멤버)
	//offsetof(구조체별칭, 멤버)
	//상대적인 위치 반출하는 것 같다.
	printf("%d\n", offsetof(struct Packetheader, flags));
	printf("%d\n", offsetof(struct Packetheader, seq));

	
	return 0;

}
int ch_10()
{//구조체 정렬 크기 조절하기
	//c언어에서는 구조체를 정렬하는 표준 방법이 없다.
	//각 컴파일러에서 제공하는 특별한 지시자를 사용하면 된다
	struct _packetheader header;

	printf("%d\n", sizeof(header.flags));
	printf("%d\n", sizeof(header.seq));
	printf("%d\n", sizeof(header));
	printf("%d\n ", sizeof(struct _packetheader));

	printf("%d\n", offsetof(struct _packetheader, flags));//4
	printf("%d\n", offsetof(struct _packetheader, seq));//0
														//상대적인 위치 표시
//먼적 적은거 부터 배열되나?


	return 0;
}
int ch_11()
{
	//메모리 관련 함수 ㄷ 사용할수 있게 된다.
	//구조체와 메모리에 값을 설정하는 방법과 구조체와 메모리의 내용을 복사하는 방법
	//malloc함수로 구조체를 만들면 0으로 초기화 하지 못한다.
	struct Point2D p1;

	memset(&p1, 0, sizeof(struct Point2D));
	//memset (구조체포인터, 설정할값, sizeof(struct 구조체))
	printf("%d %d\n", p1.x, p1.y);

	return 0;
}
int ch_12()
{
	struct Point2D* p1 = malloc(sizeof(struct Point2D));

	memset(p1, 0, sizeof(struct Point2D));

	printf("%d %d\n", p1->x, p1->y);

	return 0;
}
int ch_13()
{//구조체와 메모리 복사하기
	//매법 내용이 같은 구조체를 만들려면 번거롭다.
	//memcpy를 이용해서 복사할수 있다.
	struct Point2D p1;
	struct Point2D p2;

	p1.x = 10;
	p1.y = 20;

	memcpy(&p2, &p1, sizeof(struct Point2D));
	//목적포인터 먼저
	//목적포인터, 원본포인터, 크기

	printf("%d %d\n", p2.x, p2.y);

	return 0;
}
int ch_14()
{//구조체 배열 사용하기
	//struct 구조체 이름 변수이름[크기]
	struct Point2D p[3];

	p[0].x = 10;
	p[0].y = 20;
	p[1].x = 30;
	p[1].y = 40;
	p[2].x = 50;
	p[2].y = 60;

	printf("%d %d\n", p[0].x, p[0].y);
	printf("%d %d\n", p[1].x, p[1].y);
	printf("%d %d\n", p[2].x, p[2].y);

	//편하게 쓰고 시픙면 배열은 선언하는 동시에 초기화 하자
 

	return 0;
}

int ch_15()
{
	//구조체 포인터 배열 선언하기
	struct Point2D* p[3];
	//struct 구조체 이름*vhdlsxj dlfma[크기]
	for (int i = 0; i < sizeof(p) / sizeof(struct Point2D*); i++)
	{
		p[i] = malloc(sizeof(struct Point2D));
	}

	p[0]->x = 10;
	p[0]->y = 20;

	for (int i = 0; i < sizeof(p) / sizeof(struct Point2D*); i++)
	{
		free(p[i]);
	}
	
	return 0;
}
int ch_16()
{//공용체 사용하기
	//공용체는 구조체와 정의 방법이 같지만 멤버를 저장하는 방식이 다르다
	//구조체는 멤버들이 각각 공간을 차지하지만 공용체는 모든 멤버가 공간을 공유한다.
	union Box b1;

	printf("%d\n", sizeof(b1));

	strcpy(b1.doll, "bear");

	printf("%d\n", b1.candy);
	printf("%d\n", b1.snack);
	printf("%s\n", b1.doll);


	return 0;
}
int ch_17()
{
	//공용체와 에디언
	union data d1;
	d1.num2 = 0x12345678;

	printf("ox%x\n", d1.num2);
	printf("ox%x\n", d1.num1);
	printf("ox%x\n", d1.c1);

	printf("%d\n", sizeof(d1));


	return 0;

}
int ch_18()
{
	return 0;
}