#include<iostream>

using namespace std;

using ll = long long;

ll s(ll n){
	if(n==1){
		return 1;
	}else{
		int r = n % 10;
		return r + s(n/10);
	}
}

int main(){
	ll n;
	cin >> n;
	cout << s(n);

	return 0;
}