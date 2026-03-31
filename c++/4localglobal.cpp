#include<iostream>
using namespace std;
int glo=6;
void func(){
    cout<< glo<<endl;
}
int main(int argc, char const *argv[])
{
    int glo=9;
    glo=69;
    cout<< glo<<endl;
    func();
    return 0;
}

