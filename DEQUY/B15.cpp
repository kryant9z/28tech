#include<iostream>

using namespace std;

using ll = long long;


ll s(ll n){
	if(n <10){
		return n;
	}
	else{
			
		return s(n/10);
	}
}

int main(){

	ll n;
	cin >> n;
	cout << s(n);
    
    return 0;
}