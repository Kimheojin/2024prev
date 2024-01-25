import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class al_1085 {
    public static void main (String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        StringTokenizer st = new StringTokenizer(br.readLine(), " ");

        int x = Integer.parseInt(st.nextToken());
        int y = Integer.parseInt(st.nextToken());
        int w = Integer.parseInt(st.nextToken());//x
        int h = Integer.parseInt(st.nextToken());//y

        int min = h-y;

        if(min > y){
            min = y;
        }
        if(min > x){
            min = x;
        }
        if(min > w-x){
            min = w-x;
        }
        System.out.println(min);

        
    }
}
