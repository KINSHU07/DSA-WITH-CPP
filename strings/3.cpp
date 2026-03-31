//accessing element in the string

#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    string str = "apna college";
    for (int i = 0; i < str.length(); i++)
    {
        cout<<str[i]<<" ";
    }
cout<<endl;

for(char ch : str){
    cout<<ch<<" ";
}
    

    return 0;
}
