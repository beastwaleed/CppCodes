#include<iostream>
#include<string>
using namespace std;

class Student{
    private: // Private member variables
    string name;
    int id;
    string courses[3];
    static int totalStudents; // Static member variable for counting total students
    
    public:

    Student(){ // Default constructor
        totalStudents++; // Increment totalStudents count when a new student is created
    }

    // Setter method to set the name of the student
    void setName(string sName){ 
        name=sName;
    }

    Student(int sId) : id(sId) {} // Parameterized constructor to initialize id

    // Setter method to set the courses of the student
    void setCourses(string sCourses[]){
        for(int i=0;i<3;i++){
            courses[i]=sCourses[i];
        }
    }

    void displayInfo(){ // Method to display student information

        int count=1;
        cout<<"\n---Name: "<<name;
        cout<<"\n---Id: "<<id;
        cout<<"\n---Courses: \n";
        for(int i=0;i<3;i++){
            cout<<"-"<<count<<"."<<courses[i]<<endl;
            count++;
        }
        cout<<endl;
    }

    static int getTotalStudents(){ // Static method to get the total number of students
       return totalStudents;
    }
};

// Initializing static member variable totalStudents
int Student:: totalStudents=3;


int main(){

    int numStudents=2;
    int numcourses=3;
    string name;
    string course[numStudents];
    Student stds[numStudents] = {
        Student(699),   // Initializing const data member (Id) in constructor initializer list
        Student(599),
        Student(533)
    };
    
    cout<<"\n-----Student Management Software-----\n\n";
    cout<<"---Enter Student Information---\n\n";
  
    for(int i = 0; i < numStudents; i++) {
        cout << "--Student " << i + 1;
        cout << "\n--Name : ";
        cin >> name;
        stds[i].setName(name);


    cout << "\n--Courses :\n";

        for (int j = 0; j < numcourses; j++) {
            cout << "Course " << j + 1 << " : ";
            cin >> course[j];
    

        stds[i].setCourses(course);

        }
        cout<<"\n-----------------\n";
    }
    cout << "\n--Total Students : " << Student::getTotalStudents() << endl;

    cout << "\n-----Displaying Student Info-----\n";
    
    // Loop to call the member function to display each student info
    for (int i = 0; i < numStudents; i++) {
        stds[i].displayInfo();
    
    }

 return 0;

}
