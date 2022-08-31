#include <iostream>
#include <cmath>
#include "t.h"
using namespace std;

int main()
{
    int area = Triangle(10, 10, 10).getArea();
    cout << "The area of the triangle is " << area << endl;

    Triangle result = Triangle(10, 10, 10).scale(2);

    return 0;
}