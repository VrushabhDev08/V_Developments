#include<iostream>
using namespace std;
class Hero
{ // By default is in the private ; You to make in the public for the acessing
private:
int hit=0;
int flops=0;
int progress=0;
//cout<<"Hit movies"<<hit;
public:
int age ; 
int health ;
string name;
// - 1.private 2.public 3.protected
/*
int a ; if - in that same class i want to use then i can give in the - private;
- i can use the data memners and member function in anywhere in the code then i can use the  - public;
if i want use only in the derived class then i can go for the - protected;
*/
void vrushabh( int h)
{
    hit = h ;
}
void setterflop( int f)
{
    flops = f ;
}
void setterprogress( int p)
{
    progress = p ;
}
int getterhit()
{
    return hit ; 
}
int getterflop()
{
    return flops ; 
}
int getterprogress()
{
    return progress ; 
}
Hero()
{
    cout<<"This is a class of an hero in this showing up the qualities of the heroes\n";
}
};
int main()
{ //  . operater   
Hero h1, h2;
//h1.age = 25;
h1.age = 25;
cout<< "Age is "<< h1.age <<endl;
// h1.health=45;
// cout<<"Health "<< h1.health<< endl;
 h1.vrushabh(100);
h1.setterflop(10);
h1.setterprogress(2);
cout<<"Hello vrushabh\n";
int vrushabh1 = h1.getterhit();
cout <<"Hit Movies : "<< vrushabh1;
cout <<"\nFlops : "<<h1.getterflop();
cout << "\nProgress :" << h1.getterprogress();
// // cout<<"Size of ramesh"<<sizeof(h1);
}