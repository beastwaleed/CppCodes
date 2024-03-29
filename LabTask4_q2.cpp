#include<iostream>
#include <string>
using namespace std;

struct Employee{ // Define a struct to represent Employee data
    string name; // Employee's name
    double ratings[3]; // Array to store ratings for communication, teamwork, and problem-solving
};

void display_data(Employee emp[], int noEmployee);
void change_ratings(string empName, Employee emp[], int noEmploye);
void calc_average_rating(Employee emp[], int noEmployee);

int main(){
    int noEmployee;
    string name;

    cout<<"Enter Number of Employees: ";
    cin>>noEmployee;

    // Create an array of Employee structs
    struct Employee emp[noEmployee];

    // Initialize employee data
    for(int i=0;i<noEmployee;i++){
    cout << "Enter Name for Employee "<<i+1 <<": ";
    cin>>emp[i].name;
    
        cout<<"--Enter Communication Ratings: ";
        cin >>emp[i].ratings[0];
        cout<<"--Enter Teamwork Ratings: ";
         cin>>emp[i].ratings[1];
        cout<<"--Enter Problem-Solving Ratings: ";         
         cin>>emp[i].ratings[2];
    }
    
display_data(emp, noEmployee); // Display initial employee data
change_ratings(emp[0].name, emp, noEmployee); // Change ratings for an employee
calc_average_rating(emp, noEmployee); // Calculate and display average ratings after changes

// Display employee data after rating changes
cout<<"\nDisplaying the Data After Rating Changings\n";
display_data(emp, noEmployee);

    return 0;
}

// Function to display employee data
void display_data(Employee emp[], int noEmployee) {
    for(int i=0;i<noEmployee;i++){
        cout<<"Employee "<< i+1 <<" Details: \n";
        cout<<"NAME: "<<emp[i].name;
        cout<<"\nREVIEWS:\n";
        cout<<"Communication | Teamwork | Problem-Solving: \n";
        for(int j=0;j<3;j++){
            cout<<emp[i].ratings[j]<<"\t\t";
        }
        cout<<endl<<endl;
    }
}

// Function to change ratings for a specific employee
void change_ratings(string empName, Employee emp[], int noEmployee)
{
    double r1,r2,r3;

  cout<<"Enter the Employee Name for Changing Rating: ";
  cin>>empName;
    
    for(int i=0;i<noEmployee;i++){
         if(empName==emp[i].name){
   
         cout<<"Change Ratings of Employee "<< empName <<": \n";
     
        cout<<"\nEnter Communication Rating for "<<empName<<": ";
        cin>>r1;
       
        cout<<"Enter Teamwork Rating for "<<empName<<": ";
        cin>>r2;
        
        cout<<"Enter Problem-Solving Rating for "<<empName<<": ";
        cin>>r3;

        emp[i].ratings[0]=r1;
        emp[i].ratings[1]=r2;
        emp[i].ratings[2]=r3;

        cout<<"\nRating Changed Successfully!\n";         
         }
    }
    
    // If employee not found
    cout<<"Sorry, Employee Not Found with Name: " << empName<<"\n\n";

 }

// Function to calculate and display average ratings for all employees
void calc_average_rating(Employee emp[], int noEmployee) {
    double avgRating[3]={0}; // Array to store average ratings
    double sum[3]={0}; // Array to store sum of ratings for each category

    cout<<"~~~~AVERAGE RATING OF EMPLOYEES~~~~~\n\n";
    for(int i=0;i<noEmployee;i++){
        cout<<emp[i].name<<" |\t";
        for(int j=0;j<3;j++){
        sum[i]+=emp[i].ratings[j];
    }
    }
     cout<<endl;

    for(int i=0;i<3;i++){
        avgRating[i]=sum[i]/3.0; // Calculate average rating
    }

    for(int i=0;i<noEmployee;i++){
     cout<<avgRating[i]<<"  \t  ";
    }
    cout<<endl<<endl;
}