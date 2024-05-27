#include<iostream>
#include<string>//this is necessary while dealing with string 
using namespace std ;
int main(){
	cout<<"different ways to declare a string:\n";
//	//1
	string str;//="lordvrushabh";
//   cin>>str;
//   cout<<str;
////2
//	string str="lordvrushabh";
//	cout<<str;
////3
//    string str(10,'V');
//    //4
    getline(cin,str);
    cout<<str;

}