import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class al_2839 {
    public static void main (String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());

        int count = 0;

        if(N%5 != 0 || N%5 != 3){
            System.out.println("-1");
        }
        else{
            count = N / 5;
            count = (N%5)
        }

    }

}
