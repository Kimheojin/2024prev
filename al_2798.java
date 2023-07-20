import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class al_2798 {
    public static void main(String args[])throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        StringTokenizer st;
        st = new StringTokenizer(br.readLine(), " ");

        int N = Integer.parseInt(st.nextToken());

        int sum = Integer.parseInt(st.nextToken());

        int [] array = new int[N];

        st = new StringTokenizer(br.readLine(), " ");

        for(int i = 0; i < N; i ++){//무조건 3장사용, 합은 sum을 넘으면 안된다.
            array[i] = Integer.parseInt(st.nextToken());
        }
        
        int result = search(array, N, sum);

        System.out.println(result);

        

    }

    static int search(int[] arr, int a_1, int a_2){
        int result = 0;
        for (int i = 0; i < a_1 - 2; i++) {
 
			
			for (int j = i + 1; j < a_1 - 1; j++) {
 
				
				for (int k = j + 1; k < a_1; k++) {

					int temp = arr[i] + arr[j] + arr[k];
					
					
					if (a_2 == temp) {	
						return temp;//바로 함수 종료
					}
					
					
					if(result < temp && temp < a_2) {
						result = temp;
					}
				}
			}
		}
		
		return result;
	}
    
}
