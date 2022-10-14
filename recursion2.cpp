#include<iostream>
using namespace std;
int dest(int d,int e){
	cout<<d<<" ";
	if(d==e){
		return 0;
	}
	d++;
	return dest(d,e);
}
int main(){
	int a,b;
	cin>>a>>b;
	dest(a,b);
	
}
