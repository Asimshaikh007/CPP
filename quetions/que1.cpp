//Write C++ program to check whether number is palindrome or not?
#include <iostream>
using namespace std;

int main() {
    int num, originalNum, reversedNum = 0, remainder;
    
    cout<<"Enter Your Number: ";
    cin>>num;
    
    originalNum = num; 
    
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }
    
    if (originalNum == reversedNum) {
        cout<<"This Is a Palindrome"<<"\n";
    } else {
        cout<<"This Is Not a Palindrome"<<"\n";
    }
    
    return 0;
}