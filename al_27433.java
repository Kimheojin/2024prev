import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class al_27433 {
    
    public static void main(String args[])throws IOException{

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());

        System.out.println(fac(n));


    }

    public static long fac(int a){
        if(a == 0){
            return 1;
        }
        if(a ==1){
            return 1;
        }

        return a*fac(a-1);
    }
}
