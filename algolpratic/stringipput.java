import java.util.Scanner;


public class stringipput {//입력값을 imput 이라고 한다
    //Stirng args = 변수 이름 배열 중괄호를 이끄는 메인

    //void는 출력 값이 존재하지 않는다
    public static void main(String[] args){//호출 string은 맨 처음에 입력했을 때만

        Scanner sc = new Scanner(System.in);//오른쪽 괄호가 먼저 실행
        //사용자가 입력한 값 = System.in
        //scanner 이라는 객체를 새로 만듬
        //파일로 바뀔 수도 있음
        //sc를 이용해서 제어 할 수 있음
        //scanner 은 nextint 문자를 입력하면공백을 상ㅇ
        while(sc.hasNextInt()){
            System.out.println(sc.nextInt()*1000);
        }//문자열을 입력하면 종료하는 함수만들 수 있는듯
        sc.close();
        
    }
}
//입력한 값이 숫자면 true를 리턴 아니면 false를 입력한다

//에플리 케이션에 초점을 맞춤
