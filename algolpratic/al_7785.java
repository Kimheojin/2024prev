import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Comparator;
import java.util.HashSet;
import java.util.StringTokenizer;
import java.util.TreeSet;

public class al_7785 {
    public static void main(String args[]) throws IOException{

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    

        StringTokenizer st;

        int N = Integer.parseInt(br.readLine());

        HashSet<String> hash = new HashSet<>();


        for(int i = 0; i < N; i++){
            st = new StringTokenizer(br.readLine(), " ");
            
            String name = st.nextToken();

            String EorL = st.nextToken();

            if(EorL == "enter"){
                hash.add(name);
            }
            else{
                hash.remove(name);
            }
        }

        for (String element : hash) {
            System.out.println(element);
        }
        
        TreeSet<String> treeSet = new TreeSet<>(Comparator.reverseOrder());

        treeSet.addAll(hash);

        for (String element : treeSet) {
            System.out.println(element);
        }
        

    }

}
