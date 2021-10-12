#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable : 4996)
struct person {
	char name[20];
	int age;
	char address[100];
};//폭함 리터럴 사용하기(구조체 포인터)
int main()
{//enum 초기화 안하면 0으로 자동으로 된다..
	ch_15();
	ch_16();
	ch_17();
	return 0;
}
void hellostring(char* s1)
{
	printf("hello, %s\n", s1);
}
int ch_1()
{
	hellostring("world\n");

	return 0;
}
void hellostring_1(char* s1)
{
	printf("hello,%s\n", s1);
}
int ch_2()
{
	char s1[10] = "world!";

	hellostring(s1);

	return 0;
}
void printarray(int arr[], int count)
{
	for (int i = 0; i < count; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
}
int ch_3()
{//함수에서 배열 매개 변수
	int numarr[10] = { 1,2,3,32,5,6,7,8,9,10 };

	printarray(numarr, sizeof(numarr) / sizeof(int));

	return 0;
}
void setelement(int arr[])
{
	arr[2] = 300;
}
int ch_4()
{
	int numarr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	setelement(numarr);

	printf("%d\n", numarr[2]);
	return 0;
}
//대괄호 대신 매개변수를 포인터로 지정
void printarray_1(int* arr, int count)
{
	for (int i = 0; i < count; i++)
	{
		printf("%d", arr[i]);
	}

	printf("\n");
}
int ch_5()
{
	int numarr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	printarray(numarr, sizeof(numarr) / sizeof(int));
	
	return 0;
}//복합 리터럴 사용하기(배열)
void printperson(struct person p)
{
	printf("이름: %s\n", p.name);
	printf("나이: %d\n", p.age);
	printf("주소: %s\n", p.address);
}

int ch_6()
{//함수에서 구조체 매개변수 사용하기
	struct person p1;
	
	strcpy(p1.name, "홍길동");
	p1.age = 30;
	strcpy(p1.address, "서울 용산구");

	printperson(p1);
	return 0;
}
void setperson(struct person p)
{
	strcpy(p.name, "홍길동");
	p.age = 40;
	strcpy(p.address, "서울 서초구 반포동");
}//여기서 아무리 바꿔도 영향을 미치지 않는다.
int ch_7()
{
	struct person p1;

	return 0;
}
void setperson_2(struct person* p)
{
	strcpy(p->name, "고길동");
	p->age = 40;
	strcpy(p->address, "서울시 서초구 반포동");
}
int ch_8()
{
	struct person p1;

	strcpy(p1.name, "홍길동");
	p1.age = 30;
	strcpy(p1.address, "서울시 서초구 반포동");

	setperson_2(&p1);

	printf("이름");
	return 0;
}//922페이지
void printnumbers_1(int args, ...)//가변 인자 사용
{
	printf("%d\n", args);
}
int ch_9()
{//복합 리터럴 사용하기(구조체 포인터
	//함수에서 가변인자 사용하기
	//가변 인자를 사용할 일은 많지 않음
	printnumbers_1(1, 19);

	printnumbers_1(2, 10, 11);//처음에 오는 2는 매개변수 args에 들어가고 나머지 값들은 ... 부분에 들어간다.

	printnumbers_1(3, 5, 10, 23);//1,2,3 만 나옴

	

	return 0;

}
void printnumbers_2(int args, ...)//가변인자의 개수를 받음
{
	va_list ap;//가변인자 목록 포인터

	va_start(ap, args);//가변 인자 목록 포인터 설정
	for (int i = 0; i < args; i++)//가변 인자 수만큼 반복
	{
		int num = va_arg(ap, int);//int 크기만큼 가변인자 목록 포인터에서 값을 가져온다
		//ap를 int 크기만큼 순방향으로 이동

		printf("%d", num);
	}
	va_end(ap);//가변인자 목록 포인터를 null로 초기화

	printf("\n");
}
int ch_10()
{
	//va_list 가변 인자 목록 ㅂ가변 인자의메모리 주소를 저장하는 포인터 이다
	//va_strt 가변인자를 가져올 수 있도록 포인터를 설정한다.
	//ㅍㅁ_ㅁㄱㅎ rkqus dlswk vhdlsxjdptj xmrwjd wkfygud zmrlakszma rkqtdmf가져온다
	//va_end 가변인자 처리가 끝났을 떄 포인터를 null로 초기화 한다......

	printnumbers_2(1, 10);//stdarg는 매크로를 포함한 함수이다/
	printnumbers_2(2, 19, 29);
	return 0;
}
void printvalues_1(char* types, ...)
{
	va_list ap;//가변인자 포인터 설정
	int i = 0;

	va_start(ap, types);//types문자열에서 문자 개수를 구해서 가변 인자 포인터 설정
	while (types[i] != '\0')//가변 인자 자료형이 없을때 까지 반복
	{
		switch (types[i])
		{
		case 'i':
			printf("%d", va_arg(ap, int));
		case 'd':
			printf("%");
		}
	}
}
int ch_11()
{//자로형이 다른 가변 인자 함수 만들기
	//각 각 자료형이 다르다면 swithc를 사용하면 된다.
	//정수 ㅑ
	return 0;
}
void hello_jin(int count)
{
	if (count == 0)
		return;

	printf("hello , world %d\n", count);

	hello_jin(--count);
}//재귀호출로 팩토리얼 구하기
int ch_12()
{//함수에서 재귀호출 사용하기
	//함수 자기 자신을 호출하는 방식을 재귀호출 이라고 한다.
	hello_jin(8);
	
	//알고리즘을 구현할 때 매우 융용하다.
	return 0;
}
int factorial(int n)
{
	if (n == 1)//n이 1이면 그냥 1 호출
		return 1;
	return n * factorial(n - 1);
}
int ch_13()
{
	printf("%d", factorial(5));
	return 0;
}
void hello_0()
{
	printf("hello, world\n");
}
int ch_14()
{//함수 포인터 사용하기
	//함수를 배열 도는 구조체에 넣거나 함수 자체를 함수의 매개변수로 넘겨주고 반환값으로 가져올수 있을까?
	printf("%p\n", hello_0);//함수 이름도 포인터 이므로
	return 0;
}
void kello()
{
	printf("bonjour le monde!\n");
}
int ch_15()
{
	void(*fp)();//반환값과 매개변수가 없는 함수 포인터 fp선언

	fp = hello_0;
	fp();
	//함수 포인터를 선언할 때는 함수 포인터와 저장될 함수의 반환값 자료형, 매개면수 자로형의 개수가 일치해야 한다.
	//그냥 똑같이 만들어서 선언해야 한다...
	fp = kello;
	fp();

	//함수 포인터 말들기
	//함수 포인터는 먼저 함수의 변환값 자료형을 지정해 주고함수 포인터 이름 앞에 asterlisk 를 붙인 뒤 괄호로 묶어준다.
	return 0;
}
int add_12(int a, int b)
{
	return a + b;
}
int mul(int a, int b)
{
	return a * b;
}
int ch_16()
{//반환값과 매개면수가 있는 함수 포인터 만들기
	int (*fp)(int, int);

	fp = add_12;
	printf("%d\n", fp(10, 20));

	fp = mul;
	printf("%d\n", fp(10, 20));


	return 0;
}
int add_000(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;

}
int mul(int a, int b)
{
	return a * b;

}
int div(int a, int b)
{
	return a / b;
}
int ch_17()
{//함수 포인터 활용하기
	//함수 번호와 계산할 값을 입력받은 뒤 함수 포인터로 계산
	int funcnumber;//함수번호
	int num1, num2;
	int (*fp)(int, int) = NULL;//int형 반환값, int 형 매개변수 두 개가 있는 함수 포인터 선언

	printf("함수 번호와 계산할 값을 구해라 ");
	scanf_s("%d %d %d", &funcnumber, &num1, &num2);
	
	switch (funcnumber)
	{
	case 0:
		fp = add_000;
		break;
	case 1:
		fp = sub;
		break;
	case 2:
		fp = mul;
		break;
	case 3:
		fp = div;
		break;
	}
	printf("%d\n", fp(num1, num2));

	return 0;
}
int ch_18()
{//함수를 포인터 배열로 만들어서 하는게 더 편할 수도 있다.
	int funcnumber;
	int num1, num2;
	int (*fp[4])(int, int);//int형 반환값, int 형 매개변수 2개가 있는 함수 포인터 배열 선언

	fp[0] = add_000;
	fp[1] = sub;
	fp[2] = mul;
	fp[3] = div;

	printf("함수 번호와 계산할 값을 입력하세요");
	scanf_s("%d %d %d", &funcnumber, &num1, num2);

	return 0;
}