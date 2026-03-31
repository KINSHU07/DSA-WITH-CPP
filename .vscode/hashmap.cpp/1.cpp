#include <iostream>
using namespace std;

#define SIZE 10   // size of hash table

class HashTable {
    int table[SIZE];

public:
    HashTable() {
        for (int i = 0; i < SIZE; i++)
            table[i] = -1;  // -1 means empty
    }

    // Hash function
    int hashFunction(int key) {
        return key % SIZE;
    }

    // Insert a key using linear probing
    void insert(int key) {
        int index = hashFunction(key);
        int start = index;

        // Find next available slot
        while (table[index] != -1) {
            index = (index + 1) % SIZE;
            if (index == start) {
                cout << "Hash table full! Cannot insert " << key << endl;
                return;
            }
        }

        table[index] = key;
    }

    // Search a key
    bool search(int key) {
        int index = hashFunction(key);
        int start = index;

        while (table[index] != -1) {
            if (table[index] == key)
                return true;
            index = (index + 1) % SIZE;
            if (index == start)
                break;
        }
        return false;
    }

    // Display hash table
    void display() {
        cout << "\nHash Table:\n";
        for (int i = 0; i < SIZE; i++) {
            cout << i << " --> ";
            if (table[i] != -1)
                cout << table[i];
            else
                cout << "empty";
            cout << endl;
        }
    }
};

int main() {
    HashTable h;

    h.insert(23);
    h.insert(43);
    h.insert(13);
    h.insert(27);

    h.display();

    cout << "\nSearching for 43: " << (h.search(43) ? "Found" : "Not Found") << endl;
    cout << "Searching for 99: " << (h.search(99) ? "Found" : "Not Found") << endl;

    return 0;
}
