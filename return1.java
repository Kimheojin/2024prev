public class return1 {
//부품으로 써의 가치

    public static String[] numbering (){//리턴하라 값이 반드리 리터럴
            //부품으로 써의 
            String[] members = {"최진혁", "최유빈", "한이람"};
            
            return members;
        //return 여러개 사용하면 맨 처음 한개만 나온다
        //여러개의 입력을 맏을 때에는 배열을 사용해서 return 값으로 받을 수 있다
    }

    public static void main(String[] args){//void = 공허한 이라는 뜻
        String[] result = numbering();
        System.out.println(result[1]);
    }
    
}
