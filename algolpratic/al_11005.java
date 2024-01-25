import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class al_11005 {
    public static void main(String args[]) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;

        st = new StringTokenizer(br.readLine(), " ");

        int N_1 = Integer.parseInt(st.nextToken());

        int N_2 = Integer.parseInt(st.nextToken());

        String answer = Integer.toString(N_1, N_2);

        System.out.println(answer);
    }
}
