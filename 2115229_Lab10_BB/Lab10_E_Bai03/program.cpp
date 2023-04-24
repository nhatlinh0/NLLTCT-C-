#include <iostream>
#include <conio.h>

using namespace std;

int UCLN(int a, int b);

int main()
{
    int a, b;
    cout << "\nNhap a:"; cin >> a;
    cout << "\nNhap b:"; cin >> b;
    cout<<"\nUoc chung lon nhat:"<<UCLN(a, b);
    _getch();
    return 1;
}



int UCLN(int a, int b)


{
    if (a == b)
        return a;
    else
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return UCLN(a, b);
}