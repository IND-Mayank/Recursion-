#include<iostream>
#include<string>
using namespace std;
void reverse(string & str,int s,int e){
	cout<<str;
	if(s>e){
		return ;
	}
	swap(str[s],str[e]);
	s++;
	e--;
	reverse(str,s,e);
	
}

int main(){
	string str="mayank";
	int s=0;
	reverse(str,s,str.length()-1);
	cout<<str;
}
