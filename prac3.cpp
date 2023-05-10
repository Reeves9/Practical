#include <iostream>
using namespace std;
class Vector
{
public:
    int x, y, z;

    Vector(int x, int y, int z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    Vector()
    {
    }

    void operator+(Vector obj)
    {
        x += obj.x;
        y += obj.y;
        z += obj.z;
        cout << x << " " << y << " " << z << endl;
    }
    void operator-(Vector obj)
    {
        x -= obj.x;
        y -= obj.y;
        z -= obj.z;
        cout << x << " " << y << " " << z << endl;
    }
};

int main()
{
    Vector obj1(5, 6, 7), obj2(1, 2, 3);
    obj1 + obj2;
    obj1 - obj2;
    return 0;
}
