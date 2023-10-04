#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
void turn _data(int n,int r) {
	int val[35];
	if(n<0) {
		cout<<"-";
		n=abs(n);

	}
	if(n==0||n==1) {

		cout<<n;
	}
	while(n!=0) {
		val[i]=n%r;
		n=n/r;
		i++;

	}
	for(int j=i-1; j>=0; j--) {
		if(val[j]<10) {
			cout<<val[j];

		} else {
			char ch;
			ch=val[j]-10+'A';
            cout<<ch;
		}
	}
}
int main()
{
	cin>>n>>r;
	turn _data(n,r);
	return 0;
}



