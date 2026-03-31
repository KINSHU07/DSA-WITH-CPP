#include<iostream>
using namespace std;
// void foo(int* ptr){
//     cout<<"foo(int*) called"<<endl;
// }
// void foo(long ptr){
//     cout<<"foo(long) called"<<endl;
// }
// int main(int argc, char const *argv[])
// {
//    foo(NULL);
//     foo(nullptr);
//     return 0;
// }

union details{
    char name[20];
    int roll;
    float cgpa;
} s1;
int main(int argc, char const *argv[])
{
    cin>>s1.roll;
    cin>>s1.cgpa;
    cin>>s1.name;

    cout<<s1.roll<<endl;
    cout<<s1.cgpa<<endl;
    cout<<s1.name<<endl;
    return 0;
}


