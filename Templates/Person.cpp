#include "Person.h"

using namespace std;

Person::Person(string first, string last, int arbitrary) :
	firstName(first), lastName(last), arbitraryNumber(arbitrary)
{
}

Person::~Person()
{
}

string Person::GetName() const
{
	return firstName + " " + lastName;
}


bool Person::operator<(Person const& p) const 
{
	return arbitraryNumber < p.arbitraryNumber;
}

bool Person::operator<(int i) const
{
	return arbitraryNumber < i;
}

bool operator<(int i, Person const& p) 
{
	return i < p.arbitraryNumber;
}