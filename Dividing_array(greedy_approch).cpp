#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){

        long long int n,a[100000];cin>>n;
        for(int i=0;i<n;i++)cin>>a[i];
        long long int mini=0;long long int maxi=0;
        sort(a,a+n);
        long long int i=0;long long int j=n-1;
        while(i<j){
            maxi+=abs(a[j]-a[i]);
            i++;j--;
        }
        j=n-1;
        while(j>=1){
            mini+=abs(a[j]-a[j-1]);
            j-=2;
        }
        cout<<mini<<" "<<maxi<<endl;
    }
    return 0;
}
