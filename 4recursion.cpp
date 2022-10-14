//fibonacci
#include<iostream>
using namespace std;
int recursive(int n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	int ans=recursive(n-1)+recursive(n-2);
    return ans;

}
int main(){
	int a;
	cin>>a;
	cout<<recursive(a);
}
