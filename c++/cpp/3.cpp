#include<iostream>
#include<string>
using namespace std;

class car{
    public:
    string name;
    int price;
    int seat;
    float bhp;

    car(string n, float b, int p, int s){
        name=n;
        price=p;
        seat=s;
        bhp=b;
    }
    car(){

    }
    car(float b, int p, int s, string n){
        name=n;
        price=p;
        seat=s;
        bhp=b;   
    }
    car(float b, string n){
        name=n;
        bhp=b;   
    }
};

void print(car c){
    cout<<c.name<<" "<<c.price<<" "<<c.seat<<" "<<c.bhp<<" "<<endl;
}
int main(int argc, char const *argv[]) 
{
     car thar("kisnhu", 2333.8, 3, 333);
     print(thar);

    car c1;
    c1.name="bmw";
    c1.price=12222;
    c1.seat=4;
    c1.bhp=233;
    print(c1);

    car c2(c1);         // deep copy creates here !!!!
    c2.bhp=69;
    print(c2);
    
    car c3(2.3, "sergio");
    c3.price=2332;
    c3.seat=6;
    print(c3);
    
    return 0;
}
