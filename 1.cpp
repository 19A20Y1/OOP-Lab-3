/* Write a simple program that converts the temperature in Celsius 
scale to Fahrenheit scale and vice versa using the basic concept of 
class and object. Make separate classes for Celsius and Fahrenheit 
which will have the private members that hold the temperature value
 and make conversion functions in each class for conversion from one 
 to another. For example, you need to have a function toFahrenheit() 
 in class Celsius that converts to Fahrenheit scale and returns the 
 value.*/
 #include<iostream>
 using namespace std;
 class Cels{
    float temp,x;
    public:
    void input(){
        cout<<"Enter temperature in Celsius: ";
        cin>>temp;
    }
    void toFahr(){
        x=temp;
        x=x*9/5+32;
    }
    void output(){
        cout<<temp<<" degree celcius = "<<x<<" Fahrenheit"<<endl;
    }
 };
class Fahr{
    float temp,x;
    public:
    void input(){
        cout<<"Enter temperature in Fahrenheit: ";
        cin>>temp;
    }
    void toCels(){
        x=temp;
        x=(x-32)*5/9;
    }
    void output(){
        cout<<temp<<" degree Fahrenheit = "<<x<<" Celsius"<<endl;
    }
 };
 int main(){
    Cels c;
    Fahr f;
    c.input();
    c.toFahr();
    c.output();
    f.input();
    f.toCels();
    f.output();
    return 0;
 }