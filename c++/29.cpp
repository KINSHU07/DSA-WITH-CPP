#include<iostream>
using namespace std;
class simple{
    int data1, data2, data3;
    public:
    simple(int a, int b, int c=4){
        data1=a;
        data2=b;
        data3=c;
    }
    void print();
};
void simple :: print(){
    cout<<"the value of data1, data2 and data3 is "<<data1<<","<<data2<<"and "<<data3<<endl;
}
int main(int argc, char const *argv[])
{
    simple s(1,3);
    s.print();
    return 0;
}
