#include <iostream>

class Vector {
public:
    Vector(): x(0), y(0), z(0){
    }
    Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z){
    }
    void Show() {
        std::cout << x << ' ' << y << ' ' << z << std::endl;
    }
    double Lenght() {
        return sqrt(x * x + y * y + z * z );
    }
private:
    double x;
    double y;
    double z;
};
int main()
{
    Vector v(5,10,20);
    v.Show();
    std::cout << v.Lenght() << std::endl;
}
