#include<iostream>
#include<cmath>

using namespace std;

using ll = long long;

int midmin(ll n){
	if(n <10){
		return n;
	}
	else{
		int tmp = midmin(n/10);
		if(n %10 < tmp){
			return n %10;
		}
		else{
			return tmp;
		}
	}
}
int midmax(ll n){
	if(n <10){
		return n;
	}
	else{
		return (int) fmax(n %10, midmax(n/10));
		}
	}

int main(){
    ll n;
    cin >> n;
    cout << midmax(n) <<" " << midmin(n);
    return 0;
}