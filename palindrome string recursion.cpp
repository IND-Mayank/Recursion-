#include<iostream>
#include<string>
using namespace std;
bool palindrome(string &name,int s, int e){
	if(s>e){
		return true;
	}
	if(name[s] != name[e]){
		return false;
	}else{
	
	return palindrome(name,s+1,e-1);
}
}
int main(){
	string name="abbccbbaa";
	int s=0;
	int e=name.length()-1;
bool ram=	palindrome(name,s,e);
	if(ram){
		cout<<"it is palindrome"<<" "<<name<<endl;
	}
	else{
		cout<<"it is not palindrome"<<endl;
	}
}
