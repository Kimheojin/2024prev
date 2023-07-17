import java.util.Scanner;

public class al_2525 {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        int h = sc.nextInt();
        int m = sc.nextInt();
        
        sc.nextLine();

        int p_time = sc.nextInt();

        sc.close();
        

        m = m + p_time;

        while(m >= 60){
            h++;
            if(h >= 24){
                h = 0;
            }
            m = m - 60;

    }

    System.out.println(h+" "+m);


    }
}
