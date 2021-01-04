/*
CH-230-A
a11 p2.c
ujjwal khadka
u.khadka@jacobs-university.de
*/

//empty constructor and destructor for
//each class are being created
//each derived class has one common properyt
//with parent class and their individual properties

#include <iostream>

using namespace std;

class Creature {
	public:
		Creature(); 
		~Creature(); 
		void run() const;

	protected:
		int distance;
};

Creature::Creature(): distance(10)
{
	cout<<"\nEmpty constructor of Creature class\n";
}

Creature::~Creature()
{
	cout<<"\nDestructor of Creature class\n";
}   

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  

class Wizard : public Creature {
	public:
		Wizard();
		~Wizard();
		void hover() const;

	private:
		int distFactor;
};

Wizard::Wizard() : distFactor(3)
{
	cout<<"\nEmpty constructor of Wizard class\n";
}  

Wizard::~Wizard()
{
	cout<<"\nDestructor of Wizard class\n";
}

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

//1st derived class
class Running_kangaroo: public Creature{
 public:
 	Running_kangaroo();
 	~Running_kangaroo();
 	void running_jumping() const;
 private:
 	int no_of_jump;
 	const int length_of_jump = 10;
 	
};

Running_kangaroo::Running_kangaroo() : no_of_jump(7)
{
	cout<<"\nEmpty constructor of Running_kangaroo class\n";
}

Running_kangaroo::~Running_kangaroo()
{
	cout<<"\nDestructor of Running_kangaroo class\n";
}

void Running_kangaroo::running_jumping() const
{
	cout<< "Running and jumping ";
	cout<<distance + no_of_jump * length_of_jump<< endl;
}

//2nd derived class
class Blazing_Hanuman : public Creature{
public:
	Blazing_Hanuman();
	~Blazing_Hanuman();
	void blazing() const;
private:
	int flying_speed;
	int flying_time;	
};

Blazing_Hanuman::Blazing_Hanuman(): flying_speed(100), flying_time(5)
{
	cout<<"\nEmpty constructor of Blazing_Hanuman class\n";
}

Blazing_Hanuman::~Blazing_Hanuman()
{
	cout<<"\nDestructor of Blazing_Hanuman class\n"<<endl;
}

void Blazing_Hanuman::blazing() const
{
	cout<<"Hanuma has crossed ";
	cout<<distance + flying_speed * flying_time;
	cout<<" meters"<<endl;
}

int main()
{ 
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout<< "\nCreating a Jumping Kangaroo\n";
    Running_kangaroo r;
    r.run();
    r.running_jumping();


    cout<<"\nCreating a Mighty Hanuman\n";
    Blazing_Hanuman h;
    h.run();
    h.blazing();
    return 0;
}