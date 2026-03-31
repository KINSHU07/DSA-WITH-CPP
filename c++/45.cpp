#include<iostream>
using namespace std;
class complex{
    int real,complex;
    public:
    void setdata(int a, int b){
            real =a;
            complex=b;
    }
    void getdata(){
        // cout<<"the real part is "<<real<<endl;
        // cout<<"the complex part is "<<complex<<endl;
        cout<<"the comple no. is: "<<real<<"+"<<complex<<"i"<<endl;
    }
};
int main(int argc, char const *argv[])
{
    complex c1;
    c1.setdata(1,2);
    c1.getdata();
    
    //we can also do this with the help of pointers
    complex *p= &c1;
    (*p).setdata(1,2);
    (*p).getdata();
    
    // dynamic way of creating
    complex *ptr = new complex;
    (*ptr).setdata(5,2);
    (*ptr).getdata();

    //arrow operator
    ptr->setdata(5,2);              // (*ptr).getdata() can be written as  ptr->getdata(); 
    ptr->getdata();

    return 0;
}
