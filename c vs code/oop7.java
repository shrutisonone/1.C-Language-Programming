interface printtable
{
    void print();
}
interface showtable
{
    void show();
}
class Demo implements printtable ,showable 
{
    public void print()
    {
        System.out.println("Hello");
    }
    public static void main(String args[])
    {
        Demod=new Demo();
        d.show();
        d.print();
    }
}