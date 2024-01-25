import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class al_11659 {//누적합 생각하기

    public static void main(String args[]) throws IOException{


        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        StringBuilder sb = new StringBuilder();
        StringTokenizer st;

        //수 N개가 주어졌을때 i번째 수부터 

        st = new StringTokenizer(br.readLine(), " ");

        int N = Integer.parseInt(st.nextToken());//갯수
        int M = Integer.parseInt(st.nextToken());

        int[] Array = new int[N];
        st = new StringTokenizer(br.readLine(), " ");
        for(int i = 0; i < N; i++){
            Array[i] = Integer.parseInt(st.nextToken());//0부터
        }

        for(int j = 0; j < M; j++){
            int a_1 = Integer.parseInt(st.nextToken());
            int a_2 = Integer.parseInt(st.nextToken());

            int count = 0;
            for(int k = a_1 - 1;k <= a_2 -1; k++){
                count = Array[k] + count;
            }
            sb.append(count).append("\n");
        }

        System.out.println(sb);//결과 출력
    }
}

