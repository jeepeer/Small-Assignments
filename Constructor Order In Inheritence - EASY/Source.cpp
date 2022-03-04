#include <iostream>

using namespace std;

class A
{
public:
	A()
	{
		std::cout << "constructor A called" << std::endl;
	}

	~A()
	{
		std::cout << "destructor A called" << std::endl;
	}
};

class B : public A
{
public:
	B()
	{
		std::cout << "constructor B called" << std::endl;
	}

	~B()
	{
		std::cout << "destructor B called" << std::endl;
	}
};

class C : public B
{
public:
	C()
	{
		std::cout << "constructor C called" << std::endl;
	}

	~C()
	{
		std::cout << "destructor C called" << std::endl;
	}
};

int main()
{
	A a;
	B b;
	C c;
}