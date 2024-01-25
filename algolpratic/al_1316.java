import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class al_1316 {
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());

       
        int count = 0;

        for(int i = 0; i < N; i++){
            String str = br.readLine();

            
        
            int[] array = new int [26];

        
            Arrays.fill(array, 0);
                

     

            for(int j = 0; j < str.length(); j++){//index로 처리하기
                if(str.length() == 1){
                    count ++;
                    break;
                }
                char c = str.charAt(j);
                
                int index = c - 'a';
                if(array[index] == 0){
                    array[index] = 1;
                }
                else if(!(j == 0) && str.charAt(j-1) == c){//연속된경우
                    continue;
                }
                else{
                    break;
                }

                if(j == str.length() -1){
                    count ++;
                }

                
            }

        }
        System.out.println(count);
    }
}
