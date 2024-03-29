#include<iostream>
#include<string>
using namespace std;

class Student{
    protected:
    int rollNumber;
    public:
    void set_rollNumber(int n){
        rollNumber=n;
    }

    void get_rollNumber(void){
        cout<<"--Roll Number is: "<<rollNumber<<endl;
    }

};

class Exam : public Student{
    protected:
    float math;
    float physics;
    public:
    void setMarks(float m1, float m2){
        math=m1;
        physics=m2;
    }

    void getMarks(){
        cout<<"--Math Marks: "<<math<<endl;
        cout<<"--Physics Marks: "<<physics<<endl;
    }

};

class Result : public Exam{
    private:
        float percentage;
    public:
        void displayResult(){
            get_rollNumber();
            getMarks();
            cout<<"--Result is: "<<(math+physics)/2<<"%"<<endl;
        }
};

int main(){

    Result s1;
    s1.set_rollNumber(0566);
    s1.setMarks(94,90);
    s1.displayResult();


 return 0;
}