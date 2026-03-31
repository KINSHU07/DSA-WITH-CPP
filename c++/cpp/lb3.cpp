#include<iostream>

#include<cstring>
using namespace std;
class hero{
    public:
    int level;
    int health;
    static int timetocomplete;
   
    char *name;
    hero(){

        cout<<"kinshu keshri called constructor"<<endl;
    }

    
    hero(int level, int health ){
        this->health =health;
        this->level = level;
        
    }

    hero( hero &temp){
        this->health = temp.health;                   //copy constructor
        this->level = temp.level;
    }                   
   void  setdata(int a, int b){
        health=a;
        level=b;
    }

    static int random(){
        return timetocomplete;
    }                                    //it is a static function, it can only access static keyword, we can not use this function inside this
    
    void getdata(){
        cout<<"the name, level and health is "<<this->level <<" and "<<this->health<<endl;
    }
    ~hero(){
        cout<<"destructor bhai called"<<endl;
        }
      
    
};

int hero::timetocomplete =5;

int main(int argc, char const *argv[])
{
    cout<<hero::random()<<endl;


    //static memmory
    hero h1; 
    //for sttatic memmory destructor called himself automatically
cout<<h1.timetocomplete<<endl;


    //dynamic memmory
    hero *b= new hero;
    b->timetocomplete= 10;
    //for dynamic memmory, we have to call desrtuctor manually

    cout<<h1.timetocomplete<<endl;

    delete b;


    return 0;
}
