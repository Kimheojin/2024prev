import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Stack;

public class al_12789 {
    public static void main(String args[]) throws IOException {
        
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    
        int N = Integer.parseInt(br.readLine());
        //앞에 서있는 학생들의 수


        //승환이는 마지막 번호표를 받음

        Stack<Integer> stack = new Stack<>();//자리 옮기는곳

        Queue<Integer> queue = new LinkedList<>();

        stack.push(0);
        queue.offer(0);

        for(int i = 0; i < N; i++){
            int k = Integer.parseInt(br.readLine());

            queue.offer(k);
        }
        
        for(int index = 1; index <= N; index ++){
            while(true){
            
                if(queue.peek() == index ){
                    queue.remove();
                    break;
                }
                else if(stack.peek() == index){
                    stack.pop();
                    break;
                }
                else{
                    stack.push(queue.poll());
                   
                }
                
                if(queue.peek()==0 && stack.peek() != index ){
                    System.out.println("Sad");
                    return;
        
                }
                
            }
            if(queue.peek() == 0 && stack.peek() == 0){
                System.out.println("Nice");
                return;
            }
        }
    }
}