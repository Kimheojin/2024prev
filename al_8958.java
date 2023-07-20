import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class al_8958 {
    public static void main(String args[]) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int N = Integer.parseInt(br.readLine());

        String str;

      
        for(int i = 0; i < N; i++){
            str = br.readLine();

            int count = 0;
            int score = 1;

            for(int j = 0; j < str.length(); j++){
                if(str.charAt(j) == 'O'){
                    count = count + score;
                    score = score + 1;

                }
                else{
                    score = 1;
                }
            }
            bw.write(count + "\n");
        }
        bw.flush();
        bw.close();

        
    }
}