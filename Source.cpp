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

    //�������� ������
    cout << ("������ ����� �����:");
    cin >> x;
    cout << "������ ����� �����:";
    cin >> y;
    cout << "������ ��";
    cin >> z;

    //������� �� ����� ������
    if (z == "+")
        cout << x + y;
    if (z == "-")
        cout << x - y;
    if (z == "*")
        cout << x * y;
    if (z == "/")
        cout << x * y;
}