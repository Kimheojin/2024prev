import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class al_1003 {
    public static void main(String args[]) throws IOException{

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());

        int arr[][] = new int[41][2]; //2차원 배열로 표현 0과 1

        StringBuilder sb = new StringBuilder();

        arr[0][0] = 1;//0일떄 0 = 1
        arr[1][1] = 1;//1일때
    
        int index = 1;//1까지 배정한 상태
        
        for(int i = 0; i < N; i++){
            int a = Integer.parseInt(br.readLine());

            if(a <= index){
                sb.append(arr[a][0]).append(" ").append(arr[a][1]).append("\n");
            }
            else{
                while(a > index){

                    arr[index+1][0] = arr[index][0] + arr[index -1][0];
                    arr[index+1][1] = arr[index][1] + arr[index -1][1];

                    index++;
                }
                sb.append(arr[a][0]).append(" ").append(arr[a][1]).append("\n");
            }
            
        }

        System.out.println(sb);


    }

}
