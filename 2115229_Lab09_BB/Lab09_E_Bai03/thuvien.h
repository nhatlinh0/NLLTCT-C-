#pragma once
void NhapMaTran(int*& a, int n);
void XuatMaTran(int* a, int n);
int KTMaTranDoiXung(int* a, int n);
int KTMaTranTamGiacTren(int* a, int n);
int KTMaTranTamGiacDuoi(int* a, int n);
int KTMaTranCheo(int* a, int n);
int KTMaTranDonVi(int* a, int n);

void NhapMaTran(int* &a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "]=";
			cin >> *(a +i * n  + j);
		}
		

	}
	
}
void XuatMaTran(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << endl;
		for (int j = 0; j < n; j++)
		{
			cout << *(a + i * n + j) << "\t";
			
		}


	}
}
int KTMaTranDoiXung(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ( *(a + i * n + j) != *(a + j * n + i))
			{
				return 0; 
			}

		}
	}
	return 1;
}

int KTMaTranTamGiacTren(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i > j)
			{
				if ( *(a + i * 3 + j) != 0)
				{
					return 0;
				}
			}
		}
		
	}
	return 1;
}

int KTMaTranTamGiacDuoi(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i < j)
			{
				if (*(a + i * 3 + j) != 0)
				{
					return 0;
				}
			}
		}

	}
	return 1;
}

int KTMaTranCheo(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (*(a + i * 3 + j) != *(a + j * 3 + i)) //|| ( * (a + i * 3 + j) != 0 || *(a + j * 3 + i) != 0))
				return 0;
			if (i > j)
				if (*(a + i * 3 + j) != 0)
					return 0;
			if (i < j)
				if (*(a + i * 3 + j) != 0)
					return 0;
		}
	}
	return 1;
}

int KTMaTranDonVi(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j)
				if (*(a + i * 3 + j) != 1)
					return 0;
			if (i > j)
				if (*(a + i * 3 + j) != 0)
					return 0;
			if (i < j)
				if (*(a + i * 3 + j) != 0)
					return 0;

		}
		
	}
	return 1;
}