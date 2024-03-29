#include "iostream"
#include "string"
using namespace std;

struct data{
    int age;
    string name;

    void input(){
        cout<<"Enter Your Age: ";
        cin>>age;

        cout<<"Enter Your Name: ";
        cin>>name;
    }

    void output(int years, string user){
        cout<<"Name of User: "<<name<<endl;
        cout<<"Age of User: "<<age<<endl;
    }

    struct allow{
        char years;

        void checkVote(int age){
        if(age>18){
            cout<<"You can Vote\n"; 

        }

        else{
            cout<<"You cannot vote\n";
        }

        }
    };

};

int main(){
    int y; 
    string n;
    struct data u1;
    struct data::allow check;
   // struct allow check;

    u1.input();
    u1.output(y,n);
    check.checkVote(u1.age);

    return 0;
}