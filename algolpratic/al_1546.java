import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class al_1546 {
    public static void main(String args[]) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());

        StringTokenizer st;
        st = new StringTokenizer(br.readLine(), " ");

        float[] array = new float[N];//새 배열 생성

        float max = 0;
        float avg = 0;

        for(int i = 0; i < N; i++){
            array[i] = Integer.parseInt(st.nextToken());   
            if(array[i]>max) {
				max = array[i];
			}
        }

        for(int j=0; j<array.length; j++) {
			avg += (array[j]/max*100)/N;
		}

        System.out.println(avg);
                
    }
}
