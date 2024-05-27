#include<iostream>
using namespace std;
class marks
{
  int studentid[50];
  int mark[50];
  int counter;
public:
      void initcounter(){ counter =0;}
      void setstudent();

};
void marks :: setstudent(void)
{
    counter++;
    cout<<"Enter the student id : ";
    cin>>studentid[counter];
    cout<<"Enter the marks student :";
    cin>>mark[counter];

}
int main()
{
    marks m1;
    for(int i=0;i<10;i++)
    {
        m1.initcounter();
    m1.setstudent();
    }
    
}