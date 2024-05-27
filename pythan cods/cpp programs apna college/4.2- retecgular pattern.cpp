#include<iostream>
using namespace std;
int main()
{
	int r,c;
	cout<<"enter the row and coloumn:";
	cin>>r>>c;
	for(int i=0;i<=r;i++){
		for(int j=0;j<=c;j++)
		{
			if(i==1||i==r)
			{
				cout<<"*";
			}
			else if(j==1||j==c) {
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
			
		}
		cout<<endl;
	}
	return 0;
}