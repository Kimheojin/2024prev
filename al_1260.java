import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class al_1260 {
    public static void main(String args[]) throws IOException {
        
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        //방문할 수 있는 정점이 여러개인 경우에는 정점 번호가 작은것을 먼저 방문하고 더
        //이상 방문할 수 있는 점이 없는경우 종료한다.

        StringTokenizer st;
        st = new StringTokenizer(br.readLine(), " ");
        int N = Integer.parseInt(st.nextToken());//첫째 줄에 정점의 개수 

        int M = Integer.parseInt(st.nextToken());//간선의 개수

        int V = Integer.parseInt(st.nextToken());//탐색을 시작할 정점의 번호

        //입력으로 주어지는 간선은 양방향이다

        int[][] array = new int[M][2];
        for(int i = 0; i < M; i++){
            st = new StringTokenizer(br.readLine(), " ");
            array[i][0] = Integer.parseInt(st.nextToken());

            array[i][1] = Integer.parseInt(st.nextToken());
        }
    }
}
