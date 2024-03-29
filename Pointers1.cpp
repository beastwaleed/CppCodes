#include<iostream>
#include <string>
using namespace std;

int main(){
 
 string meal="pizza";
 string *food;
 food=&meal;

 cout<<"Memory Address of Meal: "<<food<<endl;
 cout<<"Value of Meal: "<<*food;

}