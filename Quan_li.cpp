#include <iostream>

#include "Lua_chon.cpp"

using namespace std;

class Quan_li : private Lua_chon
{
    private:
    int lua_chon;
    
    public:
    Quan_li()
    {
        do
        {
            system("cls");
			cout << "1. Nhap danh sach sinh vien\n";
			cout << "2. Hien danh sach sinh vien\n";
            cout << "3. Nhap diem sinh vien\n";
            cout << "0. Thoat\n";

            cout << "\n\nNhap lua chon: ";
            cin >> lua_chon;

            switch(lua_chon)
            {
                case 1:
                {
                    Lua_chon::NhapDS();
                }
                break;
                case 2:
                {
                    Lua_chon::XuatDS();
                }
                break;
                case 3:
                {
                    Lua_chon::NhapDiem();
                }
                break;
                case 0:
                {
                    break;
                }
                break;
                default:
                {
                    cout << "Lua chon khong phu hop, vui long nhap lai! \n";
                    system("pause");
                }
            }
        }
        while(lua_chon !=0);
    }
};