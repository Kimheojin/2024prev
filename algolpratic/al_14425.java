import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.HashSet;
import java.util.StringTokenizer;

public class al_14425 {
    public static void main(String args[]) throws IOException{

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        StringTokenizer st;
        st = new StringTokenizer(br.readLine(), " ");

        int N = Integer.parseInt(st.nextToken());

        int M = Integer.parseInt(st.nextToken());


     

        HashSet<String> hash = new HashSet<>();

        for(int i = 0; i < N; i++){
            String s_1 = br.readLine();

            hash.add(s_1);
        }



    
        int count = 0;

        for(int i = 0; i < M; i++){

            String s_2 = br.readLine();

            boolean answer = hash.contains(s_2);

            if(answer){
                count ++;
            }

        
            
        }
        bw.write(count);

        bw.flush();
        bw.close();

        
    
        

    }
}

