import java.util.Scanner;

public class al_9498 {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int score = sc.nextInt();

        sc.close();
        if(90 <= score){
            System.out.println("A");
        }
        else if(80 <= score){
            System.out.println("B");
        }
        else if(70 <= score){
            System.out.println("C");
        }
        else if(60 <= score){
            System.out.println("D");
        }
        else
        {
            System.out.println("F");
        }

    }
    
}
