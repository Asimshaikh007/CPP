#include<iostream>
#include<string>
using namespace std;

class Bike{
    private:
    int year;
    string brand;
    string model;
    double price;
    double mileage;
    int weight;
    int tankCapacity;

    public:
    //constructor:is special type of function with same name as class name
    //it is used to initialize the object of class
    Bike(){
        year=2025;
        brand="Royal Enfield";
    }
    void accept( string mod,double amt,double mile,int kg,int ltr){
        model=mod;
        price=amt;
        mileage=mile;
        weight=kg;
        tankCapacity=ltr;
    }

    void display(){
        cout<<"Brand:"<<brand<<"\n";
        cout<<"Year:"<<year<<"\n";
        cout<<"Model:"<<model<<"\n";
        cout<<"Price:"<<price<<"\n";
        cout<<"Mileage:"<<mileage<<"\n";
        cout<<"Weight:"<<weight<<"\n";
        cout<<"Tank Capacity:"<<tankCapacity<<"\n";
    }
};

int main(){
    Bike b1;
    b1.accept("Classic 350",200000.00,35.00,195,13);
    b1.display();
    return 0;
}