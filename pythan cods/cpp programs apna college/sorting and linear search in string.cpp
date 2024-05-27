#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{

	string str="4569874" ;
	
	sort(str.begin(),str.end(),greater<int>());
	cout<<endl;
	cout<<"after soritng we get:\n";
	cout<<str;
	int key;
	cout<<"enter the search element:\n";
	cin>>key;
	int i =0;
		int s=0;
	int e=str.size();
	while(s<=e){
		int mid=(s+e)/2;
		if (str[i]==key){
			cout<<"key element founf at:"<<i;
		}
		else if (str[mid]>key){
			e=mid - 1;
		}
		else{
			s=mid + 1;
		}
	}
		return 0 ;
}

    
