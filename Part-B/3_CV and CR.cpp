#include<iostream>
using namespace std;
void val_increment(int s)
{
s=s+500;
}

void ref_increment(int &s)
{
s=s+500;
}

int main()
{
int sal=30000;
cout<<"Call by Value"<<endl;
val_increment(sal);
cout<<"Salary after increment : "<<sal<<endl;
cout<<endl;
cout<<"Call by Reference"<<endl;
cout<<"Salary before increment : "<<sal<<endl;
ref_increment(sal);
cout<<"Salary after increment : "<<sal<<endl;
return 0;
}
