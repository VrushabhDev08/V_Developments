#include <iostream>
#include <string>
using namespace std;
class binary
{
    string s;
public:
    void data(void);
    void chk(void);
    void display(void);
};
void binary ::data(void)
{
    cout << "Enter the binary no.:" << endl;
    cin >> s;
}
void binary ::chk(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0'&&s.at(i)!='1')
        {
            cout<<"Enter the correct binary no. "<<endl;
        }
    }
}
void binary ::display(void)
{
    for (int i = 0; i < s.length(); i++)
    { 
        cout<<s[i];
    }
}
int main()
{
    binary b;
    b.data();
    b.chk();
    b.display();
    return 0;
}