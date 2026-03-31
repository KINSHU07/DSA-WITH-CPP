#include<iostream>
using namespace std;
class fraction{
    public:
    int num;
    int den;
    fraction(int num, int den){
        this->num= num;;
        this->den = den;
    
    }
    void display(){
        cout<<num<<"/"<<den<<endl;
    }
    int gcd(int a, int b) {
        
        if (b == 0)
            return a;
    return gcd(b, a % b);
    }
    
   // fraction add(fraction f)
    fraction operator+(fraction f)
    {

        int newnum= this->num*f.den + this->den*num;
        int newden= this->den*f.den;
        fraction ans(newnum, newden);
       
        return ans;
    }
    
};
int main(int argc, char const *argv[])
{
    fraction f1(10,5);
    f1.display();
    fraction f2(2,4);
    f2.display();
   // fraction f3= f1.add(f2);
    fraction f3= f1+(f2);
    f3.display();
    return 0;
}
