#include<iostream>

using namespace std;

using ll = long long;

void phai(ll n){
	if(n < 10){
		cout << n ;
	}
	else{
		cout << n%10 <<" ";
		phai(n/10);
	}
		
		
}

void trai(ll n){
	if(n <10){
		cout << n <<" ";
	}else{
		trai(n/10);
		cout << n %10 <<" ";
	}
}
int main(){

	ll n;
	cin >> n;
	 phai(n);
    cout << endl;
    trai(n);
    return 0;
}