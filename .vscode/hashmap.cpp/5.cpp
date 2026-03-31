
#include <iostream>
using namespace std;

#define SIZE 10   // Size of the hash table

class HashTable {
    int table[SIZE];

public:
    HashTable() {
        for (int i = 0; i < SIZE; i++)
            table[i] = -1;  // Initialize all slots as empty
    }

    // Hash function
    int hashFunction(int key) {
        return key % SIZE;
    }

    // Insert key using linear probing
    void insert(int key) {
        int index = hashFunction(key);
        int start = index;

        // Loop to find next empty slot
        while (table[index] != -1) {
            index = (index + 1) % SIZE;
            if (index == start) {
                cout << "Hash table full! Cannot insert " << key << endl;
                return;
            }
        }
        table[index] = key;
        cout << "Inserted " << key << " at index " << index << endl;
    }

    // Search key using linear probing
    bool search(int key) {
        int index = hashFunction(key);
        int start = index;

        while (table[index] != -1) {
            if (table[index] == key)
                return true;
            index = (index + 1) % SIZE;
            if (index == start) // full loop done
                break;
        }
        return false;
    }

    // Delete a key (optional but useful)
    void remove(int key) {
        int index = hashFunction(key);
        int start = index;

        while (table[index] != -1) {
            if (table[index] == key) {
                table[index] = -2; // -2 indicates "deleted" slot
                cout << "Deleted " << key << " from index " << index << endl;
                return;
            }
            index = (index + 1) % SIZE;
            if (index == start)
                break;
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

    cout << "\nSearching for 13: " << (h.search(13) ? "Found" : "Not Found") << endl;
    cout << "Searching for 99: " << (h.search(99) ? "Found" : "Not Found") << endl;

    h.remove(13);
    h.display();

    return 0;
}
