// muong sang cac so nt khong vuot qua n, tao mang co kich thuoc n+1 ptu
//

#include <bits/stdc++.h>

int prime[1000001]; // co the dung bool 
void sang(){
	//coi tat ca cac so tu 0 den n bang 1 (la so nguyen to)
	for(int i=0;i<1000000;i++){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0; // loai 0 va 1
	for(int i=0;i<sqrt(1000000);i++){
		if(prime[i] == 1){ // neu i la so nguyen to thi loai cac boi cua i
			for(int j=i*i;j<=1000000;j+=i){ // duyet tu j=i^2 cho den cuoi j+=i
				prime[j] =0; // loai j
			}
		}
	}
}

using namespace std;

int main(){
	sang();
	int n; cin >> n;
	for(int i=0;i<n;i++){
		if(prime[i] == 1){
			cout << i << " ";
		}
	}
	system("pause");
	return 0;
}
