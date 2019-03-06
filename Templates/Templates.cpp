// Templates.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Person.h"
#include "Accumulator.h"
#include <string>
using std::string;
using std::cout;
using std::endl;

int main()
{
	cout << "Templates:" << endl;
	Accumulator<int> integers(0);
	integers += 3;
	integers += 7;
	cout << integers.GetTotal() << endl;

	Accumulator<string> strings("");
	strings += "hello";
	strings += " world";
	cout << strings.GetTotal() << endl;

	Accumulator<Person> people(0);
	Person p1("Jef", "Klaxon", 12);
	Person p2("Jos", "Fietsbel", 23);
	people += p1;
	people += p2;
	cout << people.GetTotal() << endl << endl;

	cout << "References and pointers: " << endl;
	int a = 3;
	cout << "a is " << a << endl;
	int& rA = a;
	rA = 5;
	cout << "a is " << a << endl;

	Person Jef("Jef", "Klaxon", 234);
	Person& rJef = Jef;
	Jef.SetNumber(345);
	cout << "rJef: " << rJef.GetName() << " " << rJef.GetNumber() << endl;

	Person* pJef = &Jef;
	// verbose
	(*pJef).SetNumber(235);
	pJef->SetNumber(236);
	cout << "Jef: " << Jef.GetName() << " " << Jef.GetNumber() << endl;
	cout << "pJef " << pJef->GetName() << " " << pJef->GetNumber() << endl;

	// The following code throws an exception
	//int Pointer = 3;
	//int* badPointer = nullptr;
	//*badPointer = 3;
	//cout << *badPointer << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
