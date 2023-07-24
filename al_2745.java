import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class al_2745 {
    public static void main(String args[]) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");

        String N_1 = st.nextToken(); // 진법 변환할 숫자
        int N_2 = Integer.parseInt(st.nextToken()); // 진법

        int answer = Integer.parseInt(N_1, N_2);

        System.out.println(answer);
    }
}