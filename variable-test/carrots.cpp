// carrots.cpp -- food processing program
// uses and displays a variable
#include <iostream>
int main()
{
    using namespace std;

    int carrots;

    carrots = 25;
    cout << "I have ";
    cout << carrots;
    cout << " carrots";
    cout << endl;
    carrots--;
    cout << "Crunch crunch now I have ";
    cout << carrots;
    cout << " left." << endl;
    return 0;
}
