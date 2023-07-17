import java.util.Scanner;

public class al_2480 {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        int a_1 = sc.nextInt();
        int a_2 = sc.nextInt();
        int a_3 = sc.nextInt();

        sc.close();
        
        if((a_1 == a_2) && (a_2 == a_3) ){//모두 같은 경우
            System.out.println(10000+a_1*1000);

        }
        else if(a_1 == a_2){
            System.out.println(1000+a_1*100);
        }
         else if(a_1 == a_3){
            System.out.println(1000+a_1*100);
        }
         else if(a_3 == a_2){
            System.out.println(1000+a_2*100);
        }
        else
        {
            if(a_1<a_2){
                a_1 = a_2;
            }
            if(a_1<a_3){
                a_1 = a_3;
            }
            System.out.println(a_1*100);
        }
    }
        //총 3가지 잖아

        //모두 다른경우 

        //두개는 같고 하나만 다른경우

}

