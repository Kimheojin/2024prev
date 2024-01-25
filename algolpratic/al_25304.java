import java.util.Scanner;

public class al_25304 {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        //첫째줄에는 영수증에 적힌 총금액 X 가 주어진다
        int total_p = sc.nextInt();


        sc.nextLine();


        int N = sc.nextInt();

        sc.nextLine();

        int[] pay = new int[N];


        for(int i = 0; i < N; i++){
            pay[i] = sc.nextInt();
            pay[i] = sc.nextInt() * pay[i];

            sc.nextLine();
        }

        int count = 0;

         for(int i = 0; i < N; i++){
            count = count + pay[i];
         }
        sc.close();

        if(count == total_p){
            System.out.println("Yes");
        }
        else{
            System.out.println("No");
        }


    }
}
