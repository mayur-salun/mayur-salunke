import java.util.*;

class Program252
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the size of array");
        int size = sobj.nextInt();
    }
}

abstract class ArrayX
{
    public int Arr[];

    public ArrayX(int size)
    {
        Arr = new int[size];
    }
    public void Accept()
    {

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the elements");
        for(int i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
    }
    public void Display()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Entered data is : ");
        for(int i = 0; i < Arr.length; i++)
        {
            System.out.println(Arr[i]);
        }
    }

}

