import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;

public class al_3939 {
    public static void main(String args[])throws IOException{
        Stack<Character> stack = new Stack<>();

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        StringBuilder sb = new StringBuilder();

        stack.push('.');


        while(true){
            String str = br.readLine();
            if(str == null){
                break;
            }

            for(int i = 0; i < str.length(); i++){
                if(str.charAt(i) == '(' || str.charAt(i) == '['){
                    stack.push(str.charAt(i));
                }
                else if(str.charAt(i) == ')'){
                   if(stack.peek() == '('){
                        stack.pop();
                    }
                    else{
                        sb.append("no").append("\n");
                        stack.clear();
                        stack.push('.');
                        break;
                    }
                }
                else if(str.charAt(i) == ']'){
                    if(stack.peek() == '['){
                        stack.pop();
                    }
                    else{
                        sb.append("no").append("\n");;
                        stack.clear();
                        stack.push('.');
                        break;
                    }
                }

                else if(str.charAt(i) == '.'){
                    if(stack.peek() == '.'){
                        sb.append("yes").append("\n");
                        break;
                    }
                    else{
                        sb.append("no").append("\n");
                        stack.clear();
                        stack.push('.');
                        break;
                    }
                }
            }
        }

        System.out.println(sb);        
    }
}
