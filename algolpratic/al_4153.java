import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class al_4153 {
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;
       

        int a_1=1;
        int a_2=1;
        int a_3=1;

        while(true){
            st = new StringTokenizer(br.readLine());

            a_1 = Integer.parseInt(st.nextToken());
            a_2 = Integer.parseInt(st.nextToken());
            a_3 = Integer.parseInt(st.nextToken());

            if(a_1 == 0 && a_2 == 0 && a_3 == 0){
                break;
            }
            if((a_1 * a_1 + a_2 * a_2) == a_3 * a_3) {
				bw.write("right" + "\n");
			}
        	else if(a_1 * a_1 == (a_2 * a_2 + a_3 * a_3)) {
				bw.write("right" + "\n");
			}
        	else if(a_2 * a_2 == (a_3 * a_3 + a_1 * a_1)) {
				bw.write("right" + "\n");
			}
        	else {
				bw.write("wrong" + "\n");
			}
            
         

           
            
        }
        bw.flush();

        bw.close();
    }
}
