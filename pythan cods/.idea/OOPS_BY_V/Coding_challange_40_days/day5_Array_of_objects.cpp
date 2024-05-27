#include <iostream>
using namespace std;
class employee
{
    
public:
int sal = 0;
    static int id;
    void set_sal(int sal1)
    {
        sal = sal1;
        
    }
    void display()
    {
        cout << "\nThe id having salary " << id << " Salary is " << sal;
    }
};
int employee::id = 0;
  int entersal()
    {
         int n;
        cout << "Enter the salary: ";
        cin >> n;
        return n;
    }
int main()
{
   
  
    employee e[5];
    for (int i = 0; i < 5; i++)
    {
        e[i].set_sal(entersal());
        e[i].id++;
    }
     for (int i = 0; i < 5; i++)
    {
        e[i].display();
    }
}