Public class Demo
{
    pbulic static void main(String args[])
    {
        int arr[]=new int[]{7,,9,3,8,2}
        int temp=0;
        System.out.println("Elements of array");
        for(int i=0;i<arr.length;i++)
        System.out.println(arr[i]+"");

    }
    for(int i=0;i<arr.length;i++)
    {
        for(int j=i+1;j<arr.lenght;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    System.out.println();
    System.out.println("Elements of array after sorting are ");
    for(int i=0;i<array.length;i++)
    {
        System.out.println(arr[i]+"");
    }
}