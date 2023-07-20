import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class al_2475 {
    public static void main(String args[])throws IOException{

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        StringTokenizer st;

        st = new StringTokenizer(br.readLine());

        int answer = 0;

        int N = 0;

        for(int i = 0; i < 5; i++){
            N = Integer.parseInt(st.nextToken());

            answer = answer + (N*N);
        }

        System.out.println(answer%10);

    }
}
