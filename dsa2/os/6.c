#include<stdio.h>
#include<stdlib.h>

int shared_item;
int has_item = 0;   // flag

void send(int item){
    shared_item = item;
    has_item = 1;
}

int receive(){
    has_item = 0;
    return shared_item;
}

void produce(){
    int item = rand() % 100;
    send(item);
    printf("Produced: %d\n", item);
}

void consume(){
    if(has_item == 1){
        int item = receive();
        printf("Consumed: %d\n", item);
    } else {
        printf("Nothing to consume\n");
    }
}

int main(){
    for(int i=0;i<10;i++){
        produce();
        consume();
    }
    return 0;
}
