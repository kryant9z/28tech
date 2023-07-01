#include<iostream>

using namespace std;

//using ll = long long;
#define ll long long
int s(ll n){
	if(n < 10){
		if(n % 2 ==0){
			return 1;
		}
		else{
			return 0;
		}
	}else{
		if( n % 10 % 2 ==1){
			return 0;
		}
		else{
			return s(n /10);
		}
	}
}

int main(){
    ll n;
    cin >> n;
    if(s(n)){
    	cout <<"YES";
    }
    else{
    	cout <<"NO";
    }
    return 0;
}