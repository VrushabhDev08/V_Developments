#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	string s="56749826803";
		sort(s.begin(),s.end(), greater<int>());
		cout<<s<<endl;
}