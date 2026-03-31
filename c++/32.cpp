// destructor frees the memory encircle by the time of dynamic memmory allocation of the object
// it nevers takes an argument nor take a value



#include<iostream>
using namespace std;
int count=0;
class num{
public:
num(){
    count++;
    cout<<"this is the time when constructor is called for object number"<<count<<endl;
}

~num(){
    cout<<"this is the time when destructor is called for object number "<<count<<endl;
    count--;
}
};
int main(int argc, char const *argv[])
{
     cout<<"we are inside our main function"<<endl;
     cout<<"creating first object n1"<<endl;
     num n1{
        cout<<"entering the block"<<endl;
        cout<<"creating two more objects"<<endl;
        num n2, n3;
        cout<<"exiting the block"<<endl;
     }
     cout<<"back to main"<<endl;
    return 0;
}
