#include<iostream>
#include<string>
using namespace std;

class car{
    public:
    string name;
    int price;
    int seat;
    int bhp;
};

void print(car c){
    cout<<c.name<<" "<<c.price<<" "<<c.seat<<" "<<c.bhp<<" "<<endl;
}

void change(car& c){             // as default is is passs by value but by passing address it can change the value of function
    c.name="AUDI A8";
    c.price= 200000000;
}
int main(int argc, char const *argv[])
{
    car thar, c2,c3;       // car is class and thar c2 c3 is objects
    thar.name= "kisnhu";
    thar.price= 1500050;
    thar.seat= 5 ;
    thar.bhp= 6000;
     
    print(thar);
    change(thar);             // due to pass by reference it can change the value by the function
    print(thar);

    // cin>>c3.name;
    // cin>>c3.price;
    // cin>>c3.seat;
    // cin>>c3.bhp;

    // cin>>c2.name;
    // cin>>c2.price;
    // cin>>c2.seat;
    // cin>>c2.bhp;
   
    // print(thar);
    // print(c2);
    // print(c3);


    return 0;
}
