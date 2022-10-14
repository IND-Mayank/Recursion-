#include<iostream>
using namespace std;
int multiple(int n){
	if(n==0){
		return 1;
	}
	return n*multiple(n-1);
}
int main(){
	int n;
	cin>>n;
	int ans = multiple(n);
	cout<<"multiple of no. is "<<ans;
}
