#include <iostream>
#include <cmath>
using namespace std;

class Shape
{
public:
    virtual double area() = 0;
};

class Rectangle : public Shape
{
private:
    double width;
    double height;

public:
    Rectangle(double w, double h)
    {
        width = w;
        height = h;
    }
    double area()
    {
        return width * height;
    }
};

class Triangle : public Shape
{
private:
    double base;
    double height;

public:
    Triangle(double b, double h)
    {
        base = b;
        height = h;
    }
    double area()
    {
        return 0.5 * base * height;
    }
};

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r)
    {
        radius = r;
    }
    double area()
    {
        return M_PI * radius * radius;
    }
};

int main()
{
    Shape *shapes[3];
    shapes[0] = new Rectangle(4, 5);
    shapes[1] = new Triangle(3, 6);
    shapes[2] = new Circle(2.5);

    for (int i = 0; i < 3; i++)
    {
        cout << "Area of shape " << i + 1 << ": " << shapes[i]->area() << endl;
    }

    return 0;
}