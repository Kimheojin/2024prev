import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class al_11022 {
    public static void main(String args[]) throws IOException{
        //두 정수 입력받은 다음 출력하는 프로그램을 작성하는 것
        
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));//입력받는거


        int N = Integer.parseInt(br.readLine());//한 줄 입력받음


        int A;
        int B;

        StringTokenizer st;

        for (int i = 1; i <= N; i++){
            st = new StringTokenizer(br.readLine()," ");
            A = Integer.parseInt(st.nextToken());
            B = Integer.parseInt(st.nextToken());

            System.out.println("Case #" + i + ": " + A + " + " + B + " = " + (A+B));



            
        }   
        br.close();

        


    }
}