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
                System.out.println("유효하지 않은 값입니다. (0)");
                
            }
        }
    }
}

class Point {
    int x; 
    int y;
    
    String getlocation(){
        return "x :";
    //오버라이딩의 조건
    //이름이 같아야 하다.
    //반환 타입이 같아야 한다.
    //이름이 같아야 한다.
    //매개 변수가 같아야 한다.
    //접근 제어자를 조상 클래스 
    //super는 자손 클래스에서 조상 클래스로부터 상속 받은 멤버를 참조하는데 사용되는 참조 변수이다
    //superTest.java   
    //object클래스를 제외한 모든 클래스의 생성자 첫 줄에.this() 또는 
    //this.x = x;
    //this package문
    //import
    }
}