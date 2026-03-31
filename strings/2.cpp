#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char arr[] ="apna college";
  //  arr = "kinshu;";         it will show error because char array cannot be modified 
    cout<<arr;

    string str= "kinshu keshri";              //strings are basically dynamic in nature it work on run time
    cout<<str;
    str = "sergio ramos";
    cout<<str;

    //string concatenation
    string str2 = "  is great";
    string str3 = str + str2;
    cout<<str3<<endl;

    // string comaprison
    cout<<(str3 <str2)<<endl;

    //for length
    cout<<(str3.length());

    string str4;
    getline(cin,str4);
    cout<<"output: "<<str4<<endl;
    return 0;
}

