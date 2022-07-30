// **  Binary  to Decimal **//
 
#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n){
	int ans=0;
	int x =1;
    while(n>0){
	int a=n%10;
	ans = ans + a*x;
	x = x*2;
	n=n/10	;
	}return ans;
}

int main (){
	int n;
	cin>>n;
	cout<<binaryToDecimal(n)<<endl;
}