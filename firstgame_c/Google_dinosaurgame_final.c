#include <stdio.h>
#include <time.h>//score 점수 받기 위해
#include <windows.h>//console함수
#include <conio.h>//getch
#include <stdlib.h>//exit
#include <stdbool.h>//truefalse
#include <string.h>
#include <time.h>//score함수

#pragma warning (disable:4996)

//기본 키 
//case함수로 이용하기 위해
#define submit_1 4
#define up_1 0
#define left_1 1
#define down_1 2
#define right_1 3

//Startview함수 자리잡을려고
#define start_x 15
#define start_y 9

//최대 점프 높이
#define jump_high 2

//dino 높이
#define dino_2_bottom_y 12

int OnGameKeyBoard();
void ConsoleBasic();//콘솔 크기 설정
void GotoXY(int i, int j);//커서이동 함수
int StartView();//시작화면 구현(메뉴 만들기)
int KeyBoard();//상하좌우 받아옴
int StartView_1();//시작화면 화살표 움직임 구현
int GameInformation();
//주인공
void dino_1();
void dino_2();
void dino_3();
int GameView();//게임 화면
void floor();//바닥함수(잘못 만든듯)(다음엔 바닥 없이 만들자)
void obstacle_1();//장애물 함수
void obstacle_2();//시간 나면 만들자
void clear();//커서 숨기는 함수(너무 반짝임)
void gameover();//죽었을때 창

int main()
{
	//기본설정
	clear();
	ConsoleBasic();
	
	int n = StartView();//15 17 19로 이루어진 메뉴값을 받아옴

	int k;


	switch (n)//메뉴 분배
	{
	case 15://게임시작
		GameView();
		break;
	case 17://게임정보
		k = GameInformation();
		if (k != 0);
		main();
		break;
	case 19://게임 종료
		system("cls");
		exit(0);//stdliv에 정의 되어 있음

	}
	return 0;
}

void ConsoleBasic()
{
	system("mode con cols=120 lines=30");//60,30
	//공백 넣었더니 오류생김 
	//가로는 60, 세로는 30(가로 2칸이랑 세로 한칸이 같아서 맞춰줌)
	//가로의 2배가 세로 한칸 크기이다.
	//왼쪽 위가 0,0 이다.
	system("title dinosaur game by jin");
	//게임 이름
}

