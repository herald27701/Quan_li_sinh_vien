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
    vector<Sinh_vien> sv;
    bool err;
    string ho_ten;
    int mssv;

    float diem_NMLT, diem_CTDLGT, diem_OOP, diem_DATABASE;

public:
    void NhapDS()
    {
        cout << "Nhap so luong sinh vien: ";
        cin >> n;
        sv.resize(n);
        for (int i = 0; i < sv.size(); i++)
        {
            cout << "Nhap ho ten sinh vien thu " << i << ": ";
            cin.ignore();
            getline(cin, ho_ten);
            sv[i].setHo_ten(ho_ten);
            cout << "Nhap MSSV sinh vien thu " << i << ": ";
            do
            {
                try
                {
                    cin >> mssv;
                    if (!cin)
                    {
                        cin.clear();
                        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        throw "Hay nhap lai MSSV: ";
                    }
                    err = false;
                }
                catch (const char *Loi)
                {
                    err = true;
                    cout << Loi;
                }
            } while (err == true);

            sv[i].setMssv(mssv);
        }
    }

    void XuatDS()
    {
        cout << left << setw(10) << "Si so" << left << setw(15) << "Ho va ten" << left << setw(10) << "MSSV" << left << setw(10) << "Diem NMLT" << left << setw(10) << "Diem CTDL" << left << setw(10) << "Diem OOP" << left << setw(10) << "Diem DATABASE"
             << "\n";
        for (int i = 0; i < n; i++)
        {
            cout << left << setw(10) << i << left << setw(15) << sv[i].getHo_ten() << left << setw(10) << sv[i].getMssv() << left << setw(10) << sv[i].getNMLT() << left << setw(10) << sv[i].getCTDLGT() << left << setw(10) << sv[i].getOOP() << left << setw(10) << sv[i].getDATABASE() << "\n";
        }
        system("pause");
    }

    void NhapDiem()
    {

        for (int i = 0; i < sv.size(); i++)
        {
            cout << "Nhap diem sinh vien thu " << i << ":\n";
            cout << "\tNhap diem Nhap mon Lap trinh: ";
            cin >> diem_NMLT;
            sv[i].setNMLT(diem_NMLT);
            cout << "\tNhap diem Cau truc du lieu Giai Thuat: ";
            cin >> diem_CTDLGT;
            sv[i].setCTDLGT(diem_CTDLGT);
            cout << "\tNhap diem Lap trinh Huong doi tuong: ";
            cin >> diem_OOP;
            sv[i].setOOP(diem_OOP);
            cout << "\tNhap diem Co so Du lieu: ";
            cin >> diem_DATABASE;
            sv[i].setDATABASE(diem_DATABASE);
        }
    }
};