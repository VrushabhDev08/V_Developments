#include<iostream>
using namespace std;
class binary
{
    string s;
    public:
    void set_b(void);
    void check_b(void);
    void bb(void);

};
void binary :: set_b(void)
{
  cout<<"Enter the String\n";
  cin>>s;  
}
void binary:: check_b(void)
{
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!='0'&& s[i]!='1')
        {
            cout<<"Incorrect binary no.";
            break;
        }
    }
}
void binary ::bb(void)
{
    for(int i=0;i<s.length();i++)
    {
    if(s[i]=='1')
    {
        s[i]='0';
    }
    else
    {
        s[i]='1';
    }
    }
    cout<<"String:"<<s;
}
int main()
{
 binary b1;
 b1.set_b();
 b1.check_b();
 b1.bb();
}