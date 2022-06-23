
// lớp cha, lớp con
// vd: quản lí trường học:
// + sinh viên
// + giáo viên
// + nhân viên
// => lớp cha: Person (con người)

#include <bits/stdc++.h>
using namespace std;

class Person {
private:
    string ten, diaChi;

public:
    string getTen()
    {
        return ten;
    }
    string getDiaChi()
    {
        return diaChi;
    }
    void setTen(string ten)
    {
        this->ten = ten;
    }
    void setDiaChi(string diaChi)
    {
        this->diaChi = diaChi;
    }
};

class Student : public Person { // class Student ke thua class Person (Student is-a Person)
private:
public:
};

int main()
{

    return 0;
}