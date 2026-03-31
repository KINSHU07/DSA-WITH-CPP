// LIFO
#include <iostream>
using namespace std;

class stack {
public:
    int top;
    int *arr;
    int size;

    stack(int size) {
        this->size = size;
        top = -1;
        arr = new int[size];
    }

    void push(int element) {
        if (size - top > 1) {
            top++;
            arr[top] = element;
        } else {
            cout << "Stack overflow" << endl;
        }
    }

    void pop() {
        if (top >= 0) {
            top--;
        } else {
            cout << "Stack underflow" << endl;
        }
    }

    int peak() {
        if (top >= 0) {
            return arr[top];
        } else {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    bool isEmpty() {
        return top == -1;
    }

    // Print from bottom to top
    void print() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Stack (bottom to top): ";
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Print from top to bottom (reverse)
    void reversePrint() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Stack (top to bottom): ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~stack() {
        delete[] arr;
    }
};

int main() {
    stack s(5);

    s.push(2);
    s.push(23);
    s.push(7);
    s.push(11);

    // Print current stack
    s.print();
    s.reversePrint();

    s.pop();
    s.pop();

    // After popping
    s.print();
    s.reversePrint();

    cout << "Top element: " << s.peak() << endl;

    return 0;
}
