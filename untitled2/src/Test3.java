/**
 * Created with Intellij IDEA
 * User:吴倬行
 * Date:2023--15
 * Time:13:25
 */
public class Test3 {
    public static void main(String[] args) {
        int sum = 0;
        for (int i = 1; i <= 5; i++) {
            int ret = 1;
            for (int j = 1; j <= i; j++) {
                ret *= j;
            }
            sum += ret;
        }
        System.out.println(sum);
    }
}
