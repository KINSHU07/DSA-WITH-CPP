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
};

int main(int argc, char const *argv[])
{
    cricketers c1("VIRAT KOHLI", 25000, 55.3);
    cricketers* c2= new cricketers("ROHIT SHARMA", 18000, 45.3);

    cout<<c1.name<<" "<<c1.runs<<" "<<c1.avg<<endl;
    // cout<<c2.name<<" "<<c2.runs<<" "<<c2.avg<<endl;     it will show error because in c2 memory is allocated during the compile time
   cout<<(*c2).name<<" "<<(*c2).runs<<" "<<(*c2).avg<<endl;
   cout<<c2->name<<" "<<c2->runs<<" "<<c2->avg<<endl;
   
    int* ptr= new int(69);  //memory allocated in run time
    cout<<*ptr<<endl;

    // int s=3;
    // int* ptr =&s;
    // cout<<&s<<endl;
    // cout<<*ptr<<endl;       // memory allocated in compile time
 
    


    
    
}
