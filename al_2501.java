import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class al_2501 {
    public static void main(String args[]) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        StringTokenizer st;

        st = new StringTokenizer(br.readLine());

        int a_1 = Integer.parseInt(st.nextToken());
        int a_2 = Integer.parseInt(st.nextToken());

        int count=0;
        int answer=1;

        

        while(true){
            
            if(a_1%answer == 0){
                count ++ ;
            }

            if(count == a_2){
                System.out.println(answer);
                break;
            }
            if(answer > a_1){
                System.out.println("0");
                break;
            }


            answer ++;
        }
        
    }
}
