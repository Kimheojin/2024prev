#include <stdio.h>
#include <windows.h>//console창 만들기
#include <conio.h>
#include <time.h>//time() 
#include <stdlib.h>//srand() 
#include <stdbool.h>//tru false
//21.10월 20일까지 만들기
//ㅎㅇㅌ 
//추후에 보스 추가하기
//이름 입력 받은 후 캐릭터 위에 추가 하기
#define dino_bottom_y 12
#define car_1_bottom_y 13
//콘솔창 크기지정 함수
//system 함수 이용하기
void SetConsoleView()
{
	system("mode con:cols=120 lines=30");//console 창 크기지정
	system("title Chrome game homage by 5muji");

}
//커서 위치 변경 함수
//콘솔창은 왼쪽 윗 부분이 (0,0)이다.
void GotoXY(int x, int y)
{
	COORD pos;
	pos.X= 2 * x;//콘솔 창에서 x 2칸이랑 y한칸이랑 동일하게 보이다.
	pos.Y= y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
//키보드 입력을 받고 반환하는 함수
void keyreward()
{
	if (_kbhit() != 0)
		return _getch();
	return 0;//else 사용하면 안되나
}

//시간 점수함수 만들기

//clock 함수 이용하기

//자동차그리는 함수
void crong(int dinoY)//출처 : https://blockdmask.tistory.com/344 (감사합니다.ㅠ)
//정적변수로 움직임 표현
{
    GotoXY(0, dinoY);
    static bool legFlag = true;//13칸 점프를 (총 
    printf("        $$$$$$$ \n");
    printf("       $$ $$$$$$\n");
    printf("       $$$$$$$$$\n");
    printf("$      $$$      \n");
    printf("$$     $$$$$$$  \n");
    printf("$$$   $$$$$     \n");
    printf(" $$  $$$$$$$$$$ \n");
    printf(" $$$$$$$$$$$    \n");
    printf("  $$$$$$$$$$    \n");
    printf("    $$$$$$$$    \n");
    printf("     $$$$$$     \n");
    if (legFlag)//정적 함수로 움직임 표현한거 같다.
    {
        printf("     $    $$$    \n");
        printf("     $$          \n");
        legFlag = false;
    }
    else
    {
        printf("     $$$  $     \n");
        printf("          $$    ");
        legFlag = true;
    }
}
void car_1()
{//자동차 그리기
    GotoXY(0, car_1_bottom_y);
    static bool tire_1 = true;
    printf("   %%%%%%%%%%%% \n");
    printf("   %%%%%%%%%%%%%%%\n");
    printf("    %%%%%%%%%%%%%%%%\n");
    printf("     %%%%%%%%%%%%%%%%\n");
    printf("       %%%%%%%%%%%%%%%%\n");
    printf("%%%%%%%%%%%%%%%%%%%%%%%%%\n");
    printf("%%%%%%%%%%%%%%%%%%%%%%%%%\n");
    printf("%%%%%%%%%%%%%%%%%%%%%%%%%\n");
    if (tire_1)
    {
        printf("    %%%          %%% \n");
        printf("   %   %        %   %\n");
        printf("    %%%          %%% \n");
        static tire_1 = false;
    }
    else
    {
        printf("\n");
        printf("\n");
        printf("\n");
        static tire_1 = true;
    }
}


//형태변화 포함하기(다음에)
//시간 지나면 모습 변하기
//히트박스 추가하기


//발사함수

//랜덤 장애물 5개 만들기
void obstacle_1(int tree_x)//공룡은 3까지 점프
{
    printf("");
    printf("");
    printf("");
    printf("");
    printf("");
    printf("");
    
}
//아이템

//라이프 함수

//미사일 충동함수 공룡 충돌 함수

//노래함수 포함시키기

//gameover 함

//메인함수
int main()
{
    SetConsoleView();//콘솔 창 함수

   

    while (true)//게임 한 판을 true로 ㅍ현
    {

    }

	return 0;
}
