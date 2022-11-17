#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;


int main()
{

    float x, y;
    string z;

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //введенн€ данних
    cout << ("¬вед≥ть перше число:");
    cin >> x;
    cout << "¬вед≥ть друге число:";
    cin >> y;
    cout << "¬вед≥ть д≥ю";
    cin >> z;

    //обробка та вивод данних
    if (z == "+")
        cout << x + y;
    if (z == "-")
        cout << x - y;
    if (z == "*")
        cout << x * y;
    if (z == "/")
        cout << x * y;
}