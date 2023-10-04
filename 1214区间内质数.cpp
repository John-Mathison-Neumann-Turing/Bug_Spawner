#include<iostream>
#include<cmath>
using namespace std;

bool sb(int n) {
	bool flag = 1; 
	for (int j = 2; j <= sqrt(n); j++) {
		if (n % j == 0) {
			flag = 0;
			break;
		}
	}
	if (flag==1) {
		return 1;
	}
	else
	{
		return 0;
	}
}
int main() {
	int n,m,c=0;
	scanf("%d %d", &n,&m);
	for (int i = n; i <= m; i++) {
          if( sb(i)==1)
          {
          	c++;
		  }
           
	}
	cout<<c;
	return 0;
}
