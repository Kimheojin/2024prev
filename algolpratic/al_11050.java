import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class al_11050 {
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        StringTokenizer st = new StringTokenizer(br.readLine(), " ");

        int N = Integer.parseInt(st.nextToken());

        int K = Integer.parseInt(st.nextToken());

        int a_1 = 1;
        int a_2 = 1;

        for(int i =0; i < K; i++){
            a_1 = (N - i) * a_1;
            a_2 = a_2*(i+1); 
        }

        System.out.println(a_1/a_2);
    }
}