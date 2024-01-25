import java.util.*;

public class al_10430 {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        int A = sc.nextInt();
        int B = sc.nextInt();
        int C = sc.nextInt();
        int n = (A+B)%C;

        sc.close();

        System.out.println(n);

        n = ((A%C) + (B%C))%C;
         System.out.println(n);

        n = (A*B)%C;
         System.out.println(n);

        n = ((A%C) * (B%C))%C;
         System.out.println(n);
    }
}
