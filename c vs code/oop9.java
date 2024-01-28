import java.io.*;
class filewrite
{
    public static void main(String args[])
    {
        filewriter fw=new filewriter("sbc.txt");
        fw.write(100);
        fw.write("CSE in SSGMCE");
        fw.write("\n");
        char[]ch={'a','b','c',d},
        fw.write(ch);
        fw.write("\n");
        fw.flush();
        fw.close();
    }
}