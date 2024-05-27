#include<iostream>
using namespace std;
class employee 
{int id;
 int salary=10000;
 public:
 
 void setid(void)
 {
    cout<<"Enter the id of the employee"<<endl;
    cin>>id;
 }
void getid(void)
{
 cout<<"The id of the Employee is:"<<id<<endl;   
}
};
int main()
{ 
    employee dkte[5];
    for (int i = 0; i <5; i++)
    {
        dkte[i].setid();
        dkte[i].getid();
    }
    
    return 0;
}
//In this way we can use objects of class in array
//using loop we can easily iterate the array of objects
//