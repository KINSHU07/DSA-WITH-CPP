#include<iostream>
using namespace std;

int reach(int src , int dest){
    cout<<"source: "<<src<<" "<<"dest: "<<dest<<endl;

    if(src == dest){
        cout<<"reached";
        return 1;
    }

    return reach(src+1,dest);
}

int main(int argc, char const *argv[])
{
    int src =1, dest=10;
    cout<< reach(src, dest);
    return 0;
}
