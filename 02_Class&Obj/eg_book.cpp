#include<iostream>
using namespace std;
class Book{
    private:
    
    public:
    int bid;
    string bname;
    string bauthor;
    string b_ori_lang;
    double bprice;
    public:
    void accept(){
        cout<<"Enter Book Details:";
        cin>>bid>>bname>>bauthor>>b_ori_lang>>bprice;
    }
    void display(){
        cout<<"book id:"<<bid<<"\n"<<"book name:"<<bname<<"\n"<<"book author:"<<bauthor<<"\n"<<"book original language:"<<b_ori_lang<<"\n"<<"book price:"<<bprice<<"\n";
    }
};
int main(){
    Book b1,b2;
    b1.bid=1003;
    b1.bname="The Alchemist";
    b1.bauthor="Paulo Coelho";
    b1.b_ori_lang="Portuguese";
    b1.bprice=250.00;
    b1.display();
    b2.accept();
    b2.display();
    return 0;
}