#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        int arr[n + m];
        for(int i = 0; i < n + m; i++){
            cin >> arr[i];
        }
        sort(arr, arr + n + m);
        for(int i = 0; i < n+m; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}