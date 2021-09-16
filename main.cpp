#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c;
    cout << "Zadejte cislo a: ";
    cin >> a;
    cout << "Zadejte cislo b: ";
    cin >> b;
    cout << "Zadejte cislo c: ";
    cin >> c;

    system("cls");

    float s = (a+b+c)/2;
    float S = sqrtf(s*(s-a)*(s-b)*(s-c));

    if (a + b >= c && a + c >= b && b + c >= a)
    {
        cout << "Obsah: " << S << endl;
    }
    else
    {
        cout << "Trojuhelnik nelze sestrojit!" << endl;
    }

    system("PAUSE");

    return 0;
}