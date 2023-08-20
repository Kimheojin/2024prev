import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.PriorityQueue;

public class al_1927 {
    public static void main(String args[])throws IOException{
        //첫째줄에는 연산ㅇ늬 갯수가 주어진다
        //배열에 자연수 x를 넣는다
        //배열에서 가장 작은 값을 출력하고 

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());

        

        PriorityQueue<Integer> minHeap = new PriorityQueue<>();

        StringBuilder sb = new StringBuilder();

        

        for(int i = 0; i < N; i++){
            int a = Integer.parseInt(br.readLine());

            if( a == 0){
                if(minHeap.isEmpty() == true){
                    sb.append("0").append("\n");
                }
                else{
                    sb.append(minHeap.poll()).append("\n");
                }
                
            }
            else{
                minHeap.add(a);
            }
        }

        System.out.println(sb);
        }
}
