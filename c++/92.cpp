#include<iostream>
using namespace std;
template<class T>
class stack{
    int a[100];
    int top;
    public:
    stack(){
        top = -1;
    }
    void push(T value){
        if (top>= 99)
        {
            /* code */
            cout<<" stack overflow";
            return;
        }
        a[++top] = value;
    }

    void pop(){
        if (top<0)
        {
            cout<<" stack underflow";
            return;
        }
        top--;

    }
    void display(){
        for (int i = top; i >= 0; i--)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
};
int main(int argc, char const *argv[])
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(4);
    s.display();
    s.pop();
    s.display();
    return 0;
}
