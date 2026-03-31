#include <iostream>
using namespace std;

class human
{
    string name;
    int age;
    float height;
    static int count;

public:
    // human(){
    //     cout<<"constructer called";
    // }                                         a normal constructor default

    // paramaterised constructor
    human(string name, int age, float height)
    {
        this->name= name;
        this->age= age;
        this-> height= height;
    display() ; 
  }

private:
    void display()
    {
        cout << name<<" "<<age<<" "<<height<< endl;
        
        count++;
        cout<<count<<endl;

        
    }
    
};
int human :: count=0;

int main(int argc, char const *argv[])
{
    human x("rashmi kisnhu", 18, 5.5);
    human r("kisnhu", 18, 5.5);

    return 0;
}
