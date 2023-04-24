#include <iostream>
#include <conio.h>
#include <math.h>


using namespace std;
int UC(int a, int b);
int UCLN(int a, int b);
int BCNN(int a, int b);
int main()
{
    int a, b;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "\nUoc chung cua " << a << " va " << b << " la " << UC(a, b);
    cout << "\nUoc chung lon nhat nhat cua " << a << " va " << b << " la " << UCLN(a, b);
    cout << "\nBoi chung nho nhat cua " << a << " va " << b << " la " << BCNN(a, b);
    _getch();
    return 1;
}

int UC(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }

    return a;
}

int UCLN(int a, int b)
{
    if (b == 0)
        return a;
    return UCLN(b, a % b);
}
int BCNN(int a, int b)
{
    int kq;
    kq = a * b / UCLN(a, b);
    return kq;
}