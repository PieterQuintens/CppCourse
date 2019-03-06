#pragma once
#include <string>
class Person
{
private:
	std::string firstName;
	std::string lastName;
	int arbitraryNumber;

public:
	Person(std::string first, 
		std::string last, 
		int arbitrary);
	~Person();
	std::string GetName() const;
	int GetNumber() const { return arbitraryNumber; }
	void SetNumber(int number) { arbitraryNumber = number; }
	bool operator<(Person const& p) const;
	bool operator<(int i) const;
	friend bool operator<(int i, Person const& p);
};
bool operator<(int i, Person const& p);
