import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class al_10811 {
    public static void main(String args[]) throws IOException {
        //도현이는 바구니를 N 개 가지고 있고

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        
        
        int N = Integer.parseInt(st.nextToken());//바구니 수

        int timess = Integer.parseInt(st.nextToken());//바구니 바꾸는 횟수
        
        
        int[] arr = new int[N+1];

        for(int i = 1; i < N+1; i++){
            arr[i] = i;
        }//바구니 공 초기화

        int tmp = 0;//그거

        int a_1 = 0;
        int a_2 = 0;

        for(int i = 0; i < timess; i++){
            st = new StringTokenizer(br.readLine(), " ");
            
            a_1 = Integer.parseInt(st.nextToken());
            a_2 = Integer.parseInt(st.nextToken());
            for(; a_1 <= a_2; a_1 ++, a_2 --){
                tmp = arr[a_1];
                arr[a_1] = arr[a_2];
                arr[a_2] = tmp;
            }
        }

        for(int i = 1; i < N+1; i++){
            System.out.print(arr[i] + " ");
        }

    }
    

        
}
