import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class al_5597{
    public static void main(String args[]) throws IOException{
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            int[] array = new int[31];
        
            Arrays.fill(array, 0);

            for(int i = 0; i < 28; i++){
                int n = Integer.parseInt(br.readLine());
                array[n] = 1;

            }

            for(int t = 1;t < 31; t++){
                if(array[t] != 1){
                    System.out.println(t);
                }
            }
    }
}
