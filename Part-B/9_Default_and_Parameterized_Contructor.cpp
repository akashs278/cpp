#include<iostream>
using namespace std;
class rectangle
{
  int width, length;
  public:
        rectangle()
        {
            width = 4;
            length = 2;
        }
    rectangle(int a, int b)
    {
        width = a;
        length = b;
    }
    void area_rect()
    {
        int area;
        area = width*length;
        cout<<"Area of a rectangle is "<<area<<endl;
    }
};

int main()
{
    rectangle r1;
    rectangle r2(10,20);
    cout<<"Default Constructor"<<endl;
    r1.area_rect();
    cout<<"Parameterized Constructor"<<endl;
    r2.area_rect();
    return 0;
}
