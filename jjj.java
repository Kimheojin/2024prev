public class jjj {//파일 이름이랑 같아야 한다
    //자바와 개발자 시이의 약속
    //코드의 양을 극단적으로 줄일 수 있다.
    //핵심 가치는 재활용
    public static void numbering(int limit) {
        int i = 0;
        while(i < limit){
            System.out.println(i);
            i++;
        }
    }//정의
    public static void main (String[] args){
        numbering(5);//호출
        /* 
        System.out.println("heeld");
        String[] classGroup = { "최진혁", "최유빈"};
        //문자열 데이터로 담긴 데이터를 다는다
        //배열을 정의하는 방법
        System.out.println(classGroup[0]);
        
        //0 1 2 3은 index라고 한다(같은 역할을 한다
        //연관되어 있는 것들 끼리 grouping 하는것
        

        String[] classGroup = new String[4];
        classGroup[0] = "최진혁";
        System.out.println(classGroup.length);//4가출력(얼마나 수용할 수 있나 라고 생각하기)
        classGroup[1] = "최유빈";
        System.out.println(classGroup.length);
        
        String[] members = {"최진혁", "최유빈", "한이람"};
        for (int i = 0; i< members.length; i++){
            String member = members[i];
            System.out.println(member + "이 상담을 받았습니다.");
        }

        
        //for - each 문
        //for문을 이용해서 
        String[] members = {"최진혁", "최유빈", "한이람"};
        for (String e : members){//콜론과 string e 를 지정해서 동작할 때 마다 하나씩 들어가는듯
            System.out.println(e + "이 상담을 받았습니다.");
        }
        
        String[] members = new String[3];
        members[0] = "최진혁";
        members[1] = "최유빈";
        //숫자를 넘어가면 오류가 발생한다.
        */
        //일종의 관리도구

    }
    
}
