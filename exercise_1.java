import java.io.IOException;

class Tv{
    String color;
    boolean power;
    int channel;

    void Poewer() {power = !power;}
    void channelUp() { ++channel; }
    void channelDown() {--channel;}

}
//객체 배열도 사용 가능
public class exercise_1 {

    public static void main(String args[])throws IOException {
        Tv t;
        t = new Tv();

        t.channel = 7;

        t.channelDown();
        System.out.println("현재 채널은 " + t.channel + "입니다");
    }
    
}


