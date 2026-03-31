#include <iostream>
#include <cstdlib>
using namespace std;

#define BUFFER_SIZE 5

int buffer[BUFFER_SIZE];
int counter = 0;
int in = 0;
int out = 0;

void produce() {
    if (counter == BUFFER_SIZE) {
        cout << "Buffer Full | counter = " << counter << endl;
        return;
    }

    int item = rand() % 100;

    buffer[in] = item;
    in = (in + 1) % BUFFER_SIZE;
    counter++;

    cout << "Produced: " << item 
         << " | counter = " << counter << endl;
}

void consume() {
    if (counter == 0) {
        cout << "Buffer Empty | counter = " << counter << endl;
        return;
    }

    int item = buffer[out];
    out = (out + 1) % BUFFER_SIZE;
    counter--;

    cout << "Consumed: " << item 
         << " | counter = " << counter << endl;
}

int main() {

    produce();
    produce();
    produce();

    consume();
    consume();

    produce();
    produce();

    consume();
    consume();
    consume();

    return 0;
}
