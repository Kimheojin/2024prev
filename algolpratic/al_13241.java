import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class al_13241 {
    public static void main(String args[]) throws IOException {
        
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        

        long a_1 = Long.parseLong(st.nextToken());

        long a_2 = Long.parseLong(st.nextToken());

        if(a_1 == a_2){
            System.out.println(a_1);
        }
        else if(a_1 > a_2){
            int index_1 = 1;

            while(true){
                if(a_1%a_2 == 0){
                    break;
                }
            }
            System.out.println(a_1);
        }
        else if(a_2 > a_1){

            int index_2 = 1;
            while(true){
                if(a_2 % a_1== 0){
                    break;
                }
            }
            System.out.println(a_2);
        }

        
    }
}
