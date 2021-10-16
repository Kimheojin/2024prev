#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
//기본 키 정의
#define submit_1 4
#define up_1 0
#define left_1 1
#define down_1 2
#define right_1 3

#define start_x 15
#define start_y 9

#define _CRT_SECURE_NO_WARNINGS

void ConsoleBasic();//콘솔 크기 설정
void GotoXY(int i, int j);//커서이동 함수
void StartView();//시작화면 구현(메뉴 만들기)
int KeyBoard();//상하좌우 받아옴
int StartView_1();//시작화면 화살표 움직임 구현

int main()
{
	ConsoleBasic();
	
	StartView();

	//글자 시험
	
	
	
	return 0;
}
void ConsoleBasic()
{
	system("mode con cols=120 lines=30");//75,25
	//공백 함부로 넣지 말자..
	//가로는 100, 세로는 25
	//가로의 2배가 세로 한칸 크기이다.
	//왼쪽 위가 0,0 이다.
	system("title dinosaur game by jin");
	//게임 이름
}

void GotoXY(int i, int j)
{
	COORD Pos;
	Pos.X = 2*i;//대문자로 쓰기
	//칸수 맞추기 위해 2 곱함
	Pos.Y = j;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
//게임 창은 무한으로 돌린다음 값을 기다리는 것
void StartView()
{
	GotoXY(start_x, start_y);
	printf("$$$$$$$$$$                                     $$$$$$$$$$$$$\n");
	GotoXY(start_x, start_y+1);
	printf("$$                                                        $$\n");
	GotoXY(start_x, start_y+2);
	printf("$$                                                        $$\n");
	GotoXY(start_x, start_y+3);
	printf("$$                                                        $$\n");
	GotoXY(start_x, start_y+4);
	printf("$$                                                        $$\n");
	GotoXY(start_x, start_y+5);
	printf("$$$$$$$$$$                                     $$$$$$$$$$$$$\n");

	GotoXY(start_x+10, start_y + 6);
	printf("      게임시작");//화살표 상대적 위치 0(start_x + 11, 15)
	GotoXY(start_x+10, start_y + 8);
	printf("      게임정보");//화살표 상대적 위치 1
	GotoXY(start_x+10, start_y + 10);
	printf("      게임종료");//화살표 상대적 위치 2
	GotoXY(start_x+ 3, start_y + 14);
	printf("기본 조작법 = 상:w 하:s 좌:a 우:d 엔터:스페이스바");
	//화살표 구현 움직임 구현
	
	StartView_1();
	
	int u = StartView_1();//화살표의 상대적 위치를 받아온다.




}
int StartView_1()
{
	int standard_y = 15;
	GotoXY(start_x + 11, standard_y);
	printf(">");
	int n = KeyBoard();
	switch (n)
	{
	case up_1:
		if(standard_y )

	case down_1:
	case submit_1:
		return 

	}
}


//wasd로 조작
int KeyBoard()
{
	char temp = _getch();
	if (temp == 'w' || temp == 'W')
	{
		return up_1;
	}
	else if (temp == 'a' || temp == 'A')
	{
		return left_1;
	}
	else if (temp == 's' || temp == 'S')
	{
		return down_1;
	}
	else if (temp == 'd' || temp == 'D')
	{
		return right_1;
	}
	else if (temp == ' ')
	{
		return submit_1;
	}
	return 0;
}

