#include <iostream>
using namespace std;
int main(){
    //output
    cout<<"Asim Shaikh"<<"\n";

    //input
    int num;
    cout<<"Enter a number:";
    cin>>num; // cin is used to take input from the user
    cout<<"You entered: "<<num<<"\n";

    //Addition
    int a,b,c;
    cout<<"Enter a first number:";
    cin>>a;
    cout<<"Enter a second number:";
    cin>>b;
    c=a+b;
    cout<<"Addition of "<<a<<" and "<<b<<" is "<<c<<"\n";

    //Subtraction
    c=a-b;
    cout<<"Subtraction of "<<a<<" and "<<b<<" is "<<c<<"\n";
    
    //Multiplication
    c=a*b;
    cout<<"Multiplication of "<<a<<" and "<<b<<" is "<<c<<"\n";
    
    //Division
    c=a/b;
    cout<<"Division of "<<a<<" and "<<b<<" is "<<c<<"\n";
    
    //mod
    c=a%b;
    cout<<"Mod of "<<a<<" and "<<b<<" is "<<c<<"\n";
    return 0;
}