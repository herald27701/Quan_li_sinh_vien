#include <iostream>
#include <string>
#pragma once
using namespace std;

class Sinh_vien
{
    private:
    string ho_ten;
    int mssv;

    float diem_NMLT, diem_CTDLGT, diem_OOP, diem_DATABASE;

    public:
    Sinh_vien()
    {
        
    }

    Sinh_vien(string ho_ten, int mssv, float diem_NMLT, float diem_CTDLGT, float diem_OOP, float diem_DATABASE)
    {
        this->ho_ten = ho_ten;
        this->mssv = mssv;
        this->diem_NMLT = diem_NMLT;
        this->diem_CTDLGT = diem_CTDLGT;
        this->diem_OOP = diem_OOP;
        this->diem_DATABASE = diem_DATABASE;
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

    void setNMLT(float diem_NMLT)
    {
        this->diem_NMLT = diem_NMLT;
    }
    float getNMLT()
    {
        return diem_NMLT;
    }

    void setCTDLGT(float diem_CTDLGT)
    {
        this->diem_CTDLGT = diem_CTDLGT;
    }
    float getCTDLGT()
    {
        return diem_CTDLGT;
    }

    void setOOP(float diem_OOP)
    {
        this->diem_OOP = diem_OOP;
    }
    float getOOP()
    {
        return diem_OOP;
    }

    void setDATABASE(float diem_DATABASE)
    {
        this->diem_DATABASE = diem_DATABASE;
    }
    float getDATABASE()
    {
        return diem_DATABASE;
    }

    float DTB(float diem_NMLT, float diem_CTDLGT, float diem_OOP, float diem_DATABASE)
    {
        return (diem_NMLT + diem_CTDLGT + diem_OOP + diem_DATABASE)/4;
    }
};