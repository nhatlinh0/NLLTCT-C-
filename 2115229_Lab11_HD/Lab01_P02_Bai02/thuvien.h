void Write_Int(int a[], int n, char* filename)
{
	ofstream out(filename); //Mo de ghi
	if (!out)
	{
		cout << "\nLoi mo file !";
		return;
	}
	out << n; //ghi kich thuoc mang vao tap tin
	out << ’\n’; //xuong hang
	for (int i = 0; < n; i++)
	{
		out << a[i];//lan luot ghi a[i] vao tap tin
		out << '\t'; //2 gia tri trong tap tin cach 1 tab
	}
	out.close();
	cout << "\nghi xong du lieu vao tep " << filename;
}

void File_Display1(char* filename)
{
	int n, x;
	ifstream in(filename); //Mo de doc
	if (!in)
		
	{
		cout << "\nLoi mo file !";
		return;
	}
	in >> n;
	cout << endl << n << endl;
	for (int i = 0; i < n; i++)
	{
		in >> x;
		cout << x << '\t';
	}
	in.close();
}
