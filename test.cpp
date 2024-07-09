#include <iostream>
using namespace std;

class MyCar{
public:
    string owner;
    string brand;
    string model;
    string color;
    int year;
    long price;
public:
    MyCar(string owner, string brand,string model,string color, int year,long price){
        this->owner=owner;
        this->brand=brand;
        this->model=model;
        this->color=color;
        this->year=year;
        this->price=price;
    }
    void display(){
        cout<<"The owner is: "<<owner<<endl;
        cout<<"The brand is: "<<brand<<endl;
        cout<<"The model is: "<<model<<endl;
         cout<<"The color is: "<<color<<endl;
        cout<<"The year is: "<<year<<endl;
        cout<<"The price is: $"<<price<<endl;
        cout<<"********************\n";
    }

};
int main()
{
    cout<<"Welcome to the parking\n";
    cout<<"********************\n";
    MyCar test1("Dave Havaty","Bugatti","La Voiture Noire","Black",2015,18700000);
    test1.display();

    MyCar test2("Mike Swicst","Rolls-Roye","Sweptail","Blue",2017,13000000);
    test2.display();

    MyCar test3("John Adison","Pagani","Zonda HP Barchetta","Yellow",2018,17500000);
    test3.display();

    MyCar test4("Coco Laly","Ferrari","Pininfarina Sergio","Red",2019,3000000);
    test4.display();

    cout<<'\n';


}

