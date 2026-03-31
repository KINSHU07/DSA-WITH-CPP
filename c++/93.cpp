#include<iostream>
using namespace std;

template<class T>
class queue{
    T arr[100];
    int front, rear;
    public:
    queue(){
        front = 0;
        rear = 0;
    }
    void push( T value){
        if (rear >= 100)
        {
            cout<<"queue overflow";
            return;
        }
        arr[++rear] = value;
    }
    void pop(){
        if (front == rear)
        {
            cout<<"qoeue underflow";
            return;
        }
        front++;
    }
    void display(){
        for (int i = front; i < rear; i++)
        {
            cout<<arr[i]<<" ";
            cout<<endl;
        }
        
    }
};
int main(int argc, char const *argv[])
{
    queue<int> q;
    q.push(1);
    q.push(3);
    q.push(54);
    q.push(23);
    q.display();
    q.pop();
    q.display();

    return 0;
}
