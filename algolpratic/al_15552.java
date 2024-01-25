import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class al_15552 {
    public static void main(String args[]) throws IOException {
        //한 줄씩 string 으로 입력 받기 때문에 빠르다 (항상 잘 기억하기)

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));//선언
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int N = Integer.parseInt(br.readLine());

        StringTokenizer st;
        
        for (int i = 0; i < N; i++){
            st = new StringTokenizer(br.readLine(), " ");
            bw.write((Integer.parseInt(st.nextToken() + Integer.parseInt(st.nextToken())))+ "\n" );
        }
        br.close();

        bw.flush();
        bw.close();
        

    }
}
