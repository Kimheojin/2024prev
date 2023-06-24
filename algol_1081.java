import java.util.*;


public class algol_1081 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();

        sc.nextLine();

        String[] alpha = new String[N];//alpha 배열3

        for(int i = 0; i < N;i++){
            alpha[i] = sc.nextLine();
            
        }
        
        //arr 이 ㅡㄱ거
        Arrays.sort(alpha, new Comparator<String>() {
         @Override
        public int compare(String s1, String s2) {
        return s1.length() - s2.length();
        }});
        System.out.println(Arrays.toString(alpha));


    }
    
}