void GotoXY(int i, int j)//커서 이동함수
{
	COORD Pos;
	Pos.X = 2*i;//대문자로 쓰기(pos뒤에)
	//칸수 맞추기 위해 2 곱함
	Pos.Y = j;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

//시작화면
int StartView()
{
	GotoXY(start_x, start_y);
	printf("$$$$$$$$$$                                     $$$$$$$$$$$$$\n");
	GotoXY(start_x, start_y+1);
	printf("$$                                                        $$\n");
	GotoXY(start_x, start_y+2);
	printf("$$                google dinosaur homage game             $$\n");
	GotoXY(start_x, start_y+3);
	printf("$$                                                        $$\n");
	GotoXY(start_x, start_y+4);
	printf("$$                                                        $$\n");
	GotoXY(start_x, start_y+5);
	printf("$$$$$$$$$$                                     $$$$$$$$$$$$$\n");

	GotoXY(start_x+10, start_y + 6);
	printf("  >   게임시작");//화살표 상대적 위치 1(start_x + 11, 15)
	GotoXY(start_x+10, start_y + 8);
	printf("      게임정보");//화살표 상대적 위치 2
	GotoXY(start_x+10, start_y + 10);
	printf("      게임종료");//화살표 상대적 위치 3
	GotoXY(start_x+ 3, start_y + 14);
	printf("기본 조작법 = 상:w 하:s 엔터:스페이스바 점프 : z");
	//화살표 구현 움직임 구현
	
	//화살표의 상대적 위치를 받아온다.
	//처음이라 힘들었다..
	return StartView_1();

	
}
int GameView()
{
	system("cls");//초기화

	clock_t start = clock();//시작시간 저장
	clock_t end, cuur;// 현재시간이랑 끝나는 시간 변수 초기화
	
	int score = 0;//점수
	
	bool jumping = false;//첫번째 점
	bool on_bottom = true;//바닥에 있으면 참
	
	int hight_1 = dino_2_bottom_y;//변수로 만들려고씀(점프시킬려고)
	int ob = 60;//장애물 움직임 위해 만듬
	
	while (true)
	{
		floor(); //26 바닥값

		obstacle_1(ob);
		
		//점프함수
		if (on_bottom && OnGameKeyBoard() == 'z')
		{
			on_bottom = false;
			jumping = true;
		}
		if (jumping)
		{
			hight_1 -= jump_high;
		}
		else
		{
			hight_1 += jump_high;
		}
		if (hight_1 >= dino_2_bottom_y)
		{
			hight_1 = dino_2_bottom_y;
			on_bottom = true;
		}
		if (hight_1 <= 3)
		{
			jumping = false;
		}

		//장애물 움직임 처리
		ob-=2;
		if (ob == 2)//ob값 16
			ob = 60;

		if (ob <= 8 && hight_1 >= dino_2_bottom_y )//충돌 처리함수
		{
		
			gameover(score);//점수 받고 띄움
			//게임 오버창
			break;//안하면 오류남
			
		}
		
		//dino들 형태 변화 구현
		if (score <= 15)
		{
			dino_1(hight_1);
		}
		else if (score <= 30)
		{
			dino_2(hight_1);
		}
		else
		{
			dino_3(hight_1);
		}
		
		_sleep(40);//너무 빨라서
		GotoXY(20, 3);
		
		end = clock();//현재시간(?)받기
		score = (end - start) / CLOCKS_PER_SEC;//점수 1초당 1점으로 계산
		system("cls");//잔상 방지
		printf("score : %d", score);//점수

		
		
		
	}
	//gameover창에서만 break 사용
	system("pause");
	system("cls");
	main();//시작화면으로 갈려고 재귀함수 사용

	return 0;
}


void gameover(int score)
{
	system("cls");//지움
	GotoXY(0, 0);
	printf("게임 끝\n");
	printf("my latest score = %d\n\n\n\n\n\n\n\n", score);//최종 점수 띄우기
		
}
int StartView_1()//메뉴 화살표 움직임 구현 및 y값 좌표로 분배 할려고 만듬
{
	int standard_y = 15;//기준값으로 사용
	
	while (1)
	{
		int n = KeyBoard();
		switch (n)
		{
		case up_1:
			if (standard_y > 15)//초깃값 15
			{
				GotoXY(start_x + 11, standard_y);
				printf("  ");//원래 있던거 지우기
				standard_y -= 2;//커서위치 
				GotoXY(start_x + 11, standard_y);
				printf(">");//화살표 생성
			}
			break;
		case down_1:
			if (standard_y < 19)
			{
				GotoXY(start_x + 11, standard_y);
				printf("  ");
				standard_y += 2;//커서 위치
				GotoXY(start_x + 11, standard_y);
				printf(">");
			}
			break;
		case submit_1:
			
			break;//스페이스바 누르면 break 후 return 으로 보내기
		}
		if (n == submit_1)
		{
			return standard_y;
			break;
		}

	}
}
int OnGameKeyBoard()
{
	if (_kbhit() != 0)//게임중에 사용하는 keyboard값 받는 함수
	{
		return _getch();
	}
	return 0;
}
void obstacle_1(int x)//장애물 함수
{
	GotoXY((x - 4), 22);
	printf(" $$$ \n");
	GotoXY((x - 4), 23);
	printf(" $$$ \n");
	GotoXY((x - 4), 24);
	printf(" $$$ \n");
	GotoXY((x - 4), 25);
	printf(" $$$ \n");

}
void clear()//커서 숨겨주는 함수(블로그에서 퍼옴)
{
	CONSOLE_CURSOR_INFO cursorInfo = { 0, };
	cursorInfo.dwSize = 1; 
	cursorInfo.bVisible = FALSE; 
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}
//메뉴 조작 할때 키보드값 받는 함수
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
	else
		return 0;
	
}

