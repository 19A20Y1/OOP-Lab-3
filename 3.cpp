/*Create a class called carpark that has int data member for car id, 
int data member for charge/hour, and float data member for the parked 
time. Make functions to set data members and show the charges and parked 
hours of the corresponding car id. Make functions for setting and showing 
the data members. Member function should be called from other functions.*/
#include<iostream>
using namespace std;
class CarPark{
    int carId,chargePerHour;
    float parkedTime;
    public:
    void setCarId(int id){
        carId=id;
    }
    void setChargePerHour(int charge){
        chargePerHour=charge;
    }
    void setParkedTime(int time){
        parkedTime=time;
    }
    void showCharges(){
        cout<<" Car ID: "<<carId<<endl;
        cout<<" Charge Per Hour: "<<chargePerHour<<endl;
        cout<<" Parked Time: "<<parkedTime<<endl;
        cout<<" Total Charge: "<<chargePerHour*parkedTime<<endl;
    }
};
int main(){
    CarPark cp1;
    int id,charge,time;
    cout<<"Enter car id: ";
    cin>>id;
    cp1.setCarId(id);
    cout<<"Enter charge Per Hour: ";
    cin>>charge;
    cp1.setChargePerHour(charge);
    cout<<"Enter Parked Time: ";
    cin>>time;
    cp1.setParkedTime(time);
    cout<<"-------------------------------"<<endl;
    cp1.showCharges();
    cout<<"-------------------------------"<<endl;
    return 0;
}