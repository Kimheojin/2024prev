import java.util.Scanner;

public class al_10871 {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int S = sc.nextInt();

        sc.nextLine();

        int[] array = new int[N];
        for(int i = 0; i < N; i++){
            array[i] = sc.nextInt();
        }

        sc.close();

        for(int i = 0; i< N; i++){
            if(array[i] < S){
                System.out.printf("%d", array[i]);
            }
        }
    }
}
