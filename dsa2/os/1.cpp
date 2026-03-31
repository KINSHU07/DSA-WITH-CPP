#include<iostream>
using namespace std;

#define BUFFER_SIZE 5
int in = 0;
int out =0;
int counter = 0;
int buffer[BUFFER_SIZE];

void produced(){
    if((in + 1)% BUFFER_SIZE == out){
        printf("BUFFER FULL");
        return;
    }
    int item = rand()% 100;

    buffer[in] = item;
    in = (in + 1)% BUFFER_SIZE;
    counter++;
printf("produced : %d , counter: %d" , item , counter);
}

void consumed(){
    if(in == out){
        printf("buffer empty");
        return;
    }
    int item = buffer[out];
    out = (out + 1)% BUFFER_SIZE;
    counter--;
   printf("consumed : %d , counter: %d" , item , counter);
}
int main(int argc, char const *argv[])
{
    for (int i = 0; i < 8; i++)
    {
        produced();
        cout<<" ";
        consumed();
        cout<<endl;
    }
    
    return 0;
}
