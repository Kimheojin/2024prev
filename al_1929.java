import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class al_1929 {
    public static void main (String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
                
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int M = Integer.parseInt(st.nextToken());

        int N = Integer.parseInt(st.nextToken());

        for(;M < N+1; M++ ){
            if(M == 1){
                continue;
            }
            else if(M == 2){
                bw.write(M);
                bw.newLine();
                continue;
            }
            else if(M%2 == 0){
                continue;
            }
            else{
                for(int i = 3;i < M; M++){
                    
                }
            }
        }
        
        
    }
}
