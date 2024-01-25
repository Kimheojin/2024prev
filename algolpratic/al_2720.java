import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class al_2720 {
    public static void main(String args[]) throws IOException{
        

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int N = Integer.parseInt(br.readLine());

        int source;

        int tmp = 0;
        for(int i = 0; i < N; i++){
            source = Integer.parseInt(br.readLine());
            tmp = source / 25;
            bw.write(tmp + " ");

            source = source % 25;
            tmp = source / 10;
            bw.write(tmp + " ");

            source = source % 10;
            tmp = source / 5;
            bw.write(tmp + " ");

            source = source % 5;

            bw.write(source + "\n");
            
        }

        bw.flush();
        bw.close();
    }
}
