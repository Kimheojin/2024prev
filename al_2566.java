import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class al_2566 {
    public static void main(String args[])throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        StringTokenizer st;

        int max = 0;
        int x= 0;
        int y= 0;

        for(int i = 1; i < 10; i++){
            st = new StringTokenizer(br.readLine(), " ");
            for(int j = 1; j < 10; j++){
                int n = Integer.parseInt(st.nextToken());
                if(n >= max){
                    max = n;
                    x = i;
                    y = j;
                }


            }
        }
        System.out.println(max);
        System.out.println(x + " " + y);
    }
}
