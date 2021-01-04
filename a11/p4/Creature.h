/*
CH-230-A
a11 p4.c
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

class Wizard : public Creature {
	public:
		Wizard();
		~Wizard();
		void hover() const;

	private:
		int distFactor;
};

class Running_kangaroo: public Creature{
 public:
 	Running_kangaroo();
 	~Running_kangaroo();
 	void running_jumping() const;
 private:
 	int no_of_jump;
 	const int length_of_jump = 10;
 	
};

class Blazing_Hanuman : public Creature{
public:
	Blazing_Hanuman();
	~Blazing_Hanuman();
	void blazing() const;
private:
	int flying_speed;
	int flying_time;	
};
