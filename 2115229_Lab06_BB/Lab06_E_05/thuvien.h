#pragma once
#define MAX 100
#define TAB '\t'

typedef int DaySo[MAX];
void NhapMang(DaySo a, int n);
void XuatMang(DaySo a, int n);




void NhapMang(DaySo a, int n)
{

	int i;
	
	for (i = 0; i < n; i++)
	{
		
		cout << "a[" << i << "] = ";
		
		cin >> a[i];
	}
}
void XuatMang(DaySo a, int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << a[i] << TAB; //hai gia tri cach nhau 1 tab
}
void My(DaySo a, int n)
{

	int Yen = n * 113.38;
	cout << "\nYen Nhat : " << Yen << " JDP ";
	int BangAnh = n * 0.7535;
	cout << "\nBang Anh : " << BangAnh << " GBP ";
	int Euro = n * 0.8835;
	cout << "\nEuro : " << Euro << " EUR ";
	int baht = n * 33.6;
	cout << "\nBaht Thai : " << baht << " THB ";
	int VND = n * 23000;
	cout << "\nViet Nam Dong : " << VND << " VND ";
	int china = n * 6.36;
	cout << "\nNhan Dan Te : " << china << " CNY ";
	int won = n * 1180.98;
	cout << "\nWon : " << won << " KRW ";
	int ruble = n * 73.41;
	cout << "\nRuble Nga : " << ruble << " RUB ";
	int rupee = n * 75.77;
	cout << "\nRupee : " << rupee << " INR ";
}
void Nhat(DaySo a, int n)
{
	int dola = n * 0.0088;
	cout << "Dola : " << dola << " USD ";
	int BangAnh = n * 0.0066;
	cout << "\nBang Anh : " << BangAnh << " GBP ";
	int Euro = n * 0.0077;
	cout << "\nEuro : " << Euro << " EUR ";
	int baht = n * 0.29;
	cout << "\nBaht Thai : " << baht << " THB ";
	int VND = n * 203.15;
	cout << "\nViet Nam Dong : " << VND << " VND ";
	int china = n * 0.05;
	cout << "\nNhan Dan Te : " << china << " CNY ";
	int won = n * 10.41;
	cout << "\nWon : " << won << " KRW ";
	int ruble = n * 0.64;
	cout << "\nRuble Nga : " << ruble << " RUB ";
	int rupee = n * 0.66;
	cout << "\nRupee : " << rupee << " INR ";
}
void Anh(DaySo a, int n)
{
	int dola = n * 1.32;
	cout << "Dola : " << dola << " USD ";
	int Yen = n * 150.4;
	cout << "\nYen Nhat : " << Yen << " JDP ";
	int Euro = n * 1.17;
	cout << "\nEuro : " << Euro << " EUR ";
	int baht = n * 44.59;
	cout << "\nBaht Thai : " << baht << " THB ";
	int VND = n * 30610.6;
	cout << "\nViet Nam Dong : " << VND << " VND ";
	int china = n * 8.45;
	cout << "\nNhan Dan Te : " << china << " CNY ";
	int won = n * 1567.27;
	cout << "\nWon : " << won << " KRW ";
	int ruble = n * 97.42;
	cout << "\nRuble Nga : " << ruble << " RUB ";
	int rupee = n * 100.56;
	cout << "\nRupee : " << rupee << " INR ";
}
void euro(DaySo a, int n)
{
	int dola = n * 1.13;
	cout << "Dola : " << dola << " USD ";
	int Yen = n * 128.32;
	cout << "\nYen Nhat : " << Yen << " JDP ";
	int BangAnh = n * 0.85;
	cout << "\nBang Anh : " << BangAnh << " GBP ";
	int baht = n * 38.03;
	cout << "\nBaht Thai : " << baht << " THB ";
	int VND = n * 26085;
	cout << "\nViet Nam Dong : " << VND << " VND ";
	int china = n * 7.20;
	cout << "\nNhan Dan Te : " << china << " CNY ";
	int won = n * 1336.6;
	cout << "\nWon : " << won << " KRW ";
	int ruble = n * 83.08;
	cout << "\nRuble Nga : " << ruble << " RUB ";
	int rupee = n * 85.76;
	cout << "\nRupee : " << rupee << " INR ";
}
void Thai(DaySo a, int n)
{
	int dola = n * 0.029;
	cout << "Dola : " << dola << " USD ";
	int Yen = n * 3.37;
	cout << "\nYen Nhat : " << Yen << " JDP ";
	int BangAnh = n * 0.0224;
	cout << "\nBang Anh : " << BangAnh << " GBP ";
	int Euro = n * 0.026;
	cout << "\nEuro : " << Euro << " EUR ";
	int VND = n * 668.49;
	cout << "\nViet Nam Dong : " << VND << " VND ";
	int china = n * 0.18;
	cout << "\nNhan Dan Te : " << china << " CNY ";
	int won = n * 35.13;
	cout << "\nWon : " << won << " KRW ";
	int ruble = n * 2.18;
	cout << "\nRuble Nga : " << ruble << " RUB ";
	int rupee = n * 2.25;
	cout << "\nRupee : " << rupee << " INR ";
}
void VN(DaySo a, int n)
{
	int dola = n * 0.000043412452;
	cout << "Dola : " << dola << " USD ";
	int Yen = n * 0.004922;
	cout << "\nYen Nhat : " << Yen << " JDP ";
	int BangAnh = n * 0.000032712;
	cout << "\nBang Anh : " << BangAnh << " GBP ";
	int Euro = n * 0.00003835;
	cout << "\nEuro : " << Euro << " EUR ";
	int china = n * 0.0002765;
	cout << "\nNhan Dan Te : " << china << " CNY ";
	int won = n * 0.05126;
	cout << "\nWon : " << won << " KRW ";
	int ruble = n * 0.003187;
	cout << "\nRuble Nga : " << ruble << " RUB ";
	int rupee = n * 0.0032899;
	cout << "\nRupee : " << rupee << " INR ";

}
void TQ(DaySo a, int n)
{
	int dola = n * 0.15698;
	cout << "Dola : " << dola << " USD ";
	int Yen = n * 17.79;
	cout << "Yen Nhat : " << Yen << " JDP ";
	int BangAnh = n * 0.1182;
	cout << "\nBang Anh : " << BangAnh << " GBP ";
	int Euro = n * 0.1387;
	cout << "\nEuro : " << Euro << " EUR ";
	int VND = n * 3615.67;
	cout << "\nViet Nam Dong : " << VND << " VND ";
	int won = n * 185.39;
	cout << "\nWon : " << won << " KRW ";
	int ruble = n * 11.524;
	cout << "\nRuble Nga : " << ruble << " RUB ";
	int rupee = n * 11.895;
	cout << "\nRupee : " << rupee << " INR ";
}
void HQ(DaySo a, int n)
{
	int dola = n * 0.00084675248;
	cout << "Dola : " << dola << " USD ";
	int Yen = n * 0.096;
	cout << "Yen Nhat : " << Yen << " JDP ";
	int Euro = n * 0.00074814801;
	cout << "\nEuro : " << Euro << " EUR ";
	int VND = n * 19.501;
	cout << "\nViet Nam Dong : " << VND << " VND ";
	int china = n * 0.005393;
	cout << "\nNhan Dan Te : " << china << " CNY ";
	int ruble = n * 0.062160;
	cout << "\nRuble Nga : " << ruble << " RUB ";
	int rupee = n * 0.064162;
	cout << "\nRupee : " << rupee << " INR ";
}
void Nga(DaySo a, int n)
{
	int dola = n * 0.013622014;
	cout << "Dola : " << dola << " USD ";
	int Yen = n * 1.544;
	cout << "Yen Nhat : " << Yen << " JDP ";
	int Euro = n * 0.012035724;
	cout << "\nEuro : " << Euro << " EUR ";
	int VND = n * 313.72;
	cout << "\nViet Nam Dong : " << VND << " VND ";
	int china = n * 0.0867;
	cout << "\nNhan Dan Te : " << china << " CNY ";
	int won = n * 16.087;
	cout << "\nWon : " << won << " KRW ";
	int rupee = n * 1.032;
	cout << "\nRupee : " << rupee << " INR ";

}
void AnDo(DaySo a, int n)
{
	int dola = n * 0.013196929;
	cout << "Dola : " << dola << " USD ";
	int Yen = n * 1.496;
	cout << "Yen Nhat : " << Yen << " JDP ";
	int Euro = n * 0.011660444;
	cout << "\nEuro : " << Euro << " EUR ";
	int VND = n * 303.939;
	cout << "\nViet Nam Dong : " << VND << " VND ";
	int china = n * 0.08406582;
	cout << "\nNhan Dan Te : " << china << " CNY ";
	int won = n * 15.585;
	cout << "\nWon : " << won << " KRW ";
	int ruble = n * 0.96880167;
	cout << "\nRuble Nga : " << ruble << " RUB ";

}
