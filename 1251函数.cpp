#include<bits/stdc++.h>
 using namespace std;
int f(double c) {
int i =2;
double s =0.5; while(s<c){
++i;
s +=1.0/ i; 
}
return   i-1;}
int main(){
double c; int n;
while (scanf("%lf", &c) != EOF && c !=0.0) {
n= f(c);
printf("%d\n",n);

}
return 0;
}
