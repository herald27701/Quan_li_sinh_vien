#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <limits>

#include "Sinh_vien.cpp"

using namespace std;

class Lua_chon
{
    private:
    int n;
    vector <Sinh_vien> sv;
    bool err;
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
            cout << "Nhap ho ten sinh vien thu " << i <<": ";
            cin.ignore();
            getline(cin,ho_ten);
            sv[i].setHo_ten(ho_ten);
            cout << "Nhap MSSV sinh vien thu " << i <<": ";
            do
            {
                try
                {
                    cin >> mssv;
                    if(!cin)
                    {
                        cin.clear();
                        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        throw "Hay nhap lai MSSV: ";
                    }
                    err = false;
                }
                catch(const char* Loi)
                {
                    err = true;
                    cout << Loi;
                }
            }
            while (err == true);
            
            sv[i].setMssv(mssv);
        }
    }

    void XuatDS()
    {
        cout << left << setw(10) << "Si so" << left << setw(15) << "Ho va ten" << left << setw(10) << "MSSV" << "\n";
        for (int i = 0; i<n; i++)
        {
            cout << left << setw(10) << i << left << setw(15) << sv[i].getHo_ten() << left << setw(10) << sv[i].getMssv()<< "\n";
        }
        system("pause");
    }
};