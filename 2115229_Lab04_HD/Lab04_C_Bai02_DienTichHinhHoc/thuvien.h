#pragma once
// Dinh nghia cac hang so va cac kieu du lieu moi
#define PI 3.1415926
// Khai bao nguyen mau cac ham xu ly
double DienTichHinhVuong(double canh);
double DienTichHinhChuNhat(double dai, double rong);
double DienTichTamGiac(double a, double b, double c);
double DienTichHinhTron(double banKinh);
// Dinh nghia ham tinh dien tich hinh vuong
// Input : 
// canh = Do dai canh hinh vuong
// Output : Dien tich hinh vuong

double DienTichHinhVuong(double canh)
{
	return canh * canh;
}

// Dinh nghia ham tinh dien tich hinh chu nhat
// Input :
// dai : Chieu dai cua HCN
// rong : Chieu rong cua HCN
// Output : Dien tich cua HCN
double DienTichHinhChuNhat(double dai, double rong)
{
	return dai * rong;
}


// Dinh nghia ham tinh dien tich hinh tam giac
// Input: 
// a, b, c : Chieu dai 3 canh cua tam giac
// Output: Dien tich hinh tam giac
double DienTichTamGiac(double a, double b, double c)
{
	double p = (a + b + c) / 2;
	return sqrt(p + (p - a) + (p - b) + (p - c));
}


// Dinh nghia ham tinh dien tich hinh tron
// Input : banKinh = Do dai ban kinh hinh tron
// Output : Dien tich hinh trong
double DienTichHinhTron(double banKinh)
{
	return PI * banKinh * banKinh;
}