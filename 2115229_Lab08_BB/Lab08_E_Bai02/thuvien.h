#pragma once

struct NgayThangNam
{
	unsigned int ngay;
	unsigned int thang;
	unsigned int nam;
};

struct thuebao
{
	unsigned int MSTB;
	char HoVaTen[50];
	char DiaChi[100];
	char SDT[12];
	NgayThangNam NgayHopDong;
};




void Nhap1TB(thuebao& p);
void NhapDSTB(thuebao a[100], int n);
void Xuat1TB(thuebao p);
void XuatDSTB(thuebao a[100], int n);
void TimSDT(thuebao a[100], int n, char Ten[50]);
void CacTBCungDiaChi(thuebao a[100], int n, char DC[100]);
void TimTBKhiBietSDT(thuebao a[100], int n, char SDT[12]);
void Nhap1TB(thuebao& p)
{
	cout << "\nNhap MSTB";
	cin >> p.MSTB;
	cin.ignore();
	cout << "\nNhap ho va ten ";
	gets_s(p.HoVaTen, 50);
	
	cout << "\nNhap dia chi";
	gets_s(p.DiaChi, 100);

	cout << "\nNhap sdt ";
	gets_s(p.SDT, 12);
	do
	{
		cout << "\nNhap ngay hop dong ";
		cout << "\nNgay:";
		cin >> p.NgayHopDong.ngay;
	} while (p.NgayHopDong.ngay > 31);
	do
	{
		cout << "\nThang";
		cin >> p.NgayHopDong.thang;
	} while (p.NgayHopDong.thang > 12);
	cout << "\nNam";
	cin >> p.NgayHopDong.nam;
}

void NhapDSTB(thuebao a[100], int n)
{
	for (int i = 0; i < n; i++)
	{
		system("CLS");
		cout << "\nNhap thue bao thu " << i+1;
		Nhap1TB(a[i]);
	}
}

void Xuat1TB(thuebao p)
{
	cout << "\nMSTB:" << p.MSTB;
	cout << "\nDia Chi:" << p.DiaChi;
	cout << "\nSo dien thoat:" << p.SDT;
	cout << "\nNgay hop dong" << "(" << p.NgayHopDong.ngay<<","<< p.NgayHopDong.thang<<","<< p.NgayHopDong.nam << ")";

}

void XuatDSTB(thuebao a[100], int n)
{
	int i = 0;

	for ( i = 0; i < n; i++)
	{
		cout << endl;
		cout << "\nThong tin thue bao thu" << i + 1;
		Xuat1TB(a[i]);
	}
}

void TimSDT(thuebao a[100], int n, char Ten[50])
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (strcmp(a[i].HoVaTen, Ten) == 0)
			cout << "\nSo dien thoai cua nguoi dung " << Ten << " la:" << a[i].SDT;

	}
}

void CacTBCungDiaChi(thuebao a[100], int n, char DC[100])
{
	for (int i = 0; i < n; i++)
	{
		if (strcmp(a[i].DiaChi, DC) == 0)
		{
			Xuat1TB(a[i]);
			cout << endl;
		}
	}	
}

void TimTBKhiBietSDT(thuebao a[100], int n, char SDT[12])
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (strcmp(a[i].SDT, SDT) == 0)
		{
			cout << "\nThong tin nguoi dung co SDT: " << SDT << " la:";
			Xuat1TB(a[i]);
			cout << endl;
		}

	}
}