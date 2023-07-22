import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Arrays;
import java.util.StringTokenizer;

public class al_1920 {
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;

        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int N = Integer.parseInt(br.readLine());

        int[] array = new int[N];

        for (int i = 0; i < N; i++) {
            st = new StringTokenizer(br.readLine(), " ");
            array[i] = Integer.parseInt(st.nextToken());
        }

        Arrays.sort(array);

        int N_1 = Integer.parseInt(br.readLine());

        for (int i = 0; i < N_1; i++) {
            st = new StringTokenizer(br.readLine(), " ");

            int a = Integer.parseInt(st.nextToken());
            int index = Arrays.binarySearch(array, a);
            if (index < 0) {
                bw.write("0" + "\n");
            } else {
                bw.write("1" + "\n");
            }
        }

        bw.flush();
        bw.close();
    }
}
