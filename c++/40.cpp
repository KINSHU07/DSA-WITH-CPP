#include <iostream>
using namespace std;
class student
{
protected:
    int roll;

public:
    void set_number(int a)
    {
        roll = a;
    }
    void get_number()
    {
        cout << "the roll no. is " << roll << endl;
    }
};
class reult : virtual public student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void get_marks()
    {
        cout << " the marks obatined in "
             << "PHYSICS: " << physics << endl
             << "maths: " << maths << endl;
    }
};

class score : virtual public student{
    protected:
    float score;
    public:
    void set_score(float sc){
        score = sc;
    }
    void print(void){
        cout<<" the PT score is "<<score<<endl;
    }
};

class result : public reult, public score{
private:
float total;
public:
void display(void){
    total = maths+ physics + score;
    get_number();
    get_marks();
    print();
    cout<<"the total marks is "<<total<<endl;
}
};
int main(int argc, char const *argv[])
{
    result kinshu;
    kinshu.set_number(11);
    kinshu.set_marks(98.2, 93.5);
    kinshu.set_score(90);
    kinshu.display();
    return 0;
}

