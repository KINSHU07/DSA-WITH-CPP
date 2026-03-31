#include <iostream>
using namespace std;
class student
{
protected:
    int roll;
public:
    void set_roll(int r);
    void get_roll();
};

void student ::set_roll(int r)
{
    roll = r;
}
void student ::get_roll()
{
    cout << "the roll number is " << roll << endl;
}

class exams : public student
{
protected:
    float maths;
    float physics;

public:
    void getmarks(float, float);
    void setmarks();
};
void exams ::getmarks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void exams ::setmarks()
{
    cout << "the marks obtained in maths: " << maths << endl;
    cout << "the marks obtained in physics: " << physics << endl;
}

class result : public exams
{
    float percentage;

public:
    void display()
    {
        //getmarks();

        cout << "percentage of rollno "<<roll <<" is " << (maths + physics) / 2;
    }
};
int main(int argc, char const *argv[])
{
    result harry;
    harry.set_roll(100);
    harry.getmarks(90,87);  
    harry.display();
    return 0;
}

// a-> b-> c are called as inherritence path
