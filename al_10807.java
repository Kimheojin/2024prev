import java.util.Scanner;

public class al_10807{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();

        int[] i_array = new int[N];

        sc.nextLine();

        for(int i = 0; i < N; i++){
            i_array[i] = sc.nextInt();
        }
        
        sc.nextLine();

        int solves = sc.nextInt();

        sc.close();

        int count = 0;

        for(int i = 0; i < N; i++){
            if(i_array[i] == solves){
                count++;
            }
        }

        System.out.println(count);


        
    }
}