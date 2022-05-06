#include <iostream>
using namespace std;

// khai bao cau truc cay nhi phan
struct node {
    int data;
    struct node* pLeft;
    struct node* pRight;
};

typedef struct node NODE;
typedef NODE* TREE;

// khoi tao cay
void KhoiTaoCay(TREE& t)
{
    t = NULL; // cay rong
}

// ham them phan tu vao cay nhi phan
void ThemNodeVaoCay(TREE& t, int x)
{
    if (t == NULL) { // neu cay rong
        NODE* p = new NODE; // khoi tao node goc cho cay
        p->data = x; // set du lieu cho node goc
        p->pLeft = NULL;
        p->pRight = NULL;
        t = p; // node p la node goc
    } else // neu cay da co phan tu
    {
        // neu phan tu them vao nho hon node goc ==> them no vao ben trai
        if (t->data > x) {
            ThemNodeVaoCay(t->pLeft, x); // duyet qua trai den phan tu x
        } else if (t->data < x) { // neu phan tu them vao lon hon node goc ==> them no vao ben phai
            ThemNodeVaoCay(t->pRight, x); // duyet qua phai den phan tu x
        }
    }
}

// Duyet cay nhi phan theo NLR
void Duyet_NLR(TREE t)
{
    if (t != NULL) {
        cout << t->data << " ";
        Duyet_NLR(t->pLeft); // duyet qua trai
        Duyet_NLR(t->pRight); // duyet qua phai
    }
}

// Duyet cay nhi phan theo LNR <=> In ra cac phan tu tu be den lon
void Duyet_LNR(TREE t)
{
    if (t != NULL) {
        Duyet_LNR(t->pLeft);
        cout << t->data << "  ";
        Duyet_LNR(t->pRight);
    }
}

// Duyet cay nhi phan theo LRN
void Duyet_LRN(TREE t)
{
    if (t != NULL) {
        Duyet_LRN(t->pLeft);
        Duyet_LRN(t->pRight);
        cout << t->data << "  ";
    }
}

// Duyet cay nhi phan theo NRL
void Duyet_NRL(TREE t)
{
    if (t != NULL) { // neu cay con phan tu thi tiep tuc duyet
        cout << t->data << " ";
        Duyet_NRL(t->pRight); // duyet qua phai
        Duyet_NRL(t->pLeft); // duyet qua trai
    }
}

// Duyet cay nhi phan theo RNL <=> In ra cac phan tu tu lon den be
void Duyet_RNL(TREE t)
{
    if (t != NULL) {
        Duyet_RNL(t->pRight);
        cout << t->data << "  ";
        Duyet_RNL(t->pLeft);
    }
}

// Duyet cay nhi phan theo RLN
void Duyet_RLN(TREE t)
{
    if (t != NULL) {
        Duyet_RLN(t->pRight);
        Duyet_RLN(t->pLeft);
        cout << t->data << "  ";
    }
}

// Ham tim kiem phan tu, neu ton tai tra ve node do, neu khong tra ve NULL
NODE* timKiem(TREE t, int x)
{
    // neu cay rong
    if (t == NULL) {
        return NULL;
    } else {
        // neu phan tu can tim nho hon node goc thi duyet de quy sang ben trai
        if (x < t->data) {
            timKiem(t->pLeft, x);
        } else if (x > t->data) { // nguoc lai de quy sang ben phai
            timKiem(t->pRight, x);
        } else {
            return t; // tra ve node can tim kiem
        }
    }
}

// Ham tim node thay the
void timNodeThayThe(TREE& X, TREE& Y)
{
    if (Y->pLeft != NULL) { // duyet sang ben trai cuoi cung
        timNodeThayThe(X, Y->pLeft); // tim ra node trai cuoi
    } else { // da tim duoc node trai cuoi
        X->data = Y->data;
        X = Y;
        Y = Y->pRight;
    }
}

// Ham xoa 1 node trong cay
void xoaNode(TREE& t, int data) // gia tri cua node can xoa
{
    if (t == NULL) { // neu cay rong
        return;
    } else {
        if (data < t->data) { // neu data nho hon node goc
            xoaNode(t->pLeft, data); // duyet de quy sang nhanh ben trai
        } else if (data > t->data) {
            xoaNode(t->pRight, data); // duyet de quy sang nhanh ben phai
        } else { // da tim ra phan tu can xoa
            NODE* X = t; // X thay the cho t, xoa X
            if (t->pLeft == NULL) { // neu nhanh trai = NULL ==> cay con phai
                t->pRight; // duyet sang phai cua node can xoa de cap nhat moi lien ket giua node cha va con cua node can xoa
            } else if (t->pRight == NULL) {
                t->pLeft;
            } else { // node can xoa la node co 2 con
                NODE* Y = t->pRight; // node Y la node thay the cho node can xoa
                timNodeThayThe(X, Y);
            }
            delete X;
        }
    }
}

// Ham nhap du lieu
void Menu(TREE& t)
{
    while (true) {
        cout << "\n\n=========== MENU ===========";
        cout << "\n1. Nhap du lieu";
        cout << "\n2. Duyet cay NLR";
        cout << "\n3. Duyet cay NRL";
        cout << "\n4. Duyet cay LNR";
        cout << "\n5. Duyet cay RNL";
        cout << "\n6. Duyet cay LRN";
        cout << "\n7. Duyet cay RLN";
        cout << "\n8. Tim kiem phan tu";
        cout << "\n9. Xoa phan tu";
        cout << "\n0. Ket thuc";
        cout << "\n\n============================";

        int luachon;
        cout << "\nNhap lua chon: ";
        cin >> luachon;

        if (luachon < 0 || luachon > 9) {
            cout << "\nLua chon khong hop le";
        } else if (luachon == 1) {
            int x;
            cout << "\nNhap so nguyen x: ";
            cin >> x;
            ThemNodeVaoCay(t, x);
        } else if (luachon == 2) {
            cout << "\nDUYET CAY THEO NLR\n";
            Duyet_NLR(t);
        } else if (luachon == 3) {
            cout << "\nDUYET CAY THEO NRL\n";
            Duyet_NRL(t);
        } else if (luachon == 4) {
            cout << "\nDUYET CAY THEO LNR\n";
            Duyet_LNR(t);
        } else if (luachon == 5) {
            cout << "\nDUYET CAY THEO RNL\n";
            Duyet_RNL(t);
        } else if (luachon == 6) {
            cout << "\nDUYET CAY THEO LRN\n";
            Duyet_LRN(t);
        } else if (luachon == 7) {
            cout << "\nDUYET CAY THEO RLN\n";
            Duyet_RLN(t);
        } else if (luachon == 8) {
            int x;
            cout << "\nNhap phan tu can tim kiem";
            cin >> x;
            NODE* p = timKiem(t, x);
            if (p == NULL) {
                cout << "\nPhan tu " << x << " khong ton tai trong cay";
            } else {
                cout << "\nPhantu " << x << " co ton tai trong cay";
            }
        } else if (luachon == 9) {
            int x;
            cout << "\nNhap gia tri can xoa: ";
            cin >> x;
            xoaNode(t, x);
        } else {
            break;
        }
    }
}

int main()
{
    TREE t;
    KhoiTaoCay(t);
    Menu(t);
    return 0;
}