/*
CH-230-A
a13 p5.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include<iostream>
using namespace std;
 
class A
{
  int x;
public:
  A(int i) { x = i; }
  void print() { cout << x; }
};
 
class B: virtual public A
{
public:
  B():A(10) {  }
};
 
class C:  virtual public A 
{
public:
  C():A(10) {  }
};
 
class D: public B, public C {
public:
	//D():A(10)     {};			//when we call virtually inherited classes
	//D():A(10), B() {};		// we must call each parent classes explicitly
	D():A(10), C() {};		// when parent constructor isn't given it calls
								//default parent constructor
};
 
int main()
{
    D d;
    d.print();
    return 0;
}