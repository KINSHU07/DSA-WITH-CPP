#include <iostream>
#include <fstream>
using namespace std;
class Product
{
public:
    string name;
    double price;
    int quantity;

    Product() {}
    Product(string n, double p, int q)
    {
        name = n;
        price = p;
        quantity = q;
    }
};

class Cart
{
private:
    Product items[100];
    int count;

public:
    Cart() { count = 0; }

    void addProduct(const Product &p)
    {
        for (int i = 0; i < count; i++)
        {
            if (items[i].name == p.name)
            {
                items[i].quantity += p.quantity;
                cout << p.quantity << " more " << p.name << " added to cart\n";
                return;
            }
        }
        if (count < 100)
        {
            items[count] = p;
            count++;
            cout << p.name << "added to cart\n";
        }
        else
        {
            cout << "Cart is full! Cannot add more items.\n";
        }
    }

    void removeProduct(const string &name)
    {
        for (int i = 0; i < count; i++)
        {
            if (items[i].name == name)
            {
                for (int j = i; j < count - 1; j++)
                    items[j] = items[j + 1];
                count--;
                cout << name << " removed from cart" << endl;
                return;
            }
        }
        cout << "Item not found in cart" << endl;
    }

    double calculateTotal()
    {
        double total = 0;
        for (int i = 0; i < count; i++)
        {
            total = total + items[i].price * items[i].quantity;
        }
        return total;
    }

    void displaycart()
    {
        if (count == 0)
        {
            cout << " Your Cart is empty" << endl;
            return;
        }

        cout << "Your Cart" << endl;
        cout << "Product         Price       Quantity   Total" << endl;
        cout << "---------------------------------------------" << endl;

        for (int i = 0; i < count; i++)
        {
            cout << items[i].name << "        "
                                     "\t"
                 << "    "
                 << items[i].price << "        "
                 << items[i].quantity << "        "
                 << (items[i].price * items[i].quantity) << endl;
        }

        double total = calculateTotal();
        double discount;
        if (total >= 400)
        {
            discount = total * 0.10;
        }
        else
        {
            discount = 0;
        }
        double GSTTAX = (total - discount) * 0.18;
        double finalTotal = total - discount + GSTTAX;

        cout << "---------------------------------------------" << endl;
        cout << "Total Amount:         " << total << endl;
        cout << "Discount Given:       " << discount << endl;
        cout << "GSTTAX Calculated:    " << GSTTAX << endl;
        cout << "Final Total Amount:   " << finalTotal << endl;

    payment:
        int paymentchoice;
        cout << "\nSelect Payment Method:\n1. Cash\n2. Online\n3. Card\nChoice: " << endl;
        cin >> paymentchoice;

        switch (paymentchoice)
        {
        case 1:
            cout << "Payment completed using Cash." << endl;
            break;
        case 2:
            cout << "Payment completed using Online Payment." << endl;
            ;
            break;
        case 3:
            cout << "Payment completed using Card." << endl;
            ;
            break;
        default:

            cout << "Invalid payment option." << endl;
            cout << "Enter payment option again" << endl;
            goto payment;
        }
        cout << "Come back again!!!" << endl;

        exit(0);
        return;
    }

    void saveCart()
    { 
        ofstream file("cart.txt");
        for (int i = 0; i < count; i++)
        {
            file << items[i].name << " " << items[i].price << " " << items[i].quantity << "\n";
        }
        file.close();
        cout << "Cart saved" << endl;
    }

    void loadCart()
    {
        ifstream file("cart.txt");
        if (!file)
        {
            cout << "No previous cart found.\n";
            return;
        }
        count = 0;
        while (file >> items[count].name >> items[count].price >> items[count].quantity)
        {
            count++;
        }
        file.close();
        cout << "Cart loaded" << endl;
        ;
    }
    
};

int main()
{
    Cart yourCart;
    yourCart.loadCart();
    choice:
    int choicenumber;

    while (true)
    {
        cout << "\n1. Add Product\n2. Remove Product\n3. Show Cart & Checkout\n4. Save Cart\n5. Exit\nChoice: ";
        cin >> choicenumber;

        switch (choicenumber)
        {
        case 1:
        {
            string name;
            double price;
            int quantity;
            cout << "Enter product name you want to purchase: ";
            cin >> name;
            cout << "Enter price of the product: ";
            cin >> price;
            cout << "Enter quantity of the product: ";
            cin >> quantity;
            yourCart.addProduct(Product(name, price, quantity));
            break;
        }
        case 2:
        {
            string name;
            cout << "Enter product name to remove: ";
            cin >> name;
            yourCart.removeProduct(name);
            break;
        }
        case 3:
        {
            yourCart.displaycart();
            break;
        }
        case 4:
        {
            yourCart.saveCart();
            break;
        }
        case 5:
        {
            cout << "Exiting the program. Thank you!" << endl;
            return 0;
        }
        default:
           cout << "Enter a valid choicenumber";
           goto choice;
        }
    }
    return 0;
}