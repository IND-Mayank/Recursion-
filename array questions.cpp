#include<iostream>
#include<climits>
using namespace std;
int print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	
}
/*void swap(int arr[],int size){
	for(int i=0;i<size;i+=2){
		if(i+1<size){
		swap(arr[i],arr[i+1]);
	}
	}
	*/

int main(){
	int odd[4]={1,2,3,4};
//	swap(abc,4);
    print(odd , 4);
	return 0;
}
