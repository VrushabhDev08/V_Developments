#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
  string str="lordvrushbah";
  //convert into upper cASE :- USING ascii values
//  for(int i=0;i<str.size();i++)
//  {
//  	if(str[i]>='a'&&str[i]<='z')
//  	{
//  		str[i] -=32;
//	  }
//	  
//	  }	
//	  for(int i=0;i<str.size();i++)
//  {
//  	if(str[i]>='A'&&str[i]<='Z')
//  	{
//  		str[i] +=32;
//	  }
//	  
//	  }
//	  
	  // direct using function
	  //here we use function that is transform
	  transform(str.begin(),str.end(),str.begin(),::toupper);
	  cout<<str;
	   transform(str.begin(),str.end(),str.begin(),::tolower);
	  cout<<str;
	  return 0;
	
}