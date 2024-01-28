class Demo
{
    public void add(int a,int b)
    {
        System.out.println((a+b)+"method1");
    }
    public void add(int a,int b,int c)
    {
        System.out.println((a+b)+"method 2");
    }
    public void add(float a,float b)
    {
        System.out.println((a+b)+"method 3");
    }
    public static void main(String args[])
    {
        Demo obj=new Demo();
        obj.add(4,3)
        obj.add(5,4,6);
        obj.add(2.1,3.6);
        
    }
}
