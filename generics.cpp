using namespace std;

#include<iostream>

int AdditionI(int i, int j)
{
    int result;
    result = i + j; 
    return result;

}

int AdditionF(float i, float j)
{
    float result;
    result = i + j; 
    return result;
    
}

int AdditionD(double i, double j)
{
    double result;
    result = i + j; 
    return result;
    
}
int main()
{
    int i;
    float f;
    double d;

    i = AdditionI(10,11);
    cout<<i<<"\n";

    f = AdditionF(10.7f,89.5f);
    cout<<f<<"\n";

    d = AdditionD(10.7,70.8);
    cout<<d<<"\n";

    return 0;
}