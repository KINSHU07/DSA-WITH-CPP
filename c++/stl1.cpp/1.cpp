#include<bits/stdc++.h>
using namespace std;
void display(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";

    }
    cout<<endl;
}
int main(int argc, char const *argv[])
{
    vector<int> v;         // zero length integer vector
    // vector<char> v2(4);    // 4 element character vector
    // vector<char> v3(v2);   // 4 element character vector from vec 2
    // vector<int> v1={1,2,3,4};
    // vector<int> v4={9,8,7,6};
    // v1.swap(v4);     //the elements inside the vector will be swapped.
    // display(v1);



    int element, size;
    cout<<"enter the size of the vector: ";
    cin>> size;

    for (int i = 0; i < size; i++)
    {
        cout<<"enter the elements";
        cin>>element;
        v.push_back(element);

     }
    // v.pop_back();
    // display(v);
    // vector<int> :: iterator it = v.begin();
    // v.insert(it+ 3,5,66);
    // display(v);
    //v.emplace_back(2);


   
   

   
    display(v);
    v.erase(v.begin()+1, v.begin()+4);          //erase begin +1 to begin +4
    display(v); v.insert(v.begin()+1,3, 70);
    display(v);

    return 0;
}

