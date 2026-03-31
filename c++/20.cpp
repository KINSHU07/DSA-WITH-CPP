#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;
    void chk_bin(void);

public:
    void read(void);
    void ones_comp(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "enter the binary no.";
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "not a binary number";
        }
    }
}

void binary ::ones_comp(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else  
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{

    cout << "displaying your binary number";

    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
int main(int argc, char const *argv[])
{
    void read(void);
    void chk_bin(void);
    void ones_comp(void);
    void display(void);
    return 0;
}
