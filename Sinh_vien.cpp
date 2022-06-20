#include <iostream>
#include <string>

using namespace std;

class Sinh_vien
{
    private:
    string ho_ten;
    int mssv;

    public:
    Sinh_vien()
    {
        
    }

    Sinh_vien(string ho_ten, int mssv)
    {
        this->ho_ten = ho_ten;
        this->mssv = mssv;
    }

    void setHo_ten(string ho_ten)
    {
        this->ho_ten = ho_ten;
    }
    string getHo_ten()
    {
        return ho_ten;
    }

    void setMssv(int mssv)
    {
        this->mssv = mssv;
    }
    int getMssv()
    {
        return mssv;
    }
};