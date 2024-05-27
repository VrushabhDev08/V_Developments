#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void uppercase(string str)
{
	for(int i=0;i<str.size();i++)
	{
		if(str[i]>='a'&&str[i]<='z')
		{
			str[i]-=32;
		}
	}
	cout<<str<<endl;
}
void lowercase(string st)
{

	for(int i=0;i<str.size();i++)
	{
		if(str[i]>='a'&&str[i]<='z')
		{
			str[i]+=32;
		}
	}
	cout<<str;
}

int main()
{
	string str="vrushabhsonali";
	string st="SONALIVRUSHABH";
	//convert the string into upper case
	uppercase(str);
	lowercase(st);
}