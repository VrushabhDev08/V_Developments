#include<iostream>
using namespace std ; 
int main()
{
 cout<<"JAI SHRI RAM\n";
 float v = 35.231 ;
 float *vptr = &v;
 cout<<vptr<<"\n";
 cout<<*vptr<<endl;// to acess the value that pointer we use *
 // we can also modify the varible value using pointers 
 *vptr = 12.01;
 cout<<"the new value is "<<v<<endl;
 cout<<"POINTER ARITHMATIC"<<endl;
 // from this we can increment,decrement,addition,subtraction using pointer
 vptr ++;
cout<<"after increment:"<<vptr<<endl;
vptr --;
 cout<<"after decrement:"<<vptr<<endl;
 
 cout<<"POINTERS USING ARRAY"<<endl;
 //here we can acess the array using pointers 
 int arr[] = {1,20,30,45,78};
 // as we assign the pointer it can store the adress of 1st element so as we  
 //increment the pointers he values can displayed 
 int *ptr = arr;
 for (int i=0;i<5;i++)
 {
 	cout<<*(ptr+i)<<"\t";
 	//ptr++;
 	
cout<<"POINTERS USING fucntion"<<endl; 
// in this mainly is call by reference is used 
  int swap  (int *a,int *b)
  {
  	
	   } 	
 }
 
}