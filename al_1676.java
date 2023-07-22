import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;

public class al_1676 {
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());
        BigInteger answer = BigInteger.ONE;

        for (int i = 1; i <= N; i++) {
            answer = answer.multiply(BigInteger.valueOf(i));
        }

        String str = answer.toString();
        int count = 0;

        for (int i = str.length() - 1; i >= 0; i--) {
            char c = str.charAt(i);
            if (c != '0') {
                break;
            }
            count = count + 1;
        }

        System.out.println(count);
    }
}
