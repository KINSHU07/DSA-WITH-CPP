//tempelates  parametrized class
// code reusablity
//generic programming
#include<iostream>
using namespace std;
template<class T>

class vector{
    public:
    T *arr;
    int size;
    vector(int m){
        size = m;
        arr = new T[size];

    }
    T dotproduct(vector &v){
        T d =0;
        for (int i = 0; i < size; i++)
        {
            d+= this->arr[i] * v.arr[i];
        }
        return d; 
    }
};
int main(int argc, char const *argv[])
{
    vector< float>v1(3);
    v1.arr[0]=0;
    v1.arr[1]=3.2;
    v1.arr[2]=1.2;
    vector <float> v2(3);
    v2.arr[0]=12.1;
    v2.arr[1]=3;
    v2.arr[2]=3;
    float a = v1.dotproduct(v2);
    cout<<a;
// if here we use the values of v1.arr or v2.arr in float value then it will give different wrong answers, so here we use templates
    return 0;
}

