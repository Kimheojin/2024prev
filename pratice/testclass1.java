package project_1;

import java.util.*;

public class testclass1 {
	public static void main (String[] args) {
		System.out.println("Hello,world");
		//����
		int year = 0;
		int age = 14;
		System.out.println(year);
		System.out.println(age);
		
		year = age + 2000;
		age = age + 1;
		
		System.out.println(year);
		System.out.println(age);
		
	 
		//�� ������ �� ��ȯ�ϱ�
		int x = 10, y = 20;
		int tmp = 0;
		
		System.out.println("x:"+ x + "y:"+ y);
		
		tmp = x;
		x = y;
		y = tmp;
		
		System.out.println("x:"+ x + "y: "+ y);
		//������ ��� ��Ģ
		//��ҹ��ڰ� ���еǸ� ���̿� ������ ����.
		//������ ����ϸ� �ȵȴ�.
		//���ڷ� �����ؼ��� �� �ȴ�.
		//�⺻���� ������
		//�츮�� �ַ� ����ϴ� �� ���ڿ� ���ڷ� ���� �� �ִ�.
		//����
		//������
		//double �� float�� �ι�ũ��(8����Ʈ)
		//������� final�� �տ� �ٿ��ָ� �ȴ�.
		//����� �ݵ�� ����� ���ÿ� �ʱ�ȭ�� �ؾ��Ѵ�.
		//�����ڸ� �־ ū ���ڸ� ���� ���� �� �ְ� �Ѵ�.
		//��������� ���� ���� �����ϴ� ���� ����Ѵ�.
		//���� ���ڿ��� ����Ϸ��� string Ÿ���� ����ؾ� �Ѵ�.
		//���� ���ͷ��� �ȿ� �ƹ��� ���ڵ� ���� �ʴ°��� ������� �ʴ´�.
		
		
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
		
		System.out.print("���ڸ� ������ �ϳ� �Է��� �ּ���.>");
		String input = scanner.nextLine();
		int num = Integer.parseInt(input);
		
		System.out.println("�Է³���:"+input);
		System.out.printf("num= %d%n", num);
		
		
	}
//10������ 2����
	
	//���ڸ��� 2������ ��Ʈ ��� �ϸ�
//�ּ� ���̴� ���� c���� ������ ����.
	//������, �� �ϳ��� ���� ������ �� �ִ� �޸� ����
}
