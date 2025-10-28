#include<iostream>


using namespace std;

class student{
    int regno;
    char name[15],dob[15],course[15];
    public:
        void accept ();
        void display ();
};

void student::accept(){
    cout<<"Enter student details."<<endl;
    cout<<"Reg no : ";
    cin>>regno;
    cout<<"Name : ";
    cin>>name;
    cout<<"Date pf Birth : ";
    cin>>dob;
    cout<<"Course : ";
    cin>>course;
}

void student::display(){
    cout<<"Student details are"<<endl;
    cout<<"Reg no : "<<regno;
    cout<<"Name : "<<name;
    cout<<"Date pf Birth : "<<dob;
    cout<<"Course : "<<course;
}
int main()
{
    student s1;
    s1.accept();
    s1.display();
    return 0;
}