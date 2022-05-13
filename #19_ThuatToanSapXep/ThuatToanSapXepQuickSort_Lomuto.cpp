#include <bits/stdc++.h>
using namespace std;

int partition(int a[], int l, int r)
{
    int pivot = a[r]; // chon chot la phan tu cuoi cung
    int i = l - 1;
    for (int j = l; j < r; j++) {
        if (a[j] <= pivot) {
            ++i;
            swap(a[i], a[j]);
        }
    }
    // dua chot ve giua
    ++i;
    swap(a[i], a[r]);
    return i; // tra ve vi tri cua chot
}

void quicksort(int a[], int l, int r)
{
    if (l >= r) {
        return;
    }
    int p = partition(a, l, r);
    quicksort(a, l, p - 1);
    quicksort(a, p + 1, r);
}

int main()
{
    int n;
    cin >> n;
    int a[1000];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    quicksort(a, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}