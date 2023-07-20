import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class al_2292 {
    public static void main(String args[]) throws IOException{
        

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());

        //aoscjdmadp 6개방
        //1->7->19->37->61

        int count = 1; // 겹 수(최소 루트)
		int r = 2;

        if (N == 1) {
			System.out.print(1);
		}
 
		else {
			while (r <= N) {	// 범위가 N보다 커지기 직전까지 반복 
				r = r + (6 * count);
				count++;
			}
			System.out.print(count);
		}
    }
}