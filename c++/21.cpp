#include<iostream>
using namespace std;
class shop{
    int itemid[100];
    int itemprice[100];
    int counter;
    public:
    void inticounter(void) {counter =0;}
    void setprice(void);
    void displayprice(void);

};

void shop :: setprice(void){
    cout<<"enter the item id";
    cin>>itemid[counter];
    cout<<"enter the item price ";
    cin>>itemprice[counter];
    counter++;

}
void shop :: displayprice(void){
    for (int i = 1; i < counter; i++)
    {
        cout<<"the price of item with id "<<itemid[i]  <<"is" <<itemprice[i]<<endl;
        cout<<"my name is kinshu ";
    }
    
}
int main(int argc, char const *argv[])
{
    shop keshri;
    keshri.inticounter();
    keshri.setprice();
    keshri.setprice();
    keshri.setprice();
    keshri.displayprice();

    return 0;
}
