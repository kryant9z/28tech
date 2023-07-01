#include<iostream>

using namespace std;

void in1(int a[], int n){
	if(n !=0){
		cout << a[n-1] <<' ';
		in1(a,n-1);
	}
}
void in2(int a[], int n){
	if(n != 0){
		in2(a,n-1);
		cout << a[n-1] << ' ';
	}
}
int main(){

	int n;
	cin >> n;
	int a[n];

	for(int i = 0;i <n;i++){
		cin >> a[i];
	}

	in1(a,n);
	cout << endl;
	in2(a,n);
    
    return 0;
}