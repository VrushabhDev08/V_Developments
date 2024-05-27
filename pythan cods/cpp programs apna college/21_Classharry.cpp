 #include<iostream>
using namespace std;
class student
{
  private:
  int a,b,c;
  public:
  int d,e;
  void dataget()
  {
    cout<<"The data of a is :"<<a<<endl;
    cout<<"The data of b is :"<<b<<endl;
    cout<<"The data of c is :"<<c<<endl;
    cout<<"The data of d is :"<<d<<endl;
    cout<<"The data of e is :"<<e<<endl;
  }
  void additions(int a1,int b1,int c1 );//declared
};
void student::additions(int a1,int b1,int c1)
{
    a1=a;
    b1=b;
    c1=c;
}
int main()
{
    student vrushabh;
    vrushabh.additions(1,2,5);
    vrushabh.d=32;
    vrushabh.e=56;
    vrushabh.dataget();
    return 0;
}