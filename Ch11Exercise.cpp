/* Linda’s gift store specializes in wrapping small packages. For simplicity, we
 assumethat apackageisintheshapeofaboxwithaspecificlength,width,and
 height. We will write a program that uses the class boxType to store the
 dimensions of a package. The program will ask the user to input the dimen
sions of the package and the cost (per square foot) to wrap the package. The
 program will then output the cost of wrapping the package. (The program
 assumes that the minimum cost of wrapping a package is $1.00.)
 */

#include<iostream>
#include<string>
using namespace std;

class boxType{
    private:
    double length,width, height;
    public:
    void setData(double l, double w, double h){
        length=l;
        width=w;
        height=h;
    }

    double area(){
      return 2*((length*width)+(length*height)+(height*width));
    }

};

int main(){
    double l, w,h;
    double billing;
    double wrapCost;
    boxType package;
    cout<<"Enter the Length, Width and Height: ";
    cin>>l>>w>>h;
    package.setData(l,w,h);
    cout<<"Enter The Wrap Cost: ";
    cin>>wrapCost;
    billing=wrapCost*package.area()/100;
    if(billing<1.00){
        billing=1.00;
    }
    cout<<"Amount due : $"<<billing<<endl;

    return 0;
}