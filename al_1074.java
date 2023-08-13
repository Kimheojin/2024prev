import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class al_1074 {
    public static int count = 0;

    public
    public static void main(String args[])throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        StringTokenizer st = new StringTokenizer(br.readLine(), " ");

        int N = Integer.parseInt(st.nextToken());

        int r = Integer.parseInt(st.nextToken());

        int c = Integer.parseInt(st.nextToken());

        //일단 구역별로 나누어서 하는게 좋을듯

        //4등분 한다음에 방문

        System.out.println(find(N, r, c));

        


    }
    public static int find(int a_1, int a_2, int a_3){
        //순서대로 M, x값,y값
        ddd

        count++;
        
    }
}
