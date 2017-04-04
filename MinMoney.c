#include<stdio.h>

int minMoneyCounts(int arr[],int aim,int n)
{
	int *dp=new int[n][aim+1];
	int max=INT_MAX;
	for(int i=0;i<n;i++){
		dp[0][i]=0;
	}
	for(int i=1;i<=aim;i++){
		dp[0][i]=max;
		if(i>arr[i]&&dp[0][i-arr[i]]!=max){
			//可以兑换
			dp[0][i]=dp[0][i-arr[i]]+1;
		}
	}
	for(int i=1;i<n;i++){
		for(int j=1;j<=aim;j++){
			int left=max;
			if(j>=arr[i]&&dp[i][j-arr[i]]!=max){
				left=dp[i][j-arr[i]]+1;
			}
			dp[i][j]=min(dp[i-1][j],left);
			
		}
	}
	return dp[n-1][aim]!=max?:dp[n-1][aim]:-1
}
int main()
{
	return 0;
}
