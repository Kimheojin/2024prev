import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Arrays;

public class al_1427 {
    
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        String str = br.readLine();

        int n = str.length();

        int[] array =new int[n]; 

        for(int i = 0; i < n; i++){
            array[i] = str.charAt(i);
        }

        Arrays.sort(array);
        
        for(int j = n-1; j >= 0; j--){
            bw.write(array[j]);
        }
        bw.flush();
        bw.close();
        
    }
}
