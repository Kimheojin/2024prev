import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.StringTokenizer;

public class al_10798 {	
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder sb = new StringBuilder();
	
		char[][] arr = new char[5][15];

		for(int i = 0; i < 5; i++) {
			String s = br.readLine();
			
			for(int j = 0; j < s.length(); j++) {
				arr[i][j] = s.charAt(j);
			}
		}
        
		for(int i = 0; i < 15; i++) {
			for(int j = 0; j < 5; j++) {
				if(arr[j][i] != '\0')
					sb.append(arr[j][i]);
			}
		}
        
		System.out.println(sb);
	}
}