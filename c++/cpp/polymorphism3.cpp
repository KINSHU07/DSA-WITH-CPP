#include <iostream>;
using namespace std;
class scooty
{
    public:
    int top_speed;
    float milege;
    string sound="bhrooooom";
    private:
    float bootspace;
};
class bike : public scooty
{
public:
    int gear;
    string sound="dhroooom ";
};
int main(int argc, char const *argv[])
{
    
    bike b1;
    cout<<b1.sound;
    scooty* s= new scooty();
    s->sound();

    // b1.gear = 6;
    return 0;
}
