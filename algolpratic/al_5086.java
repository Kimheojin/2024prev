import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class al_5086 {
    public static void main(String args[]) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in)); 


        //첫 번째 숫자가 두번째 숫자의 약수이다.
        //첫 번쨰 숫자가 두번째 숫자의 배수이다.
        //첫 번째 숫자가 두번째 숫자가 약수ㅗ아 배수 모두 

        StringTokenizer st;
    

        int a_1;
        int a_2;
        while(true){
            st = new StringTokenizer(br.readLine(), " ");
            a_1 = Integer.parseInt(st.nextToken());
            a_2 = Integer.parseInt(st.nextToken());

            if(a_1 == 0 && a_2 == 0){
                break;
            }
            else if(a_1%a_2 == 0){
                System.out.println("multiple");
            }
            else if(a_2%a_1 == 0){
                System.out.println("factor");

            }
            else{
                System.out.println("neither");
            }
        }
    }
}
