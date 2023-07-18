import java.util.Scanner;

public class al_8393 {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int count = 0;


        sc.close();

        for(int i = 0; i < N; i++){
            count += i;
        }

        System.out.println(count);
    }
    
}
