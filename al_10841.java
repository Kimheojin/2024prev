import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Comparator;
import java.util.StringTokenizer;

public class al_10841 {
    public static void main(String args[]) throws IOException{

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        StringTokenizer st;

         StringBuilder sb = new StringBuilder();

		
		int N = Integer.parseInt(br.readLine());

        String[][] arr = new String[N][2];

        for(int i = 0; i < N; i++) {
			st = new StringTokenizer(br.readLine(), " ");
			arr[i][0] = st.nextToken();	// 나이
			arr[i][1] = st.nextToken();	// 이름
		}

        Arrays.sort(arr, new Comparator<String[]>() {
			// 나이순으로 정렬
			@Override
			public int compare(String[] s1, String[] s2) {
				return Integer.parseInt(s1[0]) - Integer.parseInt(s2[0]);
			}

        });

       
        for(int i = 0; i < N; i++) {
			sb.append(arr[i][0]).append(' ').append(arr[i][1]).append('\n');
		}
        
		System.out.println(sb);

    }
}
