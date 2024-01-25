import java.util.Scanner;

public class al_2753 {
    public static void main(String args[]){
        // 윤년이면 1, 아니면 0 출력
        // 4의 배수 + 100의 배수는 제외(but 400은 포함)
        Scanner sc = new Scanner(System.in);
        
        int year = sc.nextInt();

        sc.close();

        if((year%4) != 0){
            System.out.println(0);
        }
        else if((year % 100)==0 && (year % 400)!= 0){
            System.out.println(0);
        }
        else{
            System.out.println(1);
        }
    }
}
