//vectors
#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> vec;
    vector<int> vec2 = {1,2,3,4,5};
    vector<int> vec3(4,1);

    cout<<vec3[3]<<endl;
 //for each loop

    for(int i : vec2){          //here, it directly go on the target value rather than iterative value like i,j
        cout<<i<<" ";
    }


    //vectors function
    cout<<vec.size()<<endl;
    vec3.push_back(23);
     for(int i : vec3){          
        cout<<i<<" ";
    }
    vec3.pop_back();
    for(int i : vec3){          
       cout<<i<<" "<<endl;
   }


   cout<<vec2.front()<<endl;
   cout<<vec2.back()<<endl;

   cout<<vec2.at(3);

    return 0;
}

