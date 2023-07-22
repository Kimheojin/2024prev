import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class al_15829 {
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        long N = Long.parseLong(br.readLine());

        String str = br.readLine();
        long score = 0;

        long score_31 = 1;
        for(int i = 0; i < N; i++){
            char c = str.charAt(i);
            long p = (long)c -96;
            for(int j = 0; j < i; j++){
                score_31 = score_31 * 31;
            }
            score = score + p*score_31;
        }
        System.out.println(score%1234567891);

    }
}


