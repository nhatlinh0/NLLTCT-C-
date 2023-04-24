#include<iostream>
#include<conio.h>
using namespace std;
int main() {
    double a, b, c, d, e;
    cout << "Vui long nhap mot phim bat ky de may in ra tat ca cac nghiem cua phuong trinh 3a-2b+4c+5d-e = 30 (0<=a,b,c,d,e<=10)" << '\n';
    _getch();
    for (a = 0; a <= 10; a++) {
        for (b = 0; b <= 10; b++) {
            for (c = 0; c <= 10; c++) {
                for (d = 0; d <= 10; d++) {
                    for (e = 0; e <= 10; e++) {
                        if (30 == 3 * a - 2 * b + 4 * c + 5 * d - e) {
                            cout << "Cac so A la nghiem cua phuong trinh : " << a << '\n';
                            cout << "Cac so B la nghiem cua phuong trinh : " << b << '\n';
                            cout << "Cac so C la nghiem cua phuong trinh : " << c << '\n';
                            cout << "Cac so D la nghiem cua phuong trinh : " << d << '\n';
                            cout << "Cac so E la nghiem cua phuong trinh : " << e << '\n';
                        }
                    }
                }
            }
        }
    }
    _getch();
    return 1;
}