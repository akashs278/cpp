#include<iostream>
using namespace std;
int add(int a,int b)
{
return a+b;
}

int add(int a,int b, int c)
{
return a+b+c;
}

float add(float a,float b)
{
return a+b;
}

int main()
{
cout<<"Sum of Two Integer values = "<<add(151,205)<<endl;
cout<<"Sum of Three Integer values = "<<add(24,121,64)<<endl;
cout<<"Sum of Two Float values = "<<add(25.5f,78.5f)<<endl;
return 0;
}
