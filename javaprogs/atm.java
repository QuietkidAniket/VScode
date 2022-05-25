import java.util.Scanner;
class atm{
    public static void main(){
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int K = sc.nextInt();
        int arr[] = new int[N]; 
        for(int i = 0; i < N; i++){
            arr[i] = sc.nextInt();
        }
        for(int i : arr){
            if(K -i < 0)System.out.print("0");
            else {
                K -= i;
                System.out.print("1");
        }
            System.out.println();
        }
        sc.close();
    }
}