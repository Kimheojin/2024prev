import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class al_2941 {
    public static void main(String args[]) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        String answer = br.readLine();

        answer = answer.replace("c=", "a");
         answer = answer.replace("c-", "a");
          answer = answer.replace("dz=", "a");
           answer = answer.replace("d-", "a");
            answer = answer.replace("lj", "a");
             answer = answer.replace("nj", "a");
              answer = answer.replace("s=", "a");
              answer = answer.replace("z=", "a");
              
        System.out.println(answer.length());


    }
}
