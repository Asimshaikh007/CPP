#include <iostream>
using namespace std;
class Emp{
    private:
    int eid;
    string ename;
    float esal;
    public:
    void accept(){
        cout<<"Enter Employee Details:";
        cin>>eid>>ename>>esal;
    }
    void display(){
        cout<<"Employee Details:"<<eid<<""<<ename<<""<<esal<<"";
    }
};
int main(){
    Emp e1;
    e1.accept();
    e1.display();
    return 0;
}