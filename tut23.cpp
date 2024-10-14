#include <iostream>
using namespace std;

class Shop
{
    // By default the below members are private in c++
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void)
    {
        counter = 1;
    }
    void displayPrice(void);
    void setPrice(void);
};

void Shop ::setPrice(void)
{
    cout << "Enter the id of your item no " << counter << ": " << endl;
    cin >> itemId[counter - 1];
    cout << "Enter the price of your item: " << endl;
    cin >> itemPrice[counter - 1];
    counter++;
}

void Shop::displayPrice(void)
{
    for (int i = 0; i < counter - 1; i++)
    {
        cout << "The price of item with id: " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
    return 0;
}