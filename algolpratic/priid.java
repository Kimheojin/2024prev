class Calculator {
    int left, right;
 
    public void setOprands(int left, int right) {
        this.left = left;
        this.right = right;
    }
 
    public void sum() {
        System.out.println(this.left + this.right);
    }
 
    public void avg() {
        System.out.println((this.left + this.right) / 2);
    }
}
 
class SubstractionableCalculator extends Calculator {//상속 받은 자식 그거
    public void sum(){
        System.out.println(this.left + this.right);
        System.out.println("입니다.");//메소드 오버라이딩
        //부모의 그것을 무시한다.
        
        //하지만 리턴 타입은 같아야 한다
        //형식은 완전히 일치 해야 한다
    }
    //super 키워드 기억하기
    //super 요긴하게 사용하기
    
    public void substract() {
        System.out.println(this.left - this.right);
    }

}
 
public class priid {
 
    public static void main(String[] args) {
 
        SubstractionableCalculator c1 = new SubstractionableCalculator();
        c1.setOprands(10, 20);
        c1.sum();
        c1.avg();
        c1.substract();
    }
 
}
//기존의 객체는 기능을 물려준다는 의미에서 부모 객체가 되고
//새로운 객체는 기존 객체의 기능을 물려받는다는 의미에서 자식 객체가 된다
//부모 클래스를 derived클래스 라고도 부른다
//어떤 생성자라도 만들어 주면 기본 생성자를 만들어 주지 않는다
//부모 생성자에 정의 되어 있지 않다

//기본 생성자가 아닌 그것을 미리 만들어 놓았다
//에러가 발생함

//생성자의 중복이 들어가 있는 경우 -> 여러가지 문제ㅏㄱ 생긴다

//생성자 호출해서 실행 가능 super 라는 키워드를 이용해서
//super -> 부모 클래스를 의미한다
//super 이라는 클래스를 이용해서 참조 할 수 있다.
//다른 초기화 들은 super 뒤에 해야 한다
//overiding
//자식 객체가  부모가 물려준 메소드 중에 덮어쓰기 하는 경우 재 정의 하여서