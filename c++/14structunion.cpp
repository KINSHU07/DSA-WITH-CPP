#include<iostream>
using namespace std;
typedef struct employee
{
    int eId;
    char name;
    float salary;
} ep;
int main(int argc, char const *argv[])
{

    enum meal{ breakfast, lunch, dinner};
    meal m1= breakfast;
    cout<<m1<<endl;
    
    ep kinshu;
    kinshu.eId=1;
    kinshu.name= 'k';
    kinshu.salary=120000000;

    cout<<kinshu.eId <<endl;
    cout<<kinshu.name<<endl;
    cout<<kinshu.salary<<endl;

    return 0;
}



