//객체는 상태와 행위의 집합
//calcul =  데이터 타입을 만든다
//하드웨어 적으로 보면 이 값을 넣겠다
//사용자 내부 정리 타입을 만드는 것 
//객체 지향이라는 것은 상당히 가변적이다
//수단을 가지고 있다
//상당히 복잡한 ㄴㅇ
class Calculator{//객체를 하나의 독립된 프로그램을 바라 볼것
    //객체는 프로그램 안에 작은 프로그램이라고 생각하기
    int left, right;

    public void setOprands(int left, int right){
        this.left = left;//this는 distance 자신을 의미한다.
        this.right = right;
    }
    public void sum(){
        System.out.println(this.left + this.right);
    }
    public void avg(){
        System.out.println((this.left + this.right)/2);

    }

}//두 개의 객체를 instance라고 한다
//instance는 실질적인 객체 라는 뜻으로 쓰인다.





public class guiasdf {
 

    public static void main(String[] args){

        Calculator c1 = new Calculator();
        c1.setOprands(10, 20);
        c1.sum();
        c1.avg();

        c1.setOprands(20, 30);
        c1.sum();
        c1.avg();
        
        
        
    }
}
