/*Assume that you want to check whether the number is prime or not. 
Write a program that asks for numbers repeatedly. When it finishes 
checking a number the program asks if the user wants to do another 
calculation. The response can be 'y' or 'n'. Don't forget to use the 
object-oriented concept.*/
#include<iostream>
using namespace std;
class Prime{
    private:
    int n;
    public:
    void input(){
        cout<<"Enter a number: ";
        cin>>n;
    }
    void check(){
        int i;
        bool prime=true;
        if (n<=1)
        prime=false;
        for (i=2;i<=n/2;i++){
            if(n%i==0){
                prime=false;
                break;
            }
        }
        if(prime)
        cout<<n<<" is a prime number."<<endl;
        else
        cout<<n<<" is not a prime number."<<endl;
    }
};
int main(){
    Prime p;
    char choice;
    do{
        p.input();
        p.check();
        cout<<"Do you want to check another number? (y/n): ";
        cin>>choice;
    }
    while(choice=='y');
    return 0;
}