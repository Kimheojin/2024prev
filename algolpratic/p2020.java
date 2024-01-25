
class cal{//클래스 뒤에는 구지 소괄호 안붙이는거 같음

    static double PI = 3.14;
    //클래스에 소속되게 된다/
    //일반적인 경우는 그냥 double 사용하기
    //접근해서 다른 인수로 바꿔도 상관 없는듯
    //final 사용 가능
    //new를 사용하면 메모리 더 사용하는듯
    int left, right;
    public void setOperands(int left, int right){
        this.left = left;
        this.right = right;
    }
    public void sum(){
        System.out.println(this.left + this.right);
    }
    public void avg(){
        System.out.println((this.left + this.right)/2);
    }
}//static이 이 붙어있으면 직접 접근 가능한듯 
//클래스를 이용해서
//instance에 관한 내용
//클래스 static field 두 개는 서로 대체가능한 변수 라는 것을 기억하기



class cal1{
    //구지 method 호출 안하는 듯 (new 사용 안하는듯 인스턴스 등장 x)
    //컨트롤 누르고 html 공부도 한번 하기
    //static을 달면 class 소속 method로 변한다
    //static 부분만 다르다 클래스 변수처럼
    //class소속 변수처럼 된다
    //class에 직접 접근해서 제어할 수 있다.
    //저 로직은 서로 다른 상태를 가져야 할 필요가 있으므로
    //static 붙이는 이유는 그냥 필요한 경우에 인자를 사용 구지 메모리 사용하면서 
    //class method
    //인스턴스 메소드는 클래스 멤버에 접근할 수 있다
    //클래스 메소드는 인스턴스 멤버에 접근할 수 없다.
    //멤버에 접근할 수 있다
    //클래스 메소드는 인스턴스 멤버에 접근할 수 없다instance
    public static void sum(int left, int right){
        System.out.println(left+ right);

    }
    public static void avg(int left, int right){

        System.out.println((left + right)/2);
    }
}

public class p2020 {

    public static void main(String[] args){
        cal c1 = new cal();
        c1.setOperands(10, 20);
        c1.sum();
        c1.avg();

    }
    
}
