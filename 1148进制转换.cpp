#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
using namespace std;
void turn_data2(string st,int r) {

	int ans=0,j=1;
	for(int i=st.size()-1; i>=0; i--) {
		if(st[i]<='9') {
			ans = ans +(st[i]-'0')*j;
		} else {
			ans =ans +(st[i]-'A'+10)*j;
		}
		j=j*r;
	}
	cout<<ans;
}
	int main() {
		int r;
		string a;
		cin>>r;
		cin>>a;
		turn_data2(a,r);
		return 0;
	}

