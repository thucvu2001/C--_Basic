#include <bits/stdc++.h>
#include <queue> // thu vien cua queue
using namespace std;

int main(){
    queue<int> q; // cu phap khai bao queue<kieu_du_lieu> ten;
    q.push(1); // them phan tu
    q.push(2);
    q.push(3);
    q.push(5);
    q.push(9);
    q.push(4); // 4 9 5 3 2 
    cout << q.back() << endl; // in ra phan tu cuoi
    cout << q.front() << endl; // in ra phan tu dau
    cout << q.size() << endl; // in ra kich thuoc
    q.pop(); // xoa di phan tu dau
    cout << endl;
    cout << q.back() << endl; 
    cout << q.front() << endl;
    cout << q.size() << endl;
    cout << q.empty() << endl; // rỗng trả về 1
    return 0;
}
