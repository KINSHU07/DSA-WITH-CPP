#include<iostream>
using namespace std;
class students{
    public:
    int rno;
    string name;

    students(){

    }
    students(int r, string n, float m ){
            rno=r;
            name=n;
            marks=m;
    } 
    float get(){                    //getter 
        return marks;
    }

    void setmarks(float m){
        marks=m;
    }
  
  
    private:
    float marks;
    
};

int main(int argc, char const *argv[])
{
    students s1(1, "kisnhu", 92.2);
    cout<<s1.get();                     //with the help of function we can easily print the value in private variable
    s1.setmarks(00);                   //with the help of function we can easily change the value in private variable
  // s1.marks=0; // cant be done. found in error time     //compile time error
    return 0;
}
