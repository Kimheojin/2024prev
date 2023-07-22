import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class al_1259 {
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        
        int n = 0;
        
        while(true){
            String str = br.readLine();
            n = str.length()/2;
            Boolean a = true;
            if(str.equals("0")){
                break;
            }

            
            for(int i = 0; i < n; i++){
                
                if(str.charAt(i) == str.charAt(str.length() -1 - i) ){
                    continue;
                }
                else{
                    a = false;
                    break;
                }
            }

            if(a){
                bw.write("yes" + "\n");
            }
            else{
                bw.write("no" + "\n");
            }

        }
        bw.flush();
        bw.close();
    }

}
