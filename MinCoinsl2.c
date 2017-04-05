#include<iostream>
#include<vector>
int minCoinsl2(int arr[],int n,,int aim)
{
	int dp[][]=new int[n][aim+1];
	int max=INT_MAX;
	for(int i=1;i<=aim;i++){
		dp[0][i]=max;
	}
	//dp[0][0..aim]代表只使用arr[0]的情况下，找到某个钱数的最少张数
	//故dp[0][0...num]中除了dp[0][arr[0]]外全为max
	//dp[i][j]表示任意使用0...i之间的数组成J需要的最小张数
	
	/*dp[i][j]的取值来自1：使用当前arr[i]时，由0...i-1 构成j-arr[i]需要的最小数+1，前提是arr[i]<j，否则一张arr[i]就溢出了，并且0...i-1 能构成arr[j-arr[i]]
				      2：不使用当前arr[i],即就由0...i-1 构成 arr[j] 所需要的纸币最小数量即dp[i-1][j]
	取二者的最小值*/
	dp[0][arr[0]]=1;// 由arr[0...0]构成arr[0]当然只需要一张
	int left=max;
	for(int i=1;i<n;i++){
		for(int j=1;i<=aim;j++){
			if(j>=arr[i]&&dp[i-1][j-arr[i]]!=max){
				left=dp[i-1][j-arr[j]]+1;
			}
			dp[i][j]=min(left,dp[i-1][j]);
		}
	}
	return dp[n-1][aim]!=max?dp[n-1][aim]:-1;

}

int main()
{
	return 0
}
