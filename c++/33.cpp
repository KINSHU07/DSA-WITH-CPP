#include<iostream>
using namespace std;

class employee{
    public:
int id;
float salary;
employee(int emid ){
    id = emid;
    salary =300.0;
}
employee(){}
};

// //syntax for derived class
// class {{derived class name}} : {{visiblity-mode}} {{base class name}}
// {
//     class, members ,data etc....
// }

// default visiblity mode is private

// private visibility : public member of base class become private member of derived class
// public class:  public member of base class become public  member of derived class


class programmer :  employee{
public:
programmer(int inpid){
    id = inpid;
}
int code =9;
void getdata(){
    cout<<id<<endl;
}
};
int main(int argc, char const *argv[])
{
    employee harry(1), kash(2);
    cout<<harry.salary<<endl;
    cout<<kash.salary<<endl;
    programmer skill(100);
    cout<<skill.code<<endl;
    skill.getdata();
    // cout<<skill.id;


    
    return 0;
}

