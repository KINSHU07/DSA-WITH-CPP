#include <iostream>
using namespace std;
class shop
{
    int id;
    float price;

public:
    void setdata(int a, float b)
    {
        id = a;
        price = b;
    }
    void getdata()
    {
        cout << "the id of the item is: " << id << endl;
        cout << "the price of the item is: " << price << endl;
    }
};
int main(int argc, char const *argv[])
{
    int p, q, i;
    shop *ptr = new shop[3];
    shop *ptrtemp = ptr;
    for (i = 0; i < 3; i++)
    {
        cout << "enter the id and price of item " << i + 1 << endl;
        cin >> p >> q;
        ptr->setdata(p, q);
        ptr++;
    }
    for (i = 0; i < 3; i++)
    {
        cout << "item number " << i + 1;
        ptrtemp->getdata();
        ptrtemp++;
    }

    return 0;
}
