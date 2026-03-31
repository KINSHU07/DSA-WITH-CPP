#include<iostream>
using namespace std;

class twostack{
    int *arr;
    int top1;
    int top2;
    int size;
public:
 twostack(int s){
    this->size = s;
    top1=-1;
    top2=s;
    arr = new int[s];
 }

void push1(int num){
if(top2 - top1 > 1){
    top1++;
    arr[top1] = num;
} else{
    cout<<"stack overflow";
}
}

void push2(int num){
    if(top2 - top1 > 1){
        top2--;
       arr[top2] = num;
    } else{
        cout<<"stack overflow"<<endl;
    }
}

int pop1(){
    if(top1 >= 0){
        int ans = arr[top1];
        top1--;
        return ans;
    } else{
        return -1;
    }
}

int pop2(){
    if(top2 < size){
        int ans = arr[top2];
        top2++;
        return ans;
    } else{
        return -1;
    }
}

void display() {
        cout << "Stack 1 (from bottom to top): ";
        for(int i = 0; i <= top1; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

        cout << "Stack 2 (from bottom to top): ";
        for(int i = size - 1; i >= top2; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }


};
int main(int argc, char const *argv[])
{
    twostack s(5);

    s.push1(1);
    s.push1(2);
    s.push2(3);
    s.push2(4);
    s.push2(5);
s.display();

    return 0;
}


