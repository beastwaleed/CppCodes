#include<iostream>
using namespace std;

int main(){

    int baseSalary=0,years=0,bonus=0,monthlysales=0,salesCommision=0,paycheck=0;

    cout<<"Enter Your Base Salary: ";
    cin>>baseSalary;

    cout<<"Enter How many Years have you Worked here: ";
    cin>>years;

    cout<<"Enter how much Monthly Sales have you made: ";
    cin>>monthlysales;

    if(years<=5){
      bonus+=10;
    }
    else if(years>5){
        bonus+=20;
    }

    if(monthlysales>=5000 and monthlysales<10000){
        salesCommision=0.03*monthlysales;
    }
    else if(monthlysales>=10000){
        salesCommision=0.06*monthlysales;

    }

    paycheck=baseSalary+bonus+salesCommision;

    cout<<endl;
    cout<<"Your Paycheck is $: "<<paycheck<<endl;
    cout<<"--Base Salary--"<<endl;
    cout<<"   $"<<baseSalary<<endl;
    cout<<"--Working years--"<<endl;
    cout<<"   "<<years<<endl;
    cout<<"--Bonus--"<<endl;
    cout<<"   $"<<bonus<<endl;
    cout<<"--Sales Commision--"<<endl;  
    cout<<"   $"<<salesCommision<<endl;

return 0;

}
