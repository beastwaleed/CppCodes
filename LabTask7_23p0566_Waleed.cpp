#include <iostream>
using namespace std;
class OperatorLab{
    private:
    int value1, value2;

    public:
    OperatorLab(int val1=0, int val2 =0){
        value1=val1;
        value2=val2;
    }

    // Prefix increment operator (++count)
    void operator++(){
        ++value1;
        ++value2;
    }

    // Postfix increment operator (count++)
    void operator ++(int){
        value1++;
        value2++;

    }

    // Prefix decrement operator (--count)
    void operator--(){
        --value1;
        --value2;
    }
    
    // Prefix decrement operator (count--)
    void operator --(int){
        value1--;
        value2--;

    }

    // Less than operator (<)
    bool operator < (const OperatorLab &count){
        bool check=false;
        if((value1<count.value1) && (value2 < count.value2)){
            check = true;
        }
        else {
            return check;
        }
    }

    // Greater than operator (>)
    bool operator > (const OperatorLab &count){
        bool check=false;
        if((value1<count.value1) && (value2 > count.value2)){
            check = true;
        }
        else {
            return check;
        }
    }

    // Display function
    void display(){
        cout << "Count: " << value1 <<" and "<<value2 <<endl;
    }
};

int main(){

    OperatorLab count1(2,3), count2(10,6),count3;
    cout<<"\nPrefix Increment-- ";
    ++count1;
    count1.display();
    cout<<"\nPostfix Increment-- ";
    count1++;
    count1.display();

     cout<<"\nPrefix Decrement-- ";
    --count1;
    count1.display();
    cout<<"\nPostfix Decrement-- ";
    count1--;
    count1.display();
    cout<<"\nLogical Operator--\n";
    if((count1 > count2) == true) {
        cout<<"Object 1 is greater tha Object 2\n\n";
    }
    else if((count1 < count2) == true) {
        cout<<"Object 2 is greater tha Object 1\n\n";
    }
    
    return 0;

}