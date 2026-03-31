//reverse a string by recursion
//check for a palindrome

#include<iostream>
using namespace std;

bool check(string s , int i , int j){
    if(i > j){
        return true;
    }
    if(s[i] != s[j]){
        return false;
    } else{
        return check(s, i+1, j-1);
    }
}






void reverse(int i , int j , string &s){
    if(i>j){
        return;
    }

    swap(s[i] , s[j]);
    i++;j--;
    reverse(i, j,s);
}

int main(int argc, char const *argv[])
{
    string name = "kinshu";
    string ch = "aaabbbcccbbbaaa";


    reverse(0 , name.length() -1 , name);
    cout<<name<<endl;

    check(ch , 0 , ch.length());
    cout<<check;
    return 0;
}
