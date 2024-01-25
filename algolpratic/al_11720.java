import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;



public class al_11720 {
    public static void main(String args[])throws IOException{

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

 


        int N = Integer.parseInt(br.readLine());;
    

        int answer = Integer.parseInt(br.readLine());;

        String str = Integer.toString(answer);

        int solve = 0;

        for(int i = 0; i < N; i++){
            solve = solve + (str.charAt(i) - '0');
        }

        System.out.println(solve);
        

        
        
    }
}
