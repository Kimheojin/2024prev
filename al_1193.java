import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class al_1193 {
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        //홀수면 앞에서 시작
        //짝수면 뒤에서 시작
        int N = Integer.parseInt(br.readLine());

        int index = 0;
        int sum = 0;
        while(true){
                if(sum >= N){
                    break;}

                index++;
                sum = index + sum;
                
             
                
        }

        int a_1 = N - (sum - index);//몇번째인지(최소 1)

        int answer_1 = index + 1 -a_1;//번째수
        int answer_2 = a_1;
        if(index%2 == 0)//짝수일 경우
        {
            System.out.println( answer_2 + "/" + answer_1);
        }
        else{
            System.out.println( answer_1 + "/" + answer_2);
        }

        
            

    }
        
}
