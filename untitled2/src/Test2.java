import java.util.Random;
import java.util.Scanner;

/**
 * Created with Intellij IDEA
 * User:GhostWZH
 * Date:2023--15
 * Time:13:32
 */
public class Test2 {
    public static void main(String[] args) {
        Scanner a = new Scanner(System.in);
        int b = a.nextInt();
        int sum = 1;
        for (int i = 1; i <=b; i++) {
            sum *= i;
        }
        System.out.println(sum);
    }
    public static void main1(String[] args) {
        Scanner scan = new Scanner(System.in);
        Random random = new Random();
        int n = random.nextInt(100);
        while(true){
            System.out.println("please put in");
            int a = scan.nextInt();
            if(a>n){
                System.out.println("big");
            }
            else if (a<n){
                System.out.println("small");
            }
            else{
                System.out.println("find it");
                break;
            }
        }
    }
}