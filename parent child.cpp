#include <iostream>
#include <string>
using namespace std;

class A //base class
{
public:
	void parentfunction() //member function
	{
		cout <<"\nThis is parent\n ";
	}
};

class B: public A //class b is a derived class 
{
public:
	void childfunction() //member function
	{
		cout <<"\nThis is my Child B\n";
	}
};
int main()
{
	B b;
	B.parentfunction();
	B.childfunction();
}
	
