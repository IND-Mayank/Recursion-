#include<iostream>
using namespace std;
void bubblesort(int *arr,int n){
	if(n==0 || n==1){
		return ;
	}
	for(int i=0;i<n-1;i++){
		if(arr[i]>arr[i+1]){
		swap(arr[i],arr[i+1]);
	}
	}
    bubblesort(arr,n-1);
}
int main(){
	int n;
	cin>>n;
 	int arr[n];
 	for(int i=0;i<n;i++){
 		cin>>arr[i];
	 }
	//int arr[]={1,5,7,3,6};
	//int size = 5;
	bubblesort(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
