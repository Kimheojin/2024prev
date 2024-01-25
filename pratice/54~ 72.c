#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
union data {
	char c1;
	short num1;
	int num2;
};
union box {
	short candy;
	float snack;
	char doll[8];
};
struct phone {
	int areacode;
	unsigned long long number;
};
struct person {
	char name[20];
	int age;
	struct phone p1;
};//구조체 안에 공용체가 들어가 있다.
int main()
{//공용체와 엔디언
	//공용체 멤버에 값을 저장하고 가져오는 방법을 좀
	ch_1();
	ch_2();
	ch_3();

	return 0;
}
int ch_1()
{
	union box* b1 = malloc(sizeof(union box));

	printf("%d\n", sizeof(union box));

	strcpy(b1->doll, "bear");

	printf("%d\n", b1->candy);
	printf("%d\n", b1->snack);
	printf("%s\n", b1->doll);

	free(b1);
	//tydef와 익명 공용체
	//공용체도 구조체와 마찬가지로 typedef로 별칭을 지정하고 익명공용체를 정의할 수 잇다.
	//typedef union 공용체 이름
	//공용체 포인터를 선언하고 메모리 할당하기
	return 0;
}
int ch_2()
{//공용체 별칭과 익명 공용체 포인터에 메모리 할당하기
	//구조체와 공용체 조합하는 방법
	//typedef 로 정의한 공용체 별칭으로도 포인터를 선언하고 메
	struct person po;

	po.p1.areacode = 82;
	po.p1.number = 3034567;

	printf("%d %llu\n", po.p1.areacode, po.p1.number);

	
	return 0;

}
int ch_3()
{
	union box {
		
	}

	return 0;
}