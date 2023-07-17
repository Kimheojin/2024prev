import java.util.Scanner;

public class al_2739 {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        
        int N = sc.nextInt();

        sc.close();

        int tmp;
        for(int i = 1; i < 10; i ++){
            tmp = i * N;
            System.out.println(N + " * " + i + " = " + tmp);
        }
        
    }
}
