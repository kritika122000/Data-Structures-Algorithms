#include <iostream>
using namespace std;
long long solvecells(int n , int x, int y, int z){
    long long *dp = new long long[n+1];
    //bottom up approach 
    dp[0] =0;
    dp[1] =0;
    for(int i =2; i<= n ; i++){
     //x is the cost for double, y is for inc , z is for dec
        if(i %= 2){
            //if i is even then only double and dec operation will happen
            dp[i] = min(dp[i/2] + x , dp[i-1] + y);
        }
        else {
            //if i is odd then we can get it through the min of dec and i+1/2
            dp[i] = min(dp[i-1] = y , dp[i+1/ 2] + x + y);
        }
    }
    return dp[n];
}
int main() {
    int n , x, y, z;
    cin>>n>>x>>y>>z;

    cout<<solvecells(n, x, y, z)<<endl;
}
