#include <bits/stdc++.h>

using namespace std;

class Account {
private:
    string username, password;

public:
    Account()
    {
    }
    Account(string username, string password)
    {
        this->username = username;
        this->password = password;
    }
    string getUsername()
    {
        return username;
    }
    string getPassword()
    {
        return password;
    }
    void setUsername(string username)
    {
        this->username = username;
    }
    void setPassword(string password)
    {
        this->password = password;
    }
};

class Date {
private:
    int ngay, thang, nam;

public:
    Date()
    {
    }
    Date(int ngay, int thang, int nam)
    {
        this->ngay = ngay;
        this->thang = thang;
        this->nam = nam;
    }
    int getNgay()
    {
        return this->ngay;
    }
    int getThang()
    {
        return this->thang;
    }
    int getNam()
    {
        return this->nam;
    }
    void setNgay(int ngay)
    {
        this->ngay = ngay;
    }
    void setThang(int thang)
    {
        this->thang = thang;
    }
    void setNam(int nam)
    {
        this->nam = nam;
    }
};

class Person {
private:
    string ten, diachi;
    int tuoi;
    Date ngaysinh;

public:
    Person(string ten, string diachi, int tuoi, Date ngaysinh)
    {
        this->ten = ten;
        this->diachi = diachi;
        this->tuoi = tuoi;
        this->ngaysinh = ngaysinh;
    }
    string getTen()
    {
        return this->ten;
    }
    string getDiaChi()
    {
        return this->diachi;
    }

    void inthongtin()
    {
        cout << ten << ' ' << diachi << ' ' << tuoi << ' ' << ngaysinh.getNgay() << ' ' << ngaysinh.getThang() << ' ' << ngaysinh.getNam() << endl;
    }
    Date getNgaySinh()
    {
        return ngaysinh;
    }
};

class Student : public Person {
private:
    string email, emailPassword, id, lop;
    double gpa;
    Account acc;

public:
    Student(string ten, string diachi, int tuoi, Date ngaysinh, string id, string lop, double gpa)
        : Person(ten, diachi, tuoi, ngaysinh)
    {
        this->id = id;
        this->lop = lop;
        this->gpa = gpa;
    }

    void setEmail()
    {
        string res = "";
        string tmp = Person::getTen();
        vector<string> v;
        stringstream ss(tmp);
        string token;
        while (ss >> token) {
            v.push_back(token);
        }
        for (char c : v.back())
            res += tolower(c);
        for (int i = 1; i < v.size(); i++) {
            res += tolower(v[i][0]);
        }
        res += "@ptit.edu.vn";
        email = res;
    }

    void setEmailPassword()
    {
        string res = "";
        string tmp = Person::getTen();
        for (char x : tmp) {
            if (x != ' ')
                res += tolower(x);
        }
        for (char x : id) {
            res += tolower(x);
        }
        emailPassword = res;
    }

    void setAccount()
    {
        string user = "";
        string tmp = Person::getTen();
        for (char x : tmp) {
            if (x != ' ')
                user += toupper(x);
        }
        string pass = "";
        Date date = Person::getNgaySinh();
        pass += to_string(date.getNgay()) + to_string(date.getThang()) + to_string(date.getNam()) + "@";
        acc.setUsername(user);
        acc.setPassword(pass);
    }
    void inthongtin()
    {
        Person::inthongtin();
        cout << id << ' ' << lop << ' ' << gpa << ' ' << email << ' ' << emailPassword << endl;
        cout << acc.getUsername() << endl;
        cout << acc.getPassword() << endl;
    }
};

int main()
{
    Date date(22, 12, 2002);
    Student s("Nguyen Van Nam", "Hai Duong", 22, date, "D20DCCN387", "CNTT1", 3.5);
    s.setEmail();
    s.setEmailPassword();
    s.setAccount();
    s.inthongtin();
    return 0;
}