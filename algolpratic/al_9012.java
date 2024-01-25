import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class al_9012 {
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int N = Integer.parseInt(br.readLine());

        for (int i = 0; i < N; i++) {
            String str = br.readLine();
            int count = 0;

            if (str.length() % 2 == 1) {
                bw.write("NO");
            } else {
                for (int j = 0; j < str.length(); j++) {1
                    if (str.charAt(j) == '(') {
                        count++;
                    } else {
                        count--;
                    }
                    if (count < 0) {
                        bw.write("NO");
                        break;
                    }
                }
                if (count == 0) {
                    bw.write("YES");
                } else {
                    bw.write("NO");
                }
            }
            bw.newLine(); 
        }
        bw.flush();
        bw.close();
      
    }
}
