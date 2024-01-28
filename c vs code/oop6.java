//method overriding
class Parent
{
    void show()
    {
        System.out.println("Parent Class");
    }
}
class child extend Parent
{
    void show()
    {
        System.out.println("child class");
    }
}
class main
{
    public static void main(String args[])
    {
        parent P=new Parent();
        p.show();
        child c=new child();
        c.show();
    }
}