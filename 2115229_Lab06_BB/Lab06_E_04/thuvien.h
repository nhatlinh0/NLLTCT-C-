#pragma once

typedef int Lich[6][7];

int TimThu(int m, int y)
{
    int t, x, k, w;
    t = y - (14 - m) / 12;
    x = t + t / 4 - t / 100 + t / 400;
    k = m + 12 * ((14 - m) / 12) - 2;
    w = (1 + x + (31 * k) / 12) % 7;
    return w;
}

int TimSoNgay(int m, int y) {
    if (m == 2) {
        if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))
            return 29;
        return 28;
    }
    else if (m == 1 || m == 3 || m == 5 || m == 7 ||
        m == 8 || m == 10 || m == 12)
        return 31;
    return 30;
}

void TimLich(Lich lich, int m, int y)
{
    int ngayDauTien = TimThu(m, y); // Ngay dau tien cua thang m nam y roi vao thu may, w = 0 (chu nhat),...
    int soNgayToiDa = TimSoNgay(m, y);
    int dem = 1;
    for (int thu = 0; thu <= 6; thu++) //[0;6] la 7 ngay trong tuan
    {
        if (thu < ngayDauTien)
            lich[0][thu] = 0;
        else
        {
            lich[0][thu] = dem;
            dem++;
        }
    }
    for (int tuan = 1; tuan <= 6; tuan++)
        for (int thu = 0; thu <= 6; thu++)
        {
            if (dem <= soNgayToiDa) {
                lich[tuan][thu] = dem;
                dem++;
            }
            else
                lich[tuan][thu] = 0;
        }
}

void XuatLich(Lich lich)
{
    cout << "CN\tT2\tT3\tT4\tT5\tT6\tT7";
    for (int i = 0; i < 6; i++)
    {
        cout << endl;
        for (int j = 0; j < 7; j++)
        {
            if (lich[i][j] == 0)
                cout << "\t";
            else
                cout << lich[i][j] << '\t';
        }
    }
    cout << endl;
}
