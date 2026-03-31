#include<iostream>
using namespace std;

class employee {
    int id;
    static int count;

public:

    void setdata(void) {
        cout << "Enter the id: " << endl;
        cin >> id;
        count++;
    }


    void getdata(void) {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }
    static void getcount(void){
        cout<<"the value of count is " <<count;
    }
};


int employee::count = 1000;

int main() {
    employee a, b;

    a.setdata(); 
    a.getdata(); 
    a.getcount();
    b.setdata(); 
    b.getdata(); 
    a.getcount();
    return 0;
}
