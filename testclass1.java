package project_1;

import java.util.*;

public class testclass1 {
	public static void main (String[] args) {
		System.out.println("Hello,world");
		//변수
		int year = 0;
		int age = 14;
		System.out.println(year);
		System.out.println(age);
		
		year = age + 2000;
		age = age + 1;
		
		System.out.println(year);
		System.out.println(age);
		
	 
		//두 변수의 값 교환하기
		int x = 10, y = 20;
		int tmp = 0;
		
		System.out.println("x:"+ x + "y:"+ y);
		
		tmp = x;
		x = y;
		y = tmp;
		
		System.out.println("x:"+ x + "y: "+ y);
		//변수의 명명 규칙
		//대소문자가 구분되며 길이에 제한이 없다.
		//예약어는 사용하면 안된다.
		//숫자로 시작해서는 안 된다.
		//기본형과 참조형
		//우리가 주로 사용하는 값 문자와 숫자로 나눌 수 있다.
		//논리형
		//문자형
		//double 은 float의 두배크기(8바이트)
		//상수에는 final을 앞에 붙여주면 된다.
		//상수는 반드시 선언과 동시에 초기화를 해야한다.
		//구분자를 넣어서 큰 숫자를 펺게 읽을 수 있게 한다.
		//저장범위가 넓은 곳에 저장하는 것은 허용한다.
		//여러 문자열을 사용하려면 string 타입을 사용해야 한다.
		//문자 리터럴은 안에 아무런 문자도 넣지 않는것을 허용하지 않는다.
		
		
		String name = "JA" + "va";
		String str = name + 8.0;
		
		System.out.println(name);
		System.out.println(str);
		System.out.println(7 + " ");
		System.out.println(" "+ 7);
		
		byte b = 1;
		short s =2;
		char c = 'a';
		
		int finger = 10;
		long bog = 100_000_000_000L; //long big = 100000000000000
		long hex = 0xFFFF_FFFF_FFFF_FFFFL;
		
		int octNum = 010;
		int hexNum = 0x10;
		int binNum = 0b10;
		
		
		Scanner scanner = new Scanner(System.in);
		
		System.out.print("두자리 정수를 하나 입력해 주세요.>");
		String input = scanner.nextLine();
		int num = Integer.parseInt(input);
		
		System.out.println("입력내용:"+input);
		System.out.printf("num= %d%n", num);
		
		
	}
//10진법과 2진법
	
	//한자리의 2진수를 비트 라고 하며
//주석 붙이는 법은 c언어랑 같은거 같다.
	//변수란, 단 하나의 값을 저장할 수 있는 메모리 공간
}
