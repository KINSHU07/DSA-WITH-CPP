#include<iostream>
#include<cmath>
using namespace std;
class point{
    int a,b;
    public:
    point(int x, int y){
        a=x;
        b=y;
    }
    void displaypoints(){
        cout<<"the given points is ("<<a<<","<<b<<")"<<endl;
    }

    void distance( point o2){
        float d;
        d=sqrt(pow(o2.a-a ,2)+pow(o2.b-b ,2));
        cout<<d<<endl;
    }

};


int main(int argc, char const *argv[])
{
    point a(2,3);
    a.displaypoints();
    point b(9,0);
    b.displaypoints();
    a.distance(b);
    return 0;
}
