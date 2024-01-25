import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;



public class al_2577 {
    public static void main(String args[])throws IOException{

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

       

        int answer = 1;


        int N = 0;
    

        for(int i = 0; i < 3; i++){
            N= Integer.parseInt(br.readLine());
            answer = answer * N;
        }

        String str = Integer.toString(answer);

        int[] array = new int[10];//모두 0으로 초기화 된 상태

        for(int i = 0; i < str.length(); i++){
            int a = str.charAt(i) - '0';

            array[a] = array[a] + 1;
        }

        for(int i = 0; i < 10; i++){
            System.out.println(array[i]);
        }

        

        
        
    }
}
