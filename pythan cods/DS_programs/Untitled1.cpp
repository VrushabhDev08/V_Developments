#include<iostream>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int main()
{ 
int ans ;
	int a[6]={1,45,78,65,12,25};
	 long min=a[0],max=a[0];
       for(int i=0; i<6; i++){
           if(min>a[i]){
               min=a[i];
           }
           if(max<a[i]){
               max=a[i];
           }
       }
       pair ans=new pair(min,max);
       return ans;
       
   }
