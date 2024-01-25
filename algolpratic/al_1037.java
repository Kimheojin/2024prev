import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class al_1037 {
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());

        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        int[] array = new int[N];

        for(int i = 0; i < N; i++){
            array[i] = Integer.parseInt(st.nextToken());


        }

        Arrays.sort(array);

        int answer = 0;

        if(N == 1){
            answer = array[0] * array[0];
        }
        else{
            answer = array[0] * array[N-1];
        }

        System.out.println(answer);
    }
    
}
