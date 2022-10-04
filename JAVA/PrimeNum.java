import java.util.Scanner;

public class PrimeNum {
     public static void main(String[] args) {
         Scanner sc = new Scanner(System.in);

         int num;
         boolean d=false;
        
        System.out.print("enter number :");
        num = sc.nextInt();

         for(int i=2;i<=(int)(Math.sqrt(num));i++){

             if (num%i == 0){
                d = false;
                break;
            }
            else 
            {
                d = true;
            }

         }

         if((d==true)||(num == 3 ||num == 2)) 
         {
             System.out.println("Prime Number");
            }
         else{
              System.out.println("Not Prime Number");
            }
        
     }
}
