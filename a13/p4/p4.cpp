/*
CH-230-A
a13 p4.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include<iostream>
using namespace std;

//Because C is dervied from both A and B, it has two ambiguous int x;
//using public virtual makes virtual inheritance from A to B, C and D.
//when we call D first A is called followed by B(where x is set to 10,)
//and C (where x is set to 20.) Using virtual inheritance we provide only
//memory block for int x in class D.

class A
{
  int x;
public:
  void setX(int i) {x = i;}
  void print() { cout << x; }
};
 
class B:  public virtual A
{
public:
  B()  { setX(10); }
};
 
class C:  public virtual A  
{
public:
  C()  { setX(20); }
};
 
class D: public B, public C {
};
 
int main()
{
    D d;
    d.print();
    return 0;
}