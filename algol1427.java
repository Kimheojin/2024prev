import java.util.Scanner;
class mergesort{
    int digit, solve;

    public void setoperand(){
        Scanner arrangement1 = new Scanner(System.in);
        int array = arrangement1.nextInt();
        this.digit = array;
        arrangement1.close();
    }

    
    public void solve(){
        
    }
    public void print_solve(){
        
    }
    //그냥 안에 그거 하는 함수만 넟쟈
}


public class algol1427 {
    public static void main(String[] args){

        mergesort a1 = new mergesort();

        a1.setoperand();//정렬할 배열을 입력받음
        a1.solve();
        a1.print_solve();
    }
}
