import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class al_2563 {
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;

        int N = Integer.parseInt(br.readLine());

        int[][] paper = new int[100][100];

        int count = 0;

        for(int i = 0; i < 100; i++){
            for(int j = 0; j < 100; j++){
                paper[i][j] = 0;
            }
        }


        for(int i = 0; i < N; i++){
            st = new StringTokenizer(br.readLine(), " " );
            int x = Integer.parseInt(st.nextToken());
            int y = Integer.parseInt(st.nextToken());

            int a_1 = x+10;
            int a_2 = y+10;

            for (int a = x; a < a_1; a++) {
                for (int b = y; b < a_2; b++) {
                    paper[a][b] = 1;
                }
            }

        }



          for(int i = 0; i < 100; i++){
            for(int j = 0; j < 100; j++){
                if(paper[i][j] == 1){
                    count ++;
                }
            }
        
        }


        System.out.println(count);
    }
}

