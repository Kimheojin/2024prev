import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class al_9085 {

    public static void main(String args[]) throws IOException {
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));

        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int N = Integer.parseInt(bf.readLine());

        String str;

    
        for(int i = 0;i < N; i++){
        
            str = bf.readLine();
           
           
            bw.write(str.charAt(0) + str.charAt(str.length()-1) + "\n");
    
        }
       
        bw.flush();
        bw.close();
        bf.close();


    }
    
}
