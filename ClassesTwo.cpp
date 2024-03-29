#include<iostream>
using namespace std;

class Student{

    private:
    int rollNo=10;
    string Name;
    char section;

    public:
    void getData(){
        cout<<"Enter Your Name: ";
        cin>>Name;

        cout<<"Enter Your Roll No: ";
        cin>>rollNo;

        cout<<"Enter Your Section: ";
        cin>>section;
    }
    void display(){
        cout<<"Dear Student "<<Name<<endl;
        cout<<"Your Roll No is: "<<rollNo<<endl;
        cout<<"Your Section is: "<<section<<endl;
    }

};

int main(){
    Student waleed;
    waleed.getData();
    waleed.display();
}