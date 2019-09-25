#include <iostream>

using namespace std;
class Parent;
class Child;
void printer(Parent&);
class Parent{
    int i, j;
    public:
    friend class Child;
    Parent(int x, int y){
        i = x;
        j = y;
    }
    
    
    friend void printer(Parent&);
};

class Child{
    int a, b;
    public:
    Child(){}
    Child(int x, int y){
            a = x;
            b = y;
    }
    
    int getI(Parent& p){
        return p.i;
    }
    int getJ(Parent& p){
        return p.j;
    }
};
//Here p and j are private members of class parent. Printer is not even member function of class parent still printer acessed i and j
void printer(Parent& p){
    cout<<"The i and j of parent which are private still accessing using nom member function but as friendfunction : "<<p.i<<" & "<<p.j;
}

int main()
{
  Parent p(10, 20);
  Child c;
  printer(p);
  cout<<"\ni private data variable of parent(accessing from child function) : "<<c.getI(p)<<endl;
  cout<<"j private variable of of parent(accessing from child function) : "<<c.getJ(p)<<endl;
  return 0;
}