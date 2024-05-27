#include<iostream>
#include<string>//this is necessary while dealing with string 
using namespace std ;
int main(){
	cout<<"different ways to declare a string:\n";
	string str1="Vrushabh&sonali";
	string str2="arebestfriends";
//	str1=str1+str2;
//str1.append(str2);
	cout<<str1+str2;
	return 0;
}