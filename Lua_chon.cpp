#include <iostream>
#include <string>
#include <vector>

#include "Sinh_vien.cpp"

using namespace std;

class Lua_chon
{
    private:
    int n;
    vector <Sinh_vien> sv;

    string ho_ten;
    int mssv;

    public:
    void NhapDS()
    {
        cout << "Nhap so luong sinh vien: ";
        cin >> n;
        sv.resize(n);
        for (int i = 0; i<n; i++)
        {
            cout << "Nhap ho ten sinh vien thu " << i <<":";
            cin.ignore();
            getline(cin,ho_ten);
            sv[i].setHo_ten(ho_ten);
            cout << "Nhap MSSV sinh vien thu " << i <<":";
            cin >> mssv;
            sv[i].setMssv(mssv);
        }
    }

    void XuatDS()
    {
        for (int i = 0; i<n; i++)
        {
            cout << "Ho ten sinh vien thu " << i << ":" <<sv[i].getHo_ten() << "\n";
            cout << "MSSV sinh vien thu " << i << ":" <<sv[i].getMssv() << "\n";
        }
        system("pause");
    }
};