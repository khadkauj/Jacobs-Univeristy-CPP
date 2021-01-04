/*
CH-230-A
a13 p7.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <iostream>
#include <exception>
using namespace std;


// class exception {
// public:
//   exception () noexcept;
//   exception (const exception&) noexcept;
//   exception& operator= (const exception&) noexcept;
//   virtual ~exception();
//   virtual const char* what() const noexcept;
// };



//dervied class of base class exception
//which is by default described iby default
// It is also commented aboive for ease 
//of understanding
class OwnException: public exception {
public:
	OwnException(const string&);		//constructor with string param
	~OwnException();						//destructor
	const char* what() const noexcept;	//virtual what func

};

OwnException::OwnException(const string& n){}

OwnException::~OwnException(){}
//method to  retturn message
const char* OwnException::what() const noexcept{
	return "OwnException\n";
}

//ternary functions that call respectvie error msg
void function1(){
	throw 'a';
}

void  function2(){
	throw 12;
}

void function3(){
	throw true;
}

void function4(){
	throw OwnException("Default case exception");
}
//secondary func
void Function_call(char c){
	if (c == '1')
	{
		function1();
	}
	if (c == '2')
	{
		function2();
	}
	if (c == '3')
	{
		function3();
	}
	else
	{
		function4();
	}
}


int main(int argc, char const *argv[]){
	//try block
	try{
		//in parameter we can put '1', '2', '3' or any chars
		//for testing
		Function_call('z');
		// Function_call('1');
		// Function_call('2');
		// Function_call('3');
	}
	//catch block
	catch(const char a){
		cerr << "Caught in main: " << a << endl;
	}
	catch(const int n){
		cerr << "Caught in main: " << n << endl;
	}
	catch(const bool val){
		cerr << "Caught in main: " << val << endl;
	}
	catch(const OwnException& err){
		cerr << "Caught in main: " << err.what();
	}

	return 0;
}