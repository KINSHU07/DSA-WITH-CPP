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
    
    void print(){
        cout<<name<<" "<<runs<<" "<<avg<<endl;
    }
    void print(int runs){
      //  cout<<this->name<<" "<<this->runs<<" "<<endl;
      cout<<name<<" "<<runs<<" "<<endl;
    }
    int matches(){
        return runs/avg;
    }
};


int main(int argc, char const *argv[])
{
    cricketers c1("VIRAT KOHLI", 25000, 55.3);
    cricketers c2("ROHIT SHARMA", 18000, 45.3);

    c1.print(3);
    c2.print(4);
    c1.print(); 
    c2.print();
    cout<<c1.matches();
    // cout<<c1.name<<" "<<c1.runs<<" "<<endl;
    // cout<<c2.name<<" "<<c2.runs<<" "<<endl;

    return 0;
}