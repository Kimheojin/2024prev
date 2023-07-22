import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class al_10773 {
    public static void main (String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());

        int[] array = new int [N];
        int index = 0;

        Arrays.fill(array, 0);
        for(int i = 0; i < N; i++){

            int a = Integer.parseInt(br.readLine());
            if(a == 0){
                index --;
                array[index] = 0;
                continue;
            }
            
            array[index] = a;
            index ++;
        }
        int score = 0;

        for(int j= 0;j < index;j++ ){
            score = array[j] + score;

        }

        System.out.println(score);

    }

}
