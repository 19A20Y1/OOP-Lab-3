/*Assume that an object represents an employee report that contains
 information like employee id, total bonus, total overtime in a particular
  year. Use an array of objects to represent n employees' reports. Write 
  a program that displays the report. Use setpara() member function to set 
  report attributes by passing the arguments and member function 
  displayreport() to show the report according to the parameter passed. 
  Display the report in the following format.
An employee with ... ... ... has received Rs ... ... ...as a bonus
and
had worked ... ... ... hours as overtime in the year ... ... ...*/
#include<iostream>
using namespace std;
class Employee{
    int id;
    float bonus, ot;
    public:
    void setpara(){
        cout<<"Enter employee id:";
        cin>>id;
        cout<<"Enter employee bonus:";
        cin>>bonus;
        cout<<"Enter employee overtime:";
        cin>>ot;
    }
    void displayreport(){
        cout<<"An employee with employee id  "<<id<<" has received Rs."<<bonus<<" as a bonus and had worked "<<ot<<" hours as overtime"<<endl;
    }
};

int main(){
    int n;
    cout<<"Enter the number of employee:";
    cin>>n;
    Employee* emp=new Employee[n];

    for(int i=0; i<n; i++){

    emp[i].setpara();
    }
    for(int i=0; i<n; i++)
    emp[i].displayreport();
    //}

    return 0;
}