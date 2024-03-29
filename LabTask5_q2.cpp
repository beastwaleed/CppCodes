#include<iostream>
#include<string>
using namespace std;

class Employee{
    private: // Private access specifier
    int Id;
    string name;
    string jobTitle;
    float hoursWorked;

    public: // Public access specifier
        //getters
    int getId() const { // Getter method for employee ID
        return Id;
    };

    string getName() const { // Getter method for employee name
        return name; 
    }

    string getjobTitle() const { // Getter method for employee job title
        return jobTitle;
    }

    float gethoursWorked() const { // Getter method for hours worked by employee
        return hoursWorked;
    }

        //setters

    void setId(int empId){ // Setter method for employee ID
        Id=empId;
    }

    void setName(string empName){ // Setter method for employee name
        name=empName;
    }

    void setJobTitle(string empJobTitle){ // Setter method for employee job title
        jobTitle=empJobTitle;
    }

    void sethoursWorked(float empHoursWorked){ // Setter method for hours worked by employee
        hoursWorked=empHoursWorked;
    }

    double calc_Salary(){ // Method to calculate employee salary
        double salary,hourlyRate;
        int baseHours=40; // Define base hours as 40

        cout<<"~~~~Calculate Salary~~~~\n\n";
        cout<<"Enter Hourly Rate: ";
        cin>>hourlyRate;

        if(hoursWorked<=baseHours){ // If hours worked are less than or equal to base hours
            salary=hoursWorked*hourlyRate; // Calculate salary without overtime
        }
        
        
        else if(hoursWorked>40){ // Calculate salary without overtime
        
            double overTime=hoursWorked-baseHours; // Calculate overtime hours
            salary=hourlyRate*overTime*2; //salary for overtime hours
            salary+= hourlyRate*baseHours; // Add base salary to overtime salary
        
        
        }

        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
        return salary;  // Return the calculated salary


    }

};

void displayData(Employee empdata[], int numEmp, double salary[]){ // Function to display employee data
    cout<<"----- Displaying All Employees -----\n\n";
    for(int i=0;i<numEmp;i++){      // Loop through each employee
        cout<<"--- Employee : "<<i+1<<"---"; // Print employee number
        cout<<"\n-- Name: "<<empdata[i].getName(); // Print employee name
        cout<<"\n-- Salary: "<<salary[i]<<endl; // Print employee salary
        cout<<"\n";
    }
}

int main(){
    
int noEmployees;
int id;
string name;
string jobt;
float hours;
int hourlyRate;

cout<<"Enter Number of Employees: ";
cin>>noEmployees;

Employee emps[noEmployees]; // Declare an array of Employee objects
double salary[noEmployees]; // Declare an array to store salaries of employees

for(int i=0;i<noEmployees;i++){  // Loop to input details for each employee
    cout<<"~~~Enter Details for Employee "<<i+1<<"~~~\n";
    cout<<"--Enter Id of Employee : ";
    cin>>id;

    emps[i].setId(id); // Set employee ID
    
    cout<<"--Enter Name of Employee: ";
    cin.ignore();
    
    getline(cin,name);  // Ignore any previous newline character in input buffer
    emps[i].setName(name); // Set employee name
    
    cout<<"--Enter Job Title of Employee: ";
    cin.ignore();
    
    getline(cin,jobt); // Set employee job title
    emps[i].setJobTitle(jobt);
    
    cout<<"--Enter Hours Worked by Employee: ";
    cin>>hours;
    
    emps[i].sethoursWorked(hours); // Set hours worked by employee
    cout<<"\n\n";

    salary[i]=emps[i].calc_Salary(); // Calculate salary for current employee

}

displayData(emps,noEmployees,salary); // Display employee data

}