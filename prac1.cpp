#include <iostream>
using namespace std;
class Vehicle
{
public:
    string brand;
};

class Car : public Vehicle
{
public:
    string engine;

    void start()
    {
        cout << "started" << endl;
    }

    Car(string brand, string engine)
    {
        this->brand = brand;
        this->engine = engine;
    }

    void display()
    {
        cout << engine << endl;
        cout << brand << endl;
    }
};

class Motercycle : public Vehicle
{
public:
    int price;

    void check()
    {
        cout << "ok" << endl;
    }

    Motercycle(string brand, int price)
    {
        this->brand = brand;
        this->price = price;
    }
    void display()
    {
        cout << brand << endl;
        cout << price << endl;
    }
};
int main()
{
    Car obj1("v8", "Mercedes");
    Motercycle obj2("pulsar 220", 600000);
    obj1.start();
    obj1.display();
    obj2.check();
    obj2.display();
    return 0;
}