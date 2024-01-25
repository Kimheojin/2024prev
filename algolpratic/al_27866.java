import java.util.Scanner;

public class al_27866 {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        
        String str = sc.nextLine();

        int n = sc.nextInt();

        sc.close();

        System.out.println(str.substring(n-1, n));

    }
}
