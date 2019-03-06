#pragma once
template <class T>
class Accumulator
{
private:
	T total;
public:
	Accumulator(T start) : total(start) {};
	T operator+=(T const& t) { return total = total + t; };
	T GetTotal() const { return total; }
};

template <>
class Accumulator<Person>
{
private:
	int total;
public:
	Accumulator(int start) : total(start) {};
	int operator+=(Person const& t) { return total = total + t.GetNumber(); };
	int GetTotal() const { return total; }
};