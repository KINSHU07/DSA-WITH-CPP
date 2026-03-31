#include <iostream>
using namespace std;

#define BUFFER_SIZE 5

int buffer[BUFFER_SIZE];
int counter = 0;
int in = 0;
int out = 0;

void produce(int item) {
    if (counter == BUFFER_SIZE) {
        cout << "Buffer Full\n";
        return;
    }
    buffer[in] = item;
    in = (in + 1) % BUFFER_SIZE;
    counter++;
    cout << "Produced: " << item << endl;
}

void consume() {
    if (counter == 0) {
        cout << "Buffer Empty\n";
        return;
    }
    int item = buffer[out];
    out = (out + 1) % BUFFER_SIZE;
    counter--;
    cout << "Consumed: " << item << endl;
}

int main() {
    produce(1);
    produce(2);
    produce(3);

    consume();
    consume();

    produce(4);
    produce(5);

    consume();
    consume();
    consume();

    return 0;
}