//default copy constructor follows shallow copy


#include<iostream>

#include<string>
using namespace std;
class hero{
    public:
    int level;
    int health;
   
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
    
    void getdata(){
        cout<<"the name, level and health is "<<this->level <<" and "<<this->health<<endl;
    }
      
    
};
int main(int argc, char const *argv[])
{
    hero kinshu;
    kinshu.setdata(90,1);
    kinshu.getdata();
    //copy constructor
    hero keshri(kinshu);     // hero kinshu=keshri;
    keshri.getdata();
    
    kinshu.health= 19;
    kinshu.getdata();
    keshri.getdata();
    //it is a shallow copy where same name is used by two member by changing in one other also get change

    //for deep copy we have to create our own parametric constructor
    //for changing one element in 1, it will not effect the second one

   // copy assignment operator
   kinshu = keshri;       //keshri all element will be equal to kinshu
   kinshu.getdata();
   keshri.getdata();
    return 0;
}
