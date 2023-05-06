
class FinalizeDemo
{
    public static void main(String A[])
    {
        Marvellous mobj1 = new Marvellous();
        Marvellous mobj2    = new Marvellous(11,21);
        System.gc();
    }
}

class Marvellous 
{
    public int no1;
    public int no2;
    public Marvellous();
    {
        System.out.println("Inside default constructor");
        no1 = 0;
        no2 = 0;
    }
    public Marvellous(int a, int b)
    {
        System.out.println("Inside parametrised constructor");
    }
    protected void finalize()
    {
        System.out.println("Inside finalize methode");
    }
}
