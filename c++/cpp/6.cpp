//  object pointers
#include<iostream>
using namespace std;
class cricketers
{
public:
    string name;
    int runs;
    float avg;
    cricketers(string name, int runs, float avg){
        this->name=name;
        this->runs=runs;
        this->avg=avg;
    }
    cricketers(string name, int runs){
        this->name=name;
        this->runs=runs;
        // this->avg=avg;
    }
};
void change(cricketers& c){
    c.avg=96;                            //pass by reference
}
void change(cricketers* c){
    (*c).avg=96;                           //pass by reference
    c->avg=68;
}
int main(int argc, char const *argv[])
{
    cricketers c1("VIRAT KOHLI", 25000, 55.3);
    cricketers c2("ROHIT SHARMA", 18000, 45.3);
 
    cricketers* p1= &c1;
    cout<<(*p1).runs<<endl;
    (*p1).runs=27000;
    cout<<(*p1).runs<<endl;

    cout<<c1.avg<<endl;
    change(&c1);
    cout<<c1.avg<<endl;




    // int a;
    // a=4;
    // int* p = &a;
    // cout<<&a<<endl;
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // *p=8;
    // cout<<*p<<endl;
    // return 0;

    
}
