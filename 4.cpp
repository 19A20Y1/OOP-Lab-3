/*Write a program with classes to represent a circle, rectangle, and 
triangle. Each class should have data members to represent the actual 
objects and member functions to read and display objects, find perimeter 
and area of the objects, and other useful functions. Use the classes to 
create objects in your program.*/
#include<iostream>
#include<cmath>
#define pi 3.1415
using namespace std;
class Circle{
    int r;
    public:
    void input(){
        cout<<"Enter the radius:";
        cin>>r;
    }
    void perimeter(){
        input();
        cout<<"The perimeter is "<<2*pi*r<<endl;
    }
    void area(){
        cout<<"The area is "<<pi*r*r<<endl;
    }
};
class Rectangle{
    int l,b;
    public:
    void input(){
        cout<<"Enter the length:";
        cin>>l;
        cout<<"Enter the bredth:";
        cin>>b;
    }
    void perimeter(){
        input();
        cout<<"The perimeter is "<<2*(l+b)<<endl;
    }
    void area(){
        cout<<"The area is "<<l*b<<endl;
    }
};
class Triangle{
     int a,b,c;
     int s;
    public:
    void input(){
        cout<<"Enter the first side:";
        cin>>a;
        cout<<"Enter the seocnd side:";
        cin>>b;
        cout<<"Enter the third side:";
        cin>>c;
    }
    void perimeter(){
        input();
        cout<<"The perimeter is "<<(a+b+c)<<endl;
    }
    void area(){
        s=(a+b+c)/2;
        int A=sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<"The area is "<<A<<endl;
    }
};

int main(){
Circle c1;
cout<<"CIRCLE:"<<endl;
c1.perimeter();
c1.area();
cout<<endl;

Triangle t1;
cout<<"TRIANGLE:"<<endl;
t1.perimeter();
t1.area();
cout<<endl;

Rectangle r1;
cout<<"RECTANGLE:"<<endl;
r1.perimeter();
r1.area();

    return 0;
}