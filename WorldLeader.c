/*Given two words (start and end), and a dictionary, find the length of shortest transformation sequence from start to end, such that: Only one letter can be changed at a time Each intermediate word must exist in the dictionary ，For example, Given: start ="hit" end ="cog" dict =["hot","dot","dog","lot","log"]

As one shortest transformation is"hit" -> "hot" -> "dot" -> "dog" -> "cog", return its length5. Note: Return 0 if there is no such transformation sequence. All words have the same length. All words contain only lowercase alphabetic characters.

谷歌翻译一下吧：

给定两个字（开始和结束）和一个字典，从头到尾找到最短变换序列的长度，使得： 一次只能更改一个字母 每个中间词必须存在于字典中 例如， 给定： begin=“hit” end =“cog” dict = [“hot”，“dot”，“dog”，“lot”，“log”] 作为一个最短的转换是“hit” - >“hot” - >“dot” - >“dog” - >“cog” 返回长度5。 注意： 如果没有这样的转换序列，返回0。 所有的词都有相同的长度。 所有单词只包含小写字母字符。
*/
#include<iostream>
#include<string>
#include<stack>
#include<sys/queue.h>

int LeaderLength(string start,string end,unordered_set<string> dict)
{
	int length=2;
	int size=start.size();
	queue<string> q;
	q.push(start);
	while(!(q.empty())){
		int n=q.size();
		for(int i=0;i<n;i++){
			string tmp=q.front();
			q.pop();
			for(int =0;i<size;i++){
				char old=tmp[i];
				for(char c='a';c<='z';c++ ){
					if(c==old)
						continue;
					tmp[i]=c;
					if(tmp==end)
						return length;
					if(dict.find(tmp)!=dict.end()){
						q.push(tmp);
						dict.erase(tmp);
					}
				}
				tmp[i]=old;
			} 		
		}
		++length;
	}
	return 0;

}
int main()
{
	return 0;
}

