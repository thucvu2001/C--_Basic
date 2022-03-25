#include <bits/stdc++.h>
#include <iostream>
using namespace std;

typedef struct node {
    int data;
    node* next;
} NODE;

typedef struct {
    NODE* front;
    NODE* rear;
} QUEUE;

void Init(QUEUE& q)
{
    // gan front va rear ve NULL
    q.front = NULL;
    q.rear = NULL;
}
NODE* CreateNode(int x)
{
    NODE* p;
    p = new NODE;
    // neu p = NULL thi ko du bo nho cap phat
    if (p == NULL) {
        cout << "KHONG DU BO NHO!";
        return NULL;
    }
    // gan data bang X
    p->data = x;
    // gan con tro next bang NULL
    p->next = NULL;
    // tra ve node p
    return p;
}
int IsEmpty(QUEUE q)
{
    // neu front bang NULL thi queue rong
    if (q.front == NULL) {
        return 1;
    }
    // nguoc lai tra ve 0
    return 0;
}
void Add(QUEUE& q, NODE* NewNode)
{
    // neu hang doi rong thi them node moi vao ca dau va cuoi hang doi
    if (q.front == NULL) {
        q.front = NewNode;
        q.rear = NewNode;
    } else { // nguoc lai them cuoi hang doi
        // dat con tro next cua phan tu cuoi ve NewNode
        q.rear->next = NewNode;
        // gan lai phan tu cuoi cua danh sach
        q.rear = NewNode;
    }
}
int Remove(QUEUE& q)
{
    int x;
    NODE* p = NULL;
    // neu queue khong rong thuc hien lay phan tu dau queue
    if (!IsEmpty(q)) {
        // gan node p bang phan tu dau tien cua queue
        p = q.front;
        // gan du lieu cua node p vao x
        x = p->data;
        // xoa di node dau tien cua queue
        q.front = q.front->next;
        delete p;
        // neu front bang NULL thi gan luon rear bang NULL
        if (q.front == NULL) {
            q.rear = NULL;
        }
    }
    // tra ve du lieu x vua lay ra
    return x;
}
void Input(QUEUE& q, int n)
{
    // duyet N lan
    for (int i = 0; i < n; i++) {
        // nhap phan tu vao bien x
        int x;
        cout << "Nhap phan tu thu " << i << " : ";
        cin >> x;
        // tao node p co du lieu la x
        NODE* p;
        p = CreateNode(x);
        // them node p vao queue
        Add(q, p);
    }
}
void Output(QUEUE q)
{
    // duyet tu dau den cuoi hang doi
    for (NODE* p = q.front; p != NULL; p = p->next) {
        // hien thi data cua cac node
        cout << p->data;
    }
}
int main()
{
    // tao moi queue
    QUEUE q;
    // khoi tao queue
    Init(q);
    // nhap n phan tu vao queue
    int n;
    cout << "NHAP n: ";
    cin >> n;
    Input(q, n);
    // hien thi phan tu trong queue
    cout << "cac phan tu trong hang doi la\n";
    Output(q);
    // them mot node co du lieu bang 66 vao hang doi
    int x = 66;
    NODE* p = CreateNode(x);
    Add(q, p);
    cout << "\nhang doi sau khi them node 5" << x << ":" << endl;
    Output(q);
    // thuc hien lay phan tu trong hang doi ra
    int k = Remove(q);
    cout << "\nhang doi sau khi remove " << k << endl;
    Output(q);
}
