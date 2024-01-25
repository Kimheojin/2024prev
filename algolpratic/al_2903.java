import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class al_2903 {
    public static void main(String args[]) throws IOException{
        

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());

        //1번 5개 한번추가
        //2변 5개 4개추가
        //3번 5개 16개 추가

        int line = 2;

        for(int i = 0; i < N; i++){
            line = line + (line -1);
        }  

        System.out.println(line * line);

    
    }
}
