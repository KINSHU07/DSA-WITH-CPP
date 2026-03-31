//the useful class for working in files on cpp are
//1. fstreambase
//2.ifstream         derived from fstreambase
//3.ofstream         derived from fstreambase


/*
in order work with files in cpp, u will have to open it, primiarily there are two ways of open it
1. using the constructor
2.using the member function() open of the class
*/

#include<iostream>
#include<fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    //opening files using constructor and writing it
    // string st = "kinshu is best";
    // ofstream out("sample.txt");       //used for output in file
    // out<<st;                // for writing in a file



    //opening files using constructor and reading it

    string s;
    ifstream in("sample2.txt");

 //   in>>s;
 getline(in, s);
 
 cout<<s; 
 getline(in, s);
    return 0;
}


