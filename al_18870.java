import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.HashMap;

public class Main {
	
	public static void main(String args[]) throws IOException{
	   	  BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	   	  StringBuilder sb = new StringBuilder();
	   	  
	   	 	int num = Integer.parseInt(br.readLine());
	   	 	
	   	 	String[] arr = br.readLine().split(" ");

            //이런식으로 입력 더 쉽게 받을 수 있는듯
	   	 	int[] an = new int[num];
	   	 	int cnt = 0;

	   	 	for(int i = 0 ; i < arr.length ; i ++)
	   	 		an[i] = Integer.parseInt(arr[i]);//int형으로 반환
	   	 	
	   	 	int[] temp = an.clone();//clone 을 사용하면 바로 복사 가능한듯
	   	 	
	   	 	Arrays.sort(an);//정렬함(아직 중복은 존재함)
	   	 	
	   	 	HashMap<Integer, Integer> hmap = new HashMap<>();
	   	 	for(int i = 0 ; i < an.length ; i++) {
	   	 		if(!hmap.containsKey(an[i]))
	   	 			hmap.put(an[i], cnt++);
	   	 	}
	   	 	
	   	 	for(int i = 0; i < num ; i++) {
	   	 		sb.append(hmap.get(temp[i])).append(" ");
	   	 	}
	   	 	
	   	 	System.out.println(sb.toString());
	}
}