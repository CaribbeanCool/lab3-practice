#include <cmath>
using namespace std;

class Triangle
{
private:
    int side1;
    int side2;
    int side3;

public:
    int getSide1() { return side1; }
    int getSide2() { return side2; }
    int getSide3() { return side3; }

    Triangle(int side1, int side2, int side3)
    {
        this->side1 = side1;
        this->side2 = side2;
        this->side3 = side3;
    }

    double getArea()
    {
        double s = (this->side1 + this->side2 + this->side3) / 2.0;
        return sqrt(s * (s - this->side1) * (s - this->side2) * (s - this->side3));
    }

    bool hasLargerArea(Triangle t1, Triangle t2)
    {
        return this->getArea() > this->getArea();
    }

    static double sumOfAreas(Triangle triangles[], int size)
    {
        double sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += triangles[i].getArea();
        }
        return sum;
    }

    Triangle scale(double scale)
    {
        return Triangle(this->side1 * scale, this->side2 * scale, this->side3 * scale);
    }
};