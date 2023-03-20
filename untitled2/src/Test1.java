/**
 * Created with Intellij IDEA
 * User:
 * Date:2023--15
 * Time:13:33
 */
public class Test1 {

    public static void main(String[] args) {
        int ret2 = 0;
        int n = 1;
        while (n <= 5) {
            int i = 1;
            int ret = 1;
            while (i <= n) {
                ret *= i;
                i++;
            }
            ret2 += ret;
            n++;
        }
        System.out.println(ret2);
    }
}


