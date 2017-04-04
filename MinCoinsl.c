/*换钱的最少货币数字
举例：arr={5,2,5},aim=20 返回4
				  aim=0  返回0
	  arr={3,5}   aim=2  返回-1
	  */
#include<iostream>
#include<vector>
using namespace std;
int mincoinsl(vector<int> arr,int aim){
	int size=arr.size();
	int max=INT_MAX;
	int [][]dp=new int[n][aim+1];
	for(int j=1;j<=aim;j++){
		dp[0][j]=max;
		if(j-arr[0]>=0&&dp[0][j-arr[0]]!=max){
			ap[0][j]=dp[0][j-arr[0]]+1;
		}
	}
	int left=0;
	for(int i=1;i<size;i++){
		for(int j=1;j<=aim;j++){
			left=max;
			if(j-arr[i]>=0&&dp[i][j]-arr[i]!=max)
				left=ap[i][j-arr[i]]+1;
			dp[i][j]=min(left,dp[i-1][j])p
		}
	}
	return dp[n-1][aim]!=max?dp[n-1][aim]:-1;
}
int main()
{
	return 0;
}

