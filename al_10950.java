import java.util.Scanner;

public class al_10950 {
    public static void main(String args[]){
        //a와 b를 입력받은 다음 a+ b를 출력하는 프로그램을 작성하시오
        Scanner sc = new Scanner(System.in);
        
        int N = sc.nextInt();

        sc.nextLine();
    
        //배열 한개에 그냥 더하는 식으로 하면 안되나?
        int[] arr = new int[N];

        for(int i = 0;i < N;i++){
            arr[i] = sc.nextInt();
            arr[i] = sc.nextInt() + arr[i];

            sc.nextLine();
        }

        sc.close();

       for(int i = 0;i < N;i++){
        System.out.println(arr[i]);
       }

        

    }
}
