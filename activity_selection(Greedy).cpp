#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(pair<int,int> p1,pair<int,int> p2){
	return p1.second<p2.second;
}
int main() {
	int t;  cin>>t;
	while(t--){
     int n,s,e;
	 cin>>n;
	 vector<pair<int,int>> v;
	 for(int i=0;i<n;i++){
       cin>>s>>e;
	   v.push_back(make_pair(s,e));
	 }
	 sort(v.begin(),v.end(),compare);
    int fin=v[0].second;
	int ans=1;
	for(int i=1;i<n;i++){
		if(fin<=v[i].first){
			ans++;
			fin=v[i].second;
		}
	}
	cout<<ans<<endl;
	}
	return 0;
}
