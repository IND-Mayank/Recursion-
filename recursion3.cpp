//back counting
#include<iostream>
using namespace std;
int reverse(int b){
	cout<<b<<"  ";
	if(b==0){
		return 0;
	}
	
	return b-reverse(b-1);
}
int main(){
	int a;
	cin>>a;
	reverse(a);
}
