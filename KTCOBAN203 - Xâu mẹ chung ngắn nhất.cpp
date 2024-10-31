#include<bits/stdc++.h>
using namespace std;
int xauConChungDaiNhat(string a,string b){
	int l1=a.size();
	int l2=b.size();
	int dp[l1+1][l2+1];
	memset(dp,0,sizeof(dp));
	for(int i=0;i<=l1;i++){
		for(int j=0;j<=l2;j++){
			if(i==0||j==0){
				dp[i][j]=0;
			}
			else if(a[i-1]==b[j-1]){
				dp[i][j]=1+dp[i-1][j-1];
			}
			else{
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}
	return dp[l1][l2];
}
int  main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		cout<<s1.size()+s2.size()-xauConChungDaiNhat(s1,s2)<<"\n";
	}
	return 0;
}
