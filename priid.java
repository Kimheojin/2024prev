class Cal{

    int left, right;

    public Cal(int left, int right){
        this.left = left;
        this.right = right;

    }
    public void sum(){
        System.out.println(this.left + this.right);
    }
    public void avg(){
        System.out.println((this.left + this.right)/2);
    }

}

public class priid {
    public static void main(String[] args){
        //반드시 left 와 right 가 필요하다setting
        //생성자 사용하면 편하겠다
        //절차가 안에 숨어있다.

        Cal s1 = new Cal(10, 20);
        s1.sum();
        s1.avg();


    }
}
