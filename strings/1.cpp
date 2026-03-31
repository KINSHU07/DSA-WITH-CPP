#include<iostream>
#include<cstring>

using namespace std;
int main(int argc, char const *argv[])
{
    int arr[]={1,2,3,45,4};

    char str[]={'q','w','r','t', '\0'};


    // for input
    char pok[13];
    cin.getline(pok , 13);

    for(char ch: pok){
        cout<<ch<<" ";
    }
  //  cout<<strlen(str) <<endl;
    return 0;
}