void floor()//바닥함수(반복문 사용함)
{
	GotoXY(0, 26);
	for (int i = 0; i < 120; i++)
	{
		printf("=");
	}
}

void dino_1(int y)//초기 주인공
//알임
{
	GotoXY(0, y);
	static bool dino_1 = true;
	printf("           \n");//다른 애들이랑 y값 맞출려고 이렇게함
	printf("           \n");
	printf("           \n");
	printf("           \n");
	printf("           \n");
	printf("           \n");
	printf("           \n");
	printf("           \n");
	printf("    &&&&   \n");
	printf("   &&&&&&  \n");
	printf("  && 알 && \n");
	printf("  &&&&&&&& \n");
	if (dino_1)//정적 변수로 움직임 표현
	{
		printf("   &&&&&&  \n");
		printf("   &&  &&    \n");
		dino_1 = false;
	}
	else
	{
		printf("   &&&&&&  \n");
		printf(" &&       &&\n");
		dino_1 = true;
	}

}

void dino_2(int dino_2_y)//2단계
//티라노 모델
{
	static bool dino_2_leg = true;
	GotoXY(0, dino_2_y);
	printf("            &&&&&&&&     \n");
	printf("           &&&  &&&&&&   \n");
	printf("          &&&&&&&&       \n");
	printf("          &&&&&&&&&&&&   \n");
	printf("          &&&&&&&        \n");
	printf("&        &&&&&&&         \n");
	printf("&&     &&&&&&&&          \n");
	printf("&&&   &&&&&&&&&&&&&      \n");
	printf(" &&&&&&&&&&&&&&          \n");
	printf("  &&&&&&&&&&&&          \n");
	printf("   &&&&&&&&&&&          \n");
	printf("    &&&&&&&&            \n");

	if (dino_2_leg)//정적변수 사용해서 움직임 표현
	{
		printf("    $       $           \n");
		printf("  $          $         \n");
		dino_2_leg = false;
	}
	else
	{
		printf("     $     $            \n");
		printf("      $    $         \n");
		dino_2_leg = true;
	}

}
void dino_3(int y)//사람 이름표도 만듬!!
{
	GotoXY(0, y);
	static int p = 0;//최종단계라 공들임
	printf("    &&&&            \n");
	printf("    &&&&           \n");
	printf("    &&&&&          \n");
	printf("     &&            \n");
	printf("     &&&&&         \n");
	printf("     &사람&&&      \n");
	printf("     &&&&  &&&&    \n");
	printf("     &&&&          \n");
	printf("     &&&&          \n");
	
	if (p == 0)//다리 움직임 표현
	{
		printf("     &&&&&         \n");
		printf("   &&     &&&      \n");
		printf("  &&         &&    \n");
		printf(" &&          &&&   \n");
		printf("&&&&           &&&&\n");
		p = 1;
	}
	else if (p == 1)
	{
		printf("     &&&&&         \n");
		printf("    &&   &&&       \n");
		printf("    &&     &&      \n");
		printf("    &       &&     \n");
		printf("   &&       &&     \n");
		p = 2;
	}
	else 
	{
		printf("     &&&&         \n");
		printf("     &&&&      \n");
		printf("     &&&&      \n");
		printf("     &&&&      \n");
		printf("     &&&&      \n");
		p = 0;
	}
}


int GameInformation()//게임 정보창
{
	system("cls");
	GotoXY(start_x, start_y);
	printf("점프를 하면서 장애물을 피해 인간이 되어가는 게임이다.\n");
	GotoXY(start_x, start_y + 1);
	printf("\n");
	GotoXY(start_x, start_y + 2);
	printf("15초, 30초에 진화를 한다.\n");
	GotoXY(start_x, start_y + 3);
	printf("\n");
	GotoXY(start_x, start_y + 4);
	printf("메인 화면으로 갈려면 아무 버튼이나 눌러라\n");

	 
	int n = KeyBoard();//다음화면 나오게 할려고 return 값 억지로 넣음

	return n;
}

