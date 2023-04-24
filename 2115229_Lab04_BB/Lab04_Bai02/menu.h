#pragma once

void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int Menu);

void XuatMenu()
{
	cout << "\n==============================";
	cout << "\n0. Thoat khoi chuong trinh ";
	cout << "\n1. Doi sang he nhi phan ";
	cout << "\n2. Doi sang he bat phan ";
	cout << "\n3. Doi sang he thap luc phan ";
	cout << "\n4. Doi sang he co so 7 ";
	cout << "\n==============================";
}

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{	
		system("CLS");
		XuatMenu();
		cout << "Nhap mot so (0 <= " << soMenu << " ) " << " de chon menu:";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(int Menu)
{
	switch (Menu)
	{
	case 0:
		cout << "\n Thoat khoi chuong trinh";
		return;
	case 1: 
		
		cout << "\n1. Doi sang he nhi phan ";
		CauA();
		break;
	case 2: 
		cout << "\n2. Doi sang he bat phan ";
		CauB();
		break;
	case 3:
		cout << "\n3. Doi sang he thap luc phan ";
		CauC();
		break;
	case 4:
		cout << "\n4. Doi sang he co so 7 ";
		CauD();
		break;
	}
	_getch();
}