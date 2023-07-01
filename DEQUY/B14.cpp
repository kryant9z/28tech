#include<iostream>

using namespace std;
using ll = long long;

int dem(ll n){
	
	if(n <10){
		return 1;
	}
	else{
	
		return 1 + dem(n/10);
	}
	
}

int main(){

	ll n;
	cin >> n;
	cout << dem(n);
    
    return 0;
}