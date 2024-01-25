import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class al_10818 {
    public static void main(String args[]) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N;
       
        int max = 0;
        int index = 0;

        for(int i = 1;i <= 9;i++){

            N = Integer.parseInt(br.readLine());
            if(N > max){
                max = N;
                index = i;

            }
           
        }
        System.out.println(max);
        System.out.println(index);
    }
}
