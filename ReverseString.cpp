#include<iostream>
using namespace std;

int main(){

    string sentence;
    cout<<"Enter any Sentence to Reverse it Letters: ";
    getline(cin,sentence);

    int length=sentence.length();


    cout<<"Reverse of Sentence\n";
    for(int i=length;i>=0;i--){
        cout<<sentence[i];
    }
cout<<endl;
}