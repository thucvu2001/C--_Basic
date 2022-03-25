#include <bits/stdc++.h>

using namespace std;

// #include <stack>

// LIFO: last in first out
// push(): đưa phần tử vào
// pop(): loại phần tử trên cùng
// size(): trả về số lượng phần tử
// empty(): check xem stack có rỗng hay không? rỗng => 1 : 0;
// O(1);

// khai báo stack<Kieu_Du_Lieu> ten;

int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    cout << st.size() << endl;
    system("pause");
    return 0;
}