#include<iostream>
using namespace std;
void print(int arr[],int n){
	cout<<"size"<<n<<" ";
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}cout<<endl;
}
int linearsearch(int arr[],int n, int key){
	print(arr,n);
	if(n==0){
		return 0;
	}
	if(arr[0]==key){
		return 1;
	}
	else{
		int small=linearsearch(arr+1,n-1,key);
		return small;
	}
}
int main(){
	int arr[]={1,2,3,4,5};
	int n=5;
	int key=5;
	int ans = linearsearch(arr,n,key);
	if(ans){
		cout<<"found"<<" "<<key<<" at position"<<" "<<ans<<endl;
	}else{
		cout<<"not found"<<key<<endl;
	}
}
