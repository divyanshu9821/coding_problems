// codeforces, not participated contest question
import java.util.Scanner;

public class threeDoors {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int testCases = sc.nextInt();
        for (int i = 0; i < testCases; i++) {

            int keyGiven = sc.nextInt();
            int[] arr = new int[3];

            for (int j = 0; j < 3; j++) {
                arr[j] = sc.nextInt();
            }

            int sum = 0;
            for (int j = 0; j < 3; j++) {
                sum = sum + keyGiven;
                keyGiven = arr[keyGiven-1];
            }

            if (sum == 6)
                System.out.println("YES");
            else
                System.out.println("NO");

            // int keyGiven = sc.nextInt();
            // int d1 = sc.nextInt();
            // int d2 = sc.nextInt();
            // int d3 = sc.nextInt();
            // if(keyGiven==1&&d1==2&&d2==3)
            //     System.out.println("YES");
            // else if(keyGiven==1&&d1==3&&d3==2)
            //     System.out.println("YES");
            // else if(keyGiven==2&&d2==1&&d1==3)
            //     System.out.println("YES");
            // else if(keyGiven==2&&d2==3&&d3==1)
            //     System.out.println("YES");
            // else if(keyGiven==3&&d3==1&&d1==2)
            //     System.out.println("YES");
            // else if(keyGiven==3&&d3==2&&d2==1)
            //     System.out.println("YES");
            // else
            //     System.out.println("NO");
        }
    }
}