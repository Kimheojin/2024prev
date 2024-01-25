import java.util.Scanner;

public class al_10988 {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        String str = sc.nextLine();

        StringBuilder reversed = new StringBuilder(str).reverse();

        String result = reversed.toString();
        
        if(str.equals(result)){
            System.out.println(1);
        }
        else{
            System.out.println(0);
        }
    }
}
