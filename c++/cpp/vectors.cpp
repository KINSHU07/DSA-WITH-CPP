#include <iostream>
using namespace std;
class vectors
{
public:
    int size;
    int capacity;
    int *arr;
    vectors()
    {
        size = 0;
        capacity = 1;
        arr = new int[1];
    }
    void add(int ele)
    {
        if (size == capacity)
        {
            capacity *= 2;
            int *arr2 = new int[capacity];
            for (int i = 0; i < size; i++)
            {
                arr2[i] = arr[i];
            }
            arr = arr2;
        }
         //else arr[size++];
          arr[size++] = ele;
    }
    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    int get(int idx){
        if (size==0)
        {
            cout<<"empty idx";
            cout<<-2;
        }
        
        if (idx>= size || idx<0)
        {
            cout<<"invalid error";
            return -1;
        }
        
    }

    void remove(){
        if (size==0)
        {
            cout<<"empty idx";
        }
        size--;
    }
};
int main(int argc, char const *argv[])
{
    vectors v;
    cout << v.size << " " << v.capacity << endl;
    v.add(1);
    v.print();
    cout << v.size << "  " << v.capacity << endl;
    v.add(2);
    v.print();
    cout << v.size << "  " << v.capacity << endl;
    v.add(3);
    v.print();
    cout << v.size << "  " << v.capacity << endl;
    cout<<v.get(10);
     
    v.remove();
    v.print();
    return 0;
}
