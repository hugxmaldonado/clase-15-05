#include <iostream>
using namespace std;

int main()
{
    int edad;
    cout << "ingrese la edad del usuario: ";
    cin >> edad;

    if (edad >= 18)
    {
        cout << "el usuario es mayor de edad";
    }

    else cout << "el usuario es menor de edad";
    return 0;
}

