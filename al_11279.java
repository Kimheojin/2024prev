import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Collections;
import java.util.PriorityQueue;

public class al_11279 {
    public static void main(String args[]) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());

        PriorityQueue<Long> maxheap = new PriorityQueue<>(Collections.reverseOrder());

        StringBuilder sb = new StringBuilder();

        while(N --> 0){
            long n = Long.parseLong(br.readLine());

            if(n == 0){
                if(maxheap.isEmpty()){
                    sb.append("0").append("\n");
                }
                else{
                    sb.append(maxheap.poll()).append("\n");
                }
                
            }
            else{
                maxheap.add(n);
            }


            
        }

        System.out.println(sb);
    }
}
