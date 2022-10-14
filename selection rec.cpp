#include<iostream>
using namespace std;
void bubblesort(int *arr,int n){
	if(n==0 || n==1){
		return ;
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){	
		if(arr[j]<arr[i]){
		swap(arr[i],arr[j]);
	}
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
