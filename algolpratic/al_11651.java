import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class al_11651 {
    public static void main(String args[]) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());

        int[][] Array_1 = new int[n][2];

        StringTokenizer st;

        for(int i = 0; i < n; i++){
            st = new StringTokenizer(br.readLine(), " ");

            Array_1[i][0] = Integer.parseInt(st.nextToken()); //x
            Array_1[i][1] = Integer.parseInt(st.nextToken()); //y
        }

    
        
    }
    
}
