// list
#include<bits/stdc++.h>
using namespace std;

void display(list<int> &l){
    list<int> :: iterator i = l.begin();
    for (i = l.begin(); i != l.end(); i++)
    {
        cout<<*i<<" ";
    }
    
cout<<endl;
}
int main(int argc, char const *argv[])
{
    list<int> list1;         // list of  0 length
  
    list1.push_back(01);
    list1.push_back(10);
    list1.push_back(20);
    list1.push_back(30);
    list1.push_back(64);

    // list<int> :: iterator it = list1.begin();
    // cout<<*it<<endl;
    // it++;
    // cout<<*it<<endl;
    // it++;
    // cout<<*it<<endl;
    // it++;

    display(list1);
    list1.pop_back();
    display(list1);
    list1.pop_front();          //remove from the front
    display(list1);
    list1.remove(20);        //remove element from the middle
    display(list1);

    list<int> list2(7);         //emplty list of size 7
    list<int> :: iterator it;
    it = list2.begin();
    *it = 45;
    it++;
    *it = 21;
    it++;
    *it = 23;
    it++;
    display(list2);

    list1.sort();
    list2.sort();
    display(list1);
    display(list2);

    list1.merge(list2);
    display(list1);

    list1.reverse();
    display(list1);

    list<int>list3;
      cout<<list3.empty( )<<endl; //OP: 1 (True)
      list3.push_back(5);
      cout<<list3.empty( )<<endl; //OP: 0 (False)
    

    return 0;
}
