/*
题目描述：
	给定一个矩阵arr，从最左上角开始每次只能向右和向下走，最后到达右下角的位置，路径上所有数字累加和就是路径和，返回所有路径中最小的路径
举例：给定的m如下
1	3	5	9
8	1	3	4
5	0	6	1
8	8	4	0
路径：1	3 1	0 6	1 0	为所有路径的最小和，所以返回12
*/
#include<iostream>
#include<vector>


int minPath(vector<vector<int>> arr)
{
	if(arr.size()<=0)
		return 0;
	int row=arr.size();
	int col=arr[0].size();
	int dp[][]=new int[row][col];
	dp[0][0]=arr[0][0]
	for(int i=1;i<row;i++)
		dp[i][0]=arr[i-1][0]+arr[i][0];
	for(int i=1;i<row;i++)
		dp[0][i]=arr[0][i-1]+arr[0][i-1];
	for(int i=1;i<row;i++)
		for(int j=1;i<col;j++){
			dp[i][j]=min(arr[i-1][j],arr[i][j-1])+arr[i][j];
		}

	return dp[row-1][col-1];
}


int main()
{
	return 0;
}
