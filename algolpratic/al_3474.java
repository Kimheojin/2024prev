import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class al_3474 {
   public static void main(String args[])throws IOException{

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        

        int n = Integer.parseInt(br.readLine());

        int num5 = 0;

        for(int i = 0; i < n; i++){
            String input = br.readLine();

            long num = Long.parseLong(input);

            for(int j = 5; j <= num; j*= 5){
                num5 += num/j;
            }

            System.out.println(num5);

            num5 = 0;
        }


    }
}
