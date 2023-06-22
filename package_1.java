class A {
    public String y(){
        return "public void y()";
    }
    private String z(){//바로 접근하면 오류 뜬다 private 함수라서
        return "public void z()";
    }
    public String x(){
        return z();
    }//딱히 상관은 없을듯
    
}
public class package_1 {
    public static void main(String[] args){
        A a = new A();
        System.out.println(a.y());

        System.out.println(a.x());
    }
}