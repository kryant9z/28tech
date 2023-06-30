#include<iostream>
#include<iomanip>


using namespace std;

float tong5(float n){
	if(n == 1){
		return 1;
	}
	else{
		return 1/n + tong5(n-1); 
	}
}

int main(){
	int n;
	cin >> n;
	cout << fixed << setprecision(3)  << tong5(n);

	return 0;
}