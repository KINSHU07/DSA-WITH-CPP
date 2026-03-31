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

    // Insert key using quadratic probing
    void insert(int key) {
        int index = hashFunction(key);
        int i = 0;

        while (i < SIZE) {
            int newIndex = (index + i * i) % SIZE; // quadratic probing
            if (table[newIndex] == -1) {
                table[newIndex] = key;
                cout << "Inserted " << key << " at index " << newIndex << endl;
                return;
            }
            i++;
        }
        cout << "Hash table full! Cannot insert " << key << endl;
    }

    // Search a key using quadratic probing
    bool search(int key) {
        int index = hashFunction(key);
        int i = 0;

        while (i < SIZE) {
            int newIndex = (index + i * i) % SIZE;
            if (table[newIndex] == key)
                return true;
            if (table[newIndex] == -1)
                return false;  // Empty slot means key not present
            i++;
        }
        return false;
    }

    // Delete a key (optional)
    void remove(int key) {
        int index = hashFunction(key);
        int i = 0;

        while (i < SIZE) {
            int newIndex = (index + i * i) % SIZE;
            if (table[newIndex] == key) {
                table[newIndex] = -2; // -2 means deleted
                cout << "Deleted " << key << " from index " << newIndex << endl;
                return;
            }
            if (table[newIndex] == -1)
                break;
            i++;
        }
        cout << "Key " << key << " not found!" << endl;
    }

    // Display hash table
    void display() {
        cout << "\nHash Table:\n";
        for (int i = 0; i < SIZE; i++) {
            cout << i << " --> ";
            if (table[i] == -1)
                cout << "empty";
            else if (table[i] == -2)
                cout << "deleted";
            else
                cout << table[i];
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
    h.insert(33);
    h.insert(44);

    h.display();

    cout << "\nSearching for 33: " << (h.search(33) ? "Found" : "Not Found") << endl;
    cout << "Searching for 99: " << (h.search(99) ? "Found" : "Not Found") << endl;

    h.remove(33);
    h.display();

    return 0;
}
