class Demo
{
    int a=9;
    static int b=8;
    public static void main(String args[]);
    {
        int c=7;
        Demo obj=new Demo();
        System.out.println(obj.a+"Instance variable");
        System.out.println(Demo.b+"Static Variable");
        System.out.println(c+"Local Variable");
    }
}