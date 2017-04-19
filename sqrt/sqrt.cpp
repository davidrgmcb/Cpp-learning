// sqrt.cpp -- using the sqrt() function

#include <iostream>
#include <cmath>

int main()
{
    using namespace std;

    double area;
    cout << "Enter the area of your home in square feet: ";
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "That's the equivalent of a square " << side
    << " feet on each side." << endl;
    cout << "How fascinating." << endl;
    return 0;
}