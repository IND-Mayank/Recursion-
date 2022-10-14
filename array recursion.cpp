#include<iostream>
using namespace std;
int add( int arr[] ,int n){
	if(n==0){
		return 0;
	}
		if(n==1){
		return arr[0];
	}
	//int adding = add(arr+1,n-1);
	//int abc = arr[0]+adding;
	return arr[0]+add(arr+1,n-1);
}
int main(){
/*	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	*/
	int arr[5]={1,2,3,4,5};
	int size=5;
	int ans = add(arr,size);
	cout<<ans<<" ";
}
