//class templates with default parameters
#include<iostream>
using namespace std;
template<class T1 =int ,class T2 = float, class T3= char>
class Harry{
    public:
    T1 a;
    T2 b;
    T3 c;
    Harry(T1 x, T2 y, T3 z){
        a = x;
        b = y;
        c= z;

    }
    void display(){
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
    }
};
int main(int argc, char const *argv[])
{
    Harry <> h(4 ,6.4,'c');
    h.display();
    cout<<endl;
    Harry <float, int , char> g(4.3,6,'c');
    g.display();
    
    return 0;
}

