import java.util.Scanner;

class draw{
    int star;


    public void setOperands(int i){
        this.star = i;
    }//별 개수 설정하는 코드

    public void jindraw(){//그냥 while문 3번 쓰면 될듯
        int pivot = 0;
        while(pivot < star){
            
            
        }
        //이런식으로 while문 사용해서 하면 될듯
        
        
    }//곱하기로 그냥 처리하기

    
    
}

public class sotpdm {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();//별의 수를 입력받음


        draw op = new draw();
        op.setOperands(n);//별이 몇개인지 입력을 받음
        op.jindraw();
    
    }




    
}
