public class jin123{
    static long fac(int n){
        if(n <= 0 || n > 20){
            return -1;

        }
        
    }
    public static void main(String[] args){
        int n = 21;
        long result = 0;
        for(int i = 1; i <= n; i++){
            result = fac(i);

            if(result == -1){
                Systme.out.println("유효하지 않은 값입니다. (0)")
            }
        }
    }
}