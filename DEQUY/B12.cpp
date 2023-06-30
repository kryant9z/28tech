#include<iostream>

using namespace std;
// xay dung ham de quy 10 -> 16
using ll = long long;
void dq16(ll n){

	if( n < 16){
		if(n<=9){
			cout << n;
		}
		else{
			cout << char(n + 55);
		}
	}else{
		dq16(n /16);
		int r = n % 16;
		if(r<=9){
			cout << r;
		}
		else{
			cout << char(r + 55);
		}
	}
}

int main(){
	ll n;
	cin >> n;
	dq16(n);


	return 0;
}