#include<iostream>
using namespace std;
class a{
    public:
    int x=5;
    int getdata(){
        return -1;
    }
};
class b :  virtual public a{
    int i=10;
    
};
class c :  virtual public a{ 
    int i=7;
};
class d :  public b,  public c{
    int i=7;
};
int main(){
    d obj;
    cout<<obj.x<<endl;
}