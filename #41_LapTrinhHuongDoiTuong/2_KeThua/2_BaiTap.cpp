// Bài tập Kế thừa.
// Xây dựng lớp Account gồm 2 thuộc tính Username và Password, các hàm tạo, hàm
// hủy, get, set.
// Xây dựng lớp Date bao gồm 3 thuộc tính là Day, Month, Year, các hàm tạo, hàm
// hủy, get, set.
// Xây dựng lớp Person gồm 3 thuộc tính :Name, Age, Address, DateOfBirth có kiểu
// là Date.
// a. Lớp Student kế thừa lớp Person và có thêm các thuộc tính ID, Gpa, Email,
// EmailPassword, Class, Acc có kiểu là Account.
// Yêu cầu: Tiến hành xây dựng menu lựa chọn cho phép nhập thông tin của Student
// bao gồm các thông tin Name, Class, Address, ID, Gpa, DateOfBirth.Sau khi có đầy
// đủ thông tin Student tiến hành cấp mới Email sinh viên và mật khẩu truy cập, mail
// của Student được cung cấp theo mẫu sau
// Ví dụ : Name: Nguyen Quang Huy, ID :B19DVT305  Email
// :huynq@ptit.edu.vn, EmailPassword : nguyenquanghuyb19dcvt305@.
// Account truy cập trang quản lý đào tạo của Student được cấp theo mẫu sau
// Ví dụ :Name: Nguyen Quang Huy, DateOfBirth: 15 10 2001 Username:
// NGUYENQUANGHUY, Password: 15102001@.
// Hiển thị đầy đủ thông tin sinh viên có trong danh sách vừa nhập, bao gồm cả tài
// khoản truy cập trang quản lý đào tạo và Email sinh viên.

#include <bits/stdc++.h>
using namespace std;

class Account {
private:
    string username, password;

public:
    Account() { }
    Account(string username, string password)
    {
        this->username = username;
        this->password = password;
    }
    string getUsername()
    {
        return this->username;
    }
    string getPassword()
    {
        return this->password;
    }
    void setUsername(string username)
    {
        this->username = username;
    }
    void setPassword(string password)
    {
        this->password = password;
    }
    ~Account() { }
};

class Date {
private:
    int day, month, year;

public:
    Date() { }
    Date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    int getDay()
    {
        return this->day;
    }
    int getMonth()
    {
        return this->month;
    }
    int getYear()
    {
        return this->year;
    }
    void setDay(int day)
    {
        this->day = day;
    }
    void setMonth(int month)
    {
        this->month = month;
    }
    void setYear(int year)
    {
        this->year = year;
    }

    string getDate()
    {
        string tmp = to_string(this->day) + "/" + to_string(this->month) + "/" + to_string(this->year);
        return tmp;
    }
    void in(Date D)
    {
        cout << day << " " << month << " " << year;
    }
    ~Date() { }
};

class Person {
private:
    string Name, Address;
    int Age;
    Date DateOfBirth;

public:
    Person() { }
    Person(string Name, string Address, int Age, Date DateOfBirth)
    {
        this->Name = Name;
        this->Address = Address;
        this->Age = Age;
        this->DateOfBirth = DateOfBirth;
    }
    string getName()
    {
        return this->Name;
    }
    string getAddress()
    {
        return this->Address;
    }
    string getDateOfBirth()
    {
        return this->DateOfBirth.getDate();
    }
    void setName(string Name)
    {
        this->Name = Name;
    }
    void setAddress(string Address)
    {
        this->Address = Address;
    }
    void setDateOfBirth(string setDateOfBirth)
    {
        this->DateOfBirth = DateOfBirth;
    }
    void in()
    {
        cout << Name << " " << Address << " " << Age << " " << this->DateOfBirth.getDate();
    }
    ~Person() { }
};

class Student : public Person {
private:
    string ID, Email, EmailPassword, Class;
    double Gpa;
    Account Acc;

public:
    Student() { }
    Student(string Name, string Class, string Address, string ID, double Gpa, string DateOfBirth)
    {
        this->setName(Name);
        this->Class = Class;
        this->setAddress(Address);
        this->ID = ID;
        this->Gpa = Gpa;
        this->setDateOfBirth(DateOfBirth);
    }
};

int main()
{
    Date date(31, 05, 2001);
    Person p("Vu Van Thuc", "Nam Dinh", 21, date);
    p.in();
    return 0;
}