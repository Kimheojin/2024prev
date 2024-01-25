import java.util.Scanner;

public class al_2884 {
    public static void main(String args[]){
        // 45분 일찍 알람 설정하기
        Scanner sc = new Scanner(System.in);

        int H = sc.nextInt();
        int M = sc.nextInt();

        sc.close();

        //시간 출력
        //분 먼저 처리하는게 좋을듯
        if(M < 45) {
			H--;		// 시(hour) 1 감소
			M= 60 - (45 - M); 	// 분(min) 감소
			if(H < 0) {
				H = 23;
			}
			System.out.println(H + " " + M);
		}
		else {
			System.out.println(H + " " + (M - 45));
		}
	}
    
}
