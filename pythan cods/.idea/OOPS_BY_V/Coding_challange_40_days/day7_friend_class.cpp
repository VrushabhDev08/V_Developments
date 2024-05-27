#include<iostream>
using namespace std;
class access;
class name
{
    int std;
    int marks;
     
    void setprivate(int std , int marks)
    {
        std = std;
        marks = marks;
    }
    
};
class access
{
    friend int name :: setprivate(int std , int marks);
    void calling()
    {
        setprivate(4,5);
    }
};
int main()
{
    access a1;
    a1.calling();
return 0;
}