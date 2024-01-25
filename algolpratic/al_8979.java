import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class al_8979 {
    public static void main(String args[]) throws IOException {
        
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        StringTokenizer st;

        //각 국가는 1부터 N까지 정수로 표현
        //자신보다 잘한 나라 수 +1
        //모두 같다면 두 나라의 등수는 같다.

        st = new StringTokenizer(br.readLine(), " ");

        int N = Integer.parseInt(st.nextToken());

        int K = Integer.parseInt(st.nextToken());

        //배열 3개 만든 후에 그러면 너무 큰가?
        

        for(int i = 0; i < N; i++){

        }



        
    }
}
