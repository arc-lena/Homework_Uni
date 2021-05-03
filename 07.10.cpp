#include <iostream>
using namespace std;

class Currency
{
private:
    string name;
    int a_value;
    int a_cents;
    int b_value;
    int b_cents;
public:
    void readCurrency(void);
    void printCurrency(void);
    int callAddition(void);
    int callSubtraction(void);
};

void Currency::readCurrency(void)
{
    cout<<"Enter name of currency: ";
    cin>>name;
    cout<<"Enter first  value: ";
    cin>>a_value;
    cout<<"Enter first cents: ";
    cin>>a_cents;
    cout<<"Enter second value: ";
    cin>>b_value;
    cout<<"Enter second cents: ";
    cin>>b_cents;
}

void Currency::printCurrency(void)
{
    cout<<"first value= "<<a_value<<", first cents= "<<a_cents<<endl;
    cout<<"second value= "<<b_value<<", second cents= "<<b_cents<<endl;
}

int Currency::callAddition(void)
{
    return (a_value+b_value, a_cents+b_cents);
}
int Currency::callSubtraction(void)
{
    return (abs(a_value-b_value) + abs(a_cents-b_cents));
}

class Product
{
private:
    string name;
    int price;
    string name_of_currency;
    string count;
public:
    void readProduct();
    int callAddition(Product p);
    int callSubtraction(Product p);
};

void Product::readProduct()
{
    cout<<"Enter name of currency: ";
    cin>>name_of_currency;
    cout<<"Enter name of product: ";
    cin>>name;
    cout<<"Enter count: ";
    cin>>count;
    cout<<"Enter price: ";
    cin>>price;
}


int Product::callAddition(Product p)
{
    return this->price + p.price;
}
int Product::callSubtraction(Product p)
{
    return abs(this->price - p.price);
}


int main()
{
    Currency num;
    int add;
    int sub;
    num.readCurrency();
    add = num.callAddition();
    sub = num.callSubtraction();
    num.printCurrency();
    cout<<"Addition/sum= "<<add<<endl;
    cout<<"Subtraction= "<<sub<<endl;

    Product pr1;
    pr1.readProduct();
    Product pr2;
    pr2.readProduct();
    cout << pr1.callAddition(pr2) << endl;
    cout << pr1.callSubtraction(pr2) << endl;
    
    return 0;
}
