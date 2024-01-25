import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;



public class al_2920 {
    public static void main(String args[])throws IOException{

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        StringTokenizer st = new StringTokenizer(br.readLine());

        int[] array = new int[8];


        for(int i= 0; i < 8; i++ ){
            array[i] = Integer.parseInt(st.nextToken());
        }

        boolean asc = true;
        boolean dsc = true;
        for (int i = 0; i < 7; i++) {
      
            if (array[i+1] > array[i]) dsc = false;
           
            if (array[i+1] < array[i]) asc = false;
        }
        if (asc) {
            System.out.print("ascending");
        } else if (dsc) {
            System.out.print("descending");
        } else {
    
            System.out.print("mixed");
        }

        
    }

 
}
