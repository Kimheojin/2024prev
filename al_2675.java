import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class al_2675 {
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        StringTokenizer st;

        int N = Integer.parseInt(br.readLine());

        int multi = 0;

        int len = 0;

        for(int i = 0; i < N; i++){
            st = new StringTokenizer(br.readLine(), " ");
            multi = Integer.parseInt(st.nextToken());
            String str = st.nextToken();
            len = str.length();

            for(int j = 0; j<len;j++){
                for(int k = 0; k < multi; k++){
                     bw.write(str.charAt(j));

                }
                
            }
            bw.write("\n");

            

        }
        bw.flush();

        bw.close();

        


    }
}
