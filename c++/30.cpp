//dynamic intialization of constructor
#include<iostream>
using namespace std;
class bankdeposit{
    int principal;
    int time;
    float rate;
    float return_value;
    public:
    bankdeposit(){

    }
    bankdeposit(int p, int t, float r){
        principal=p;
        time=t;
        rate=r;
        return_value=principal;
        for (int i = 0; i < t; i++)
        {
            return_value = return_value * (1+rate);
        }
        
    }
    bankdeposit(int p, int t, int r){
        principal=p;
        time=t;
        rate=float(r)/100;
        return_value=principal;
        
        for (int i = 0; i < t; i++)
        {
            return_value = return_value * (1+rate);
            
        }
        
    }
    void show(){
        cout<<"principal amount was "<<principal<<" and the return value was "<<return_value<<endl;
    }

};
int main(int argc, char const *argv[])
{
    bankdeposit bd1,bd2;
    int p,t,R;
    float r;

    cout<<"enter the value of p,y,r";
    cin>>p>>t>>r;
    bd1 = bankdeposit(p,t,r);
    bd1.show();

    cout<<"enter the value of p,y,R";
    cin>>p>>t>>R;
    bd2 = bankdeposit(p,t,r);
    bd2.show();
    
    return 0;
}
