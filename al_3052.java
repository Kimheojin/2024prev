import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashSet;

public class al_3052 {
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        //서로 다른 나머지가 몇 개 있는지 출력해라
        HashSet<Integer> h = new HashSet<Integer>();

        int n = 0;

        for(int i = 0; i < 10; i++){

            n = Integer.parseInt(br.readLine());
            h.add(n % 42);

        }

        System.out.println(h.size());
    }
}
