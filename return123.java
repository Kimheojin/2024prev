import java.util.Scanner;

public class return123 {
    public static void main(String[] args){
        try{
            File file = new File("out.txt");//값을 정수로 입력받기
            //파일에 저장되어 있는 값 수정하기
            Scanner sc = new Scanner(file);
            while(sc.hasNextInt()){
                System.out.println(sc.nextInt()*1000);
                
            }
            sc.cli
        }
    }
    
}
