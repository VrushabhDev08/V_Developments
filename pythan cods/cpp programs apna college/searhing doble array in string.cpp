#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string s="skbjvksxvskjbvksdnsdnbskdjbvsverhtoelhgieugfoeg";
	int freq[26];//made for making count for no.
	for(int i=0;i<26;i++)
	{
		freq[i]=0;//whole array declare as a zero
	}
	for(int i=0;i<s.size();i++)
	{
	     freq[s[i]-'a']++;	
	}
	char ans='a';//intilizr starting alphabet
	int maxf=0;
	for(int i=0;i<26;i++)
	{
	  if(freq[i]>maxf)
	  {
	  	maxf=freq[i];
	  	ans=i+'a';
		  }	
	}
	
	cout<<ans<<" "<<maxf;
	return 0;
}