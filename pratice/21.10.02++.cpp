#include <iostream>
#define SQUARE(x) ((x)*(x))
int ch_print(void)//14p
{

	int num = 20;
	std::cout << "Hello world!" << std::endl;
	std::cout << "Hello " << "world!" << std::endl;
	std::cout << num << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;
	return 0;
	//std::cout 와 <<을 이용해서 출력하는듯
	//std::endl을 이용해서 줄바꿈 실행
	//iostream 이 더 최신버전인듯

}
int ch_scan(void)//17p
{
	int val1;
	std::cout << "첫번째 숫자 입력: ";
	std::cin >> val1;
	//데이터 입력에도 헤더파일 선언문 iostream 이 필요하다
	//키보드로부터의 데이터 입력에는 std::cin 과 >>연산자가 필요하다
	//변수의 선언은 어디서든 가능하다.
	int val2;
	std::cout << "두번째 숫자 입력: ";
	std::cin >> val2;
	//입력에서도 데이터 형식을 필요 없다.
	int result = val1 + val2;
	std::cout << "덧셉 결과:" << result << std::endl;
	//별도의 포맷 지정이 필요 없다,
	return 0;
}
int ch_if(void)//19p
{
	int val1,val2;
	int result = 0;
	std::cout << "두 개의 숫자입력:";
	std::cin >> val1 >> val2;//연속적인 데이터 입력 가능

	if (val1 < val2)
	{
		for (int i = val1 + 1; i < val2; i++)//문장 내 변수 선언 가능
			result += i;
	}
	else
	{
		for (int i = val2 + 1; i < val1; i++)
			result += i;
	}

	std::cout << "두 수 사이의 정수 합: " << result << std::endl;

	return 0;
}
int ch_jjj(void)//21p
{//배열 기반의 문자열 입출력
	char name[100];
	char lang[200];

	std::cout << "이름은 무엇입니까?";
	std::cin >> name;

	std::cout << "좋아하는 프로그래밍 언어는 무엇인가요?";
	std::cin >> lang;

	std:: cout << "내 이름은" << name << "입니다,\n";
	std::cout << "제일 좋아하는 언어는" << lang << "입니다." << std::endl;
	return 0;
}
void myfunc(void)
{
	std::cout << "myfunc(void) called" << std::endl;
}

void myfunc(char c)
{
	std::cout << "myfunc(char c) called" << std::endl;
}

void myfunc(int a, int b)
{
	std::cout << "myfunc(int a, int b) called" << std::endl;
}

int p_2525(void)
{//함수 오버로딩
	//c언어 에서는 다음과 같이 동일한 이름의 함수가 정의되는 것을 허용하지 않는다.
	//c++은 호출할 함수를 찾을때 함수의 이름, 매개변수의 선언을 동시에 본다.
	//c언어는 함수의 이름만을 사용해서 한다.
	//매개변수의 자료형 또는 개수가 다르면 함수의 오버로딩을 허용한다.
	//but 반환값이 다르다고 해서 그런것은 아니다.
	myfunc();
	myfunc('A');
	myfunc(12, 13);
	return 0;
}
//swap 을 생성하는 퀴즈
void swap(void* ptr1, void *ptr2)
{
	void* b;
	b = ptr1;
	ptr1 = ptr2;
}
int page_26(void)
{
	int num1 = 20, num2 = 30;
	swap(&num1, &num2);
	std::cout << num1 << ' ' << num2 << std::endl;

	char ch1 = 'A', ch2 = 'Z';
	swap(&ch1, &ch2);
	std::cout << ch1 << ' ' << ch2 << std::endl;

	return 0;
}
int adder(int num1 = 1, int num2 = 2)
{
	return num1 + num2;
}
int pg28()
{//매개변수의 디폴트 값 = 기본적으로 설정 되있는 값을 의미
	//함수 호출시 인자를 전달하지 않으면 7이 전달된 것으로 간주하겠다.
	std::cout << adder() << std:: endl;
	std::cout << adder(5) << std::endl;
	std::cout << adder(3, 5) << std::endl;//함수를 선언하는 부분에서 default값을 지정해 주어야 한다.
	//디폴트 값은 항상 
	// 가운데를 비우거나 해도 에러가 발생한다.
	// 항상 오른쪽부터 채워 넣어햐 한다
	//비워 놓으면 에러가 발생
	return 0;

}
int pg_33()
{//인라인 함수inline
	//의역하면 프로그램 코드라인 안으로 들어가 버린 함수 라는 뜻
	//매크로 함수를 사용하면 실행속도에서 이점이 있다.
	std::cout << SQUARE(5) << std::endl;//전처리 과정을 거치면
	//

	return 0;
}
inline int SQUARE_1(int x)
{
	return x * x;
}//매크로 함수는 데이터의 손실도 일어나지 않는다.
//템플릿이라는 것을 이용하면 되지만 나중에 다시 나온다.
int pg_36()
{
	std::cout << SQUARE_1(5) << std::endl;
	std::cout << SQUARE_1(12) << std::endl;
	return 0;
}

int main()
{
	//이름공간(name space) 소개
	//이름을 붙여놓은 공간
	//말그대로 특정 영역에 이름을 붙여주기 위한 문법적 요소
	return 0;

}