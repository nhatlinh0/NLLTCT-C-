#include <iostream>
#include <conio.h>

using namespace std;

void DoiCoSo(int n, int b);

int main()
{
    int n, b;
    cout << "Nhap he so n"; cin >> n;
    cout << "Nhap b (2..16) "; cin >> b;
    DoiCoSo(n, b);
    return 1;

}
void Xuat(int so)
{
    if (0 <= so && so <= 15) //[0;15]
    {
        if (so <= 9) //[0;9]
            cout << so;
        else //[10;15]
        {
            char kyTu = 'A' + so - 10;
            cout << kyTu;
        }
    }
}

int TimLuyThua(int b, int n)
{
    double kq;
    for (int i = 1; pow(b, i) <= n; i++)
    {
        kq = pow(b, i);
    }
    return kq;
}

void DoiCoSo(int n, int b)
{
    int v, so;
    v = TimLuyThua(b, n);
    while (v > 0)
    {
        if (n < v)
            Xuat(0);
        else
        {
            so = n / v;
            Xuat(so);
            n = n - so * v;
        }
        v = v / b;
    }
}
        