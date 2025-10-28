#include<iostream>
using namespace std;
class test
{
    int num;
    public:
        test()
        {
            num=10;
        }
        void operator++()
        {
            num = num+5;
        }
        void display()
        {
            cout<<"The count is : "<<num;
        }
};

int main()
{
    test t1;
    ++ t1;
    t1.display();
    return 0;
}
