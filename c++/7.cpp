#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    
    float d=34.4;
    long double e=34.4;
    cout<<sizeof(34.4)<<endl;        //by default it will be double
    cout<<sizeof(34.4f)<<endl;
    cout<<sizeof(34.4F)<<endl;
    cout<<sizeof(34.4L)<<endl;
    cout<<sizeof(34.4l)<<endl;


    return 0;
}
