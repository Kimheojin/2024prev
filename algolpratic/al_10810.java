import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class al_10810 {
    public static void main(String args[]) throws IOException {
        //도현이는 바구니를 N 개 가지고 있고

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        
        
        int N = Integer.parseInt(st.nextToken());

        int timess = Integer.parseInt(st.nextToken());
        
        
        int[] arr = new int[N];

        int a_1 = 0;
        int a_2 = 0;
        int n = 0;

        for(int i = 0; i < timess; i++){
            a_1 = Integer.parseInt(st.nextToken())-1;
            a_2 = Integer.parseInt(st.nextToken())-1;
            n = Integer.parseInt(st.nextToken());
            for(; a_1 <= a_2; a_1 ++){
                arr[a_1] = n;
            }
        }
        for(int i = 0; i < N; i++){
        System.out.print(arr[i] + " ");
        }

    }
}
