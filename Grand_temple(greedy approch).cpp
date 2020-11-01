include<iostream>
#include<algorithm>
using namespace std;
int main() {
	long int n;  cin>>n;
	long int x[n],y[n];
	for(long int i=0;i<n;i++){
		cin>>x[i]>>y[i];
	}
	sort(x,x+n);
	sort(y,y+n);
	long int dx=0,dy=0;
	for(long int i=1;i<n;i++){
		dx=((x[i]-x[i-1]-1)>dx)?(x[i]-x[i-1]-1):dx;
		dy=((y[i]-y[i-1]-1)>dy)?(y[i]-y[i-1]-1):dy;
	}
	cout<<dx*dy;
	return 0;
}
