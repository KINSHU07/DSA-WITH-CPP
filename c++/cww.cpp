#include<bits/stdc++.h>
using namespace std;
 
class student{
public:
string name;
double *cgpaPtr;

student(string name, double cgpa){
    this->name = name;
    cgpaPtr = new double;
    *cgpaPtr = cgpa;

}
//destructor
~student(){
    cout<<"hi i m kinshu the destructor";
    delete cgpaPtr;
}
void get_info(){
    cout<<name << " "<<*cgpaPtr;
}
};

int main(int argc, char const *argv[])
{
    student s("kinshu", 9.0);
    s.get_info();
    return 0;
}
