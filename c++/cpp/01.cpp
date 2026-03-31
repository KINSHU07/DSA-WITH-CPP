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
int main(int argc, char const *argv[])
{
    car thar, c2,c3;       // car is class and thar c2 c3 is objects
    cin>>thar.name;
    cin>>thar.price;
    cin>>thar.seat;
    cin>>thar.bhp;

    cin>>c3.name;
    cin>>c3.price;
    cin>>c3.seat;
    cin>>c3.bhp;

    cin>>c2.name;
    cin>>c2.price;
    cin>>c2.seat;
    cin>>c2.bhp;
   
    print(thar);
    print(c2);
    print(c3);


    return 0;
}
