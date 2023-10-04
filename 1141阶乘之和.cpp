#include<bits/stdc++.h>
using namespace std;

  int main()

{
    int i,j,k=0,m=1,n=0,x;

    cin>>i;

   for(k=1;k<=i;k++)

     {
      m=1;

    for(j=k;j>=1;j--)

    m=m*j;

    n=n+m;

      }

    cout<<n;

          return 0;

}

