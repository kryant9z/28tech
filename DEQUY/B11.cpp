#include<iostream>

using namespace std;

using ll = long long;

void dq(ll n){
	if(n==0){
		return;
	}
	else{
		dq(n/2);
		cout << n % 2;
	}
}

int main(){
	ll n;
	cin >> n;
	dq(n);

	return 0;
}