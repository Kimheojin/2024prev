class c{
    int v = 10;
    void m() {

        int v = 20;//지역변수가 우선순위가 더 높음
        //대괄호 안에서만 효융 있는듯
        System.out.println(v);
        System.out.println(this.v);//이건 그냥 10 출력
        //이름이 중요한 것은 아닌듯
        

    }
    void n(){
        System.out.println(v);//그냥 10이 출력
    }
}
//유효범위에 대해 알아봤다
//관리하기 더 편하게 하기 위해 하는듯
//전역변수를 사용 하는 것도 바람직 하지는 않음
//가급적이면 사용 안하는 것이 좋을듯

public class apdff {
    public static void main(String[] args){
        c c1 = new c();
        c1.m();
        c1.n();


    }
}

