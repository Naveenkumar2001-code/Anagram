#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str1,str2;
	cout<<"first string :";
	cin>>str1;
	cout<<"second string :";
	cin>>str2;
	cout<<" "<<str1<<" "<<str2<<endl;
	int len1=str1.size();
	int len2=str2.size();
	int count=0;
	for(int i=0;i<len1;i++)
	{
		for(int j=0;j<len2;j++)
		{
			if(str1[i]==str2[j])
			{
				str2[j]=-1;
			}
		}
	}
	for(int i=0;i<len2;i++)
	{
		if(str2[i]==-1)
		{
			count++;
		}
	}
	if(count==len2)
	{
		cout<<"its anagram ";
	}
	else
	{
		cout<<"its not anagram";
	}
}
