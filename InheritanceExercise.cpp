#include<iostream>
#include<cmath>
using namespace std;

class SimpleCal{
    protected:
        int a,b;
    public:
        void setData1(int n1, int n2){
            a=n1;
            b=n2;
        }
    int sumNum(){
        return a+b;
    }

    int subtractNum(){
        return a-b;
    }

    int mulNum(){
        return a*b;
    }

    float divNum(){
        return (float)a/b;
    }

    void displaySimple(){
        cout<<"--Sum: "<<a <<" + "<<b<<" = "<<sumNum()<<endl;
        cout<<"--Difference: "<<a <<" - "<<b<<" = "<<subtractNum()<<endl;
        cout<<"--Multiplication: "<<a <<" x "<<b<<" = "<<mulNum()<<endl;
        cout<<"--Division: "<<a <<" / "<<b<<" = "<<divNum()<<endl;
    }

};

class ScientificCal : public SimpleCal{
    protected:
        int x,y;
    public:

        void set2Data(int n1, int n2){
            x=n1;
            y=n2;
        };

        double square1(){
            return x*x;
        }
    
        double square2(){
            return y*y;
        }

        double cube1(){
            return x*x*x;
        }

        double cube2(){
            return y*y*y;
        }

        float squareRoot1(){
            return sqrt(x);
        }

        float squareRoot2(){
            return sqrt(y);
        }

        float cubeRoot1(){
            return cbrt(x);
        }
        
        float cubeRoot2(){
            return cbrt(y);
        }

    public:
        void displayScientific(){
            cout<<"The Square of "<< x<<" is: "<<square1()<<endl;
            cout<<"The Square of "<< y<<" is: "<<square2()<<endl;
            cout<<"The Square Root of "<< x<<" is: "<<squareRoot1()<<endl;
            cout<<"The Square Root of "<< y <<" is: "<<squareRoot2()<<endl;
            cout<<"The Cube of "<< x <<" is: "<<cube1()<<endl;
            cout<<"The Cube of "<< y<<" is: "<<cube2()<<endl;
            cout<<"The Cube Root of "<< x<<" is: "<<cubeRoot1()<<endl;
            cout<<"The Cube Root of "<< y<<" is: "<<cubeRoot2()<<endl;
        
        }

};

class Hybrid :public ScientificCal{
    public:
    void set(int num1, int num2){
    setData1(num1,num2);
    set2Data(num1,num2);
    }

    void process(){
        //Processing Simple Calculator Class
        sumNum();
        subtractNum();
        mulNum();
        divNum();
        //Processing Scientific Calculator Class
        square1();
        square2();
        squareRoot1();
        squareRoot2();
        cube1();
        cube2();
        cubeRoot1();
        cubeRoot2();
    }

    void display(){
        cout<<"\n----------------\n";
        displaySimple();
        cout<<"\n----------------\n";
        displayScientific();
    }
};

int main(){
    int number1, number2;

    cout<<"Enter Two Numbers: ";
    cin>>number1>>number2;
    Hybrid calc;
    calc.set(number1,number2);
    calc.process();
    calc.display();

    return 0;
}
