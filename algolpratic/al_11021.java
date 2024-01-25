import java.util.Scanner;

public class al_11021 {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();

        int[] array = new int[N];

        sc.nextLine();

        for(int i = 0; i < N;i++){
            array[i] = sc.nextInt();
            array[i] = sc.nextInt() + array[i];
            
            sc.nextLine();
        }
        sc.close();
        for(int i = 0; i < N; i++){
            System.out.printf("Case #%d: %d\n",i+1,array[i]);
        }
    
}
}