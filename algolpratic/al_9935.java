import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;

public class al_9935 {
    public static void main(String args[])throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String line = br.readLine();

        String rege = br.readLine();

        int regesize = rege.length();

        Stack<Character> st = new Stack<>();

        for(int i = 0; i < line.length(); i++){
            st.push(line.charAt(i));

            if(st.size()>= regesize){
                boolean flag = true;

                for(int j = 0; j < regesize; j++){
                    if(st.get(st.size()-regesize+j)!=rege.charAt(j)){
                        flag = false;
                        break;
                    }
                }
                if(flag) {
                    for(int j = 0; j < regesize; j++){
                        st.pop();
                    }
                }
            }
            StringBuilder sb = new StringBuilder();

            for(Character c : st){
                sb.append(c);
            }
            System.out.println(sb.length() == 0? "FRULA" : sb.toString());
        }

        

    }
}
