#include <iostream>
#include <cstdlib>
using namespace std;

#define BUFFER_SIZE 5

int in = 0;
int out = 0;
int counter = 0;
int buffer[BUFFER_SIZE];

void produced() {
    if ((in + 1) % BUFFER_SIZE == out) {
        cout << "BUFFER FULL";
        return;
    }

    int item = rand() % 100;

    buffer[in] = item;
    in = (in + 1) % BUFFER_SIZE;
    counter++;

    cout << "Produced: " << item
         << " , counter: " << counter;
}

void consumed() {
    if (in == out) {
        cout << "BUFFER EMPTY";
        return;
    }

    int item = buffer[out];
    out = (out + 1) % BUFFER_SIZE;
    counter--;

    cout << "Consumed: " << item
         << " , counter: " << counter;
}

int main() {
    

    for (int i = 0; i < 8; i++) {
        produced();
        cout << "   ";
        consumed();
        cout << endl;
    }

    return 0;
}