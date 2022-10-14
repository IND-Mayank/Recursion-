#include<iostream>
#include<string>
using namespace std;
bool reverse(int str[],int s,int e,int size){
  //  cout<<str[]<<" ";
	if(s>e){
	    return true;
	}
	swap(str[s],str[e]);
	return reverse(str,s+1,e-1,size);
}

int main(){
	int str[]={1,2,3,4,5};
	int size=5;
	int s=0;
	int e=size-1;
    cout<<reverse(str,s,e,size);
}
