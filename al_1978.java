import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class al_1978 {
    public static void main(String args[]) throws IOException{
        

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());

        StringTokenizer st = new StringTokenizer(br.readLine(), " ");

        int para;

        int count = 0;

        for(int i = 0; i < N; i++){
            para = Integer.parseInt(st.nextToken());
            if(para == 1){
                continue;
            }
            if(para == 2){
                count ++;
                continue;
            }
            else if(para % 2 == 0){
                continue;
            }

            for(int j = 2;j < para ;j++){
                if(para % j == 0){
                    break;
                }
                if(j == (para-1) ){
                    count++;
                }
                
            }
           
        }
        System.out.println(count);



        }


    }
