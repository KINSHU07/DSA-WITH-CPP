#include <iostream>
using namespace std;
class employee
{
    int salary;
    int id;

public:
    void setid(void)
    {
        salary = 122;
        cout << "enter the id number";
        cin >> id;
    }
    void getid(void)
    {
        cout << "the id of the employee is  " << id << endl;
    }
};
int main(int argc, char const *argv[])
{
    employee fb[4];
    
    for (int i = 0; i < 4; i++)
    {
        fb[i].setid();
        fb[i].getid();
    }

    return 0;
}
