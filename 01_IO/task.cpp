//Wriet a program to find the sum of the series 1+(1+2)+(1+2+3)+...+(1+2+3+...+n) for a given n.
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the limit of n:";
    int n;
    cin>>n;
    int total=0;
    for(int i=1;i<=n;i++){
        int j=1;
        while(j<=i){
            total+=j;
            j++;
        }
    }
    cout<<"Total:"<<total<<"\n";
    return 0;
}