import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class al_10809 {
    public static void main(String args[]) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

     

        String str = br.readLine();

        int[] myArray = new int[26];
        Arrays.fill(myArray, -1);
        for(int i = 0; i < str.length(); i++){ 
            int c = (int)str.charAt(i) - 96;
            if(myArray[c] != -1){
                continue;
            }
            myArray[c] = i; 
        }

        for(int i = 0; i < 26; i++){
            System.out.println(myArray[i]);
        }
    }
}