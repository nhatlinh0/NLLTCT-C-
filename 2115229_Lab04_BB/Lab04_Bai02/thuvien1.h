
#pragma once

void CauA();

void CauB();

void CauC();

void CauD();

void Xuat(int so);
void DoiCoSo(int n, int b);
int TimLuyThua(int b, int n);

void CauA()
{
    int n;
    cout << "Nhap he so n"; cin >> n;
    DoiCoSo(n, 2);
}

void CauB()
{
    int n;
    cout << "Nhap he so n"; cin >> n;
    DoiCoSo(n, 8);
}

void CauC()
{
    int n;
    cout << "Nhap he so n"; cin >> n;
    DoiCoSo(n, 16);
}

void CauD()
{
    int n;
    cout << "Nhap he so n"; cin >> n;
    DoiCoSo(n, 7);
}


void Xuat(int so)
{
    if (0 <= so && so <= 15) 
    {
        if (so <= 9) 
            cout << so;
        else 
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
