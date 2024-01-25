import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class al_2587 {
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int[] array = new int[5];
        
        int sum = 0;

        for(int i = 0; i < 5; i++){
            array[i] = Integer.parseInt(br.readLine());

            sum = sum + array[i];
        }

        System.out.println(sum/5);

        Arrays.sort(array);

        System.out.println(array[2]);


    }
}