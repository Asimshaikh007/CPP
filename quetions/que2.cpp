//Write a C++ program to print right oriented right angled pyramid.
// 1
// 2 3
// 4 5 6
// 7 8 9 10
#include<iostream>
using namespace std;
int main(){
    int a=1;
    for(int i=0;i<5;i++){
        for(int j=0;j<i;j++){
            cout<<a<<"";
            a++;
        }
        cout<<"\n";
    }
    return 0;
}