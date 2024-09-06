#include <iostream>
using namespace std;

// write a  program thats takes an input of age
// print if    you are adult or not

// >= 18 , you are adult
// < 18 , you are not adult

int main()
{
    int age;
    cin >> age;

    if (age >= 18)
    {
        cout << "You are Adult";
    }
    else if (age > 18)
    {
        cout << " You are Not Adult";
    }

    return 0;
}