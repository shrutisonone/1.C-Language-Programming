import java.util.Scanner;
class Demo
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter number");
        int x=sc.nextInt();
        boolean is prime=True;
        for(int i=2;i<num;i++)
        {
            if(x%i==d)
            {
                is prime=false;
                break;
            }
        }
          if(is prime)
        System.out.println("Prime");
          else 
        System.out.println("Not Prime");
    }
}