import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class al_11047 {
    public static void main(String args[])throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        StringTokenizer st = new StringTokenizer(br.readLine(), " ");

        int N = Integer.parseInt(st.nextToken());

        int K = Integer.parseInt(st.nextToken());

        //HashMap<Integer, Integer> map1 = new HashMap <>();

        int[] sub = new int[N];

        int count = 0;

        for(int i = 0; i < N; i++){
            sub[i] = Integer.parseInt(br.readLine());
        }

        for(int j = N-1 ; j >=0;j--){
            if(sub[j] <= K){
                count = K/sub[j] + count;
                K = K%sub[j];
            }
            if(K == 0){
                break;
            }

            
                

        }

        System.out.println(count);


    }
}
