import java.util.*;


public class algol_1081 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();


        String[] alpha = new String[N];//alpha 배열

        for(int i = 0; i < N;i++){
            alpha[i] = sc.nextLine();
            
        }
        Arrays.sort(alpha, Comparator.comparing(String::length));
        System.out.println(alpha[0]);
        


        
        

        
    }
    
}
