#pragma once
#include <iostream>
class rotation
{
public:
	rotation();
	rotation(const rotation &c);
	rotation(int _num, int _denum);
	rotation(int d);
	~rotation();
	void out();

	rotation& prisv(const rotation& c);
	rotation operator+(const rotation& c);
	rotation operator-(const rotation& c);
	rotation operator*(const rotation& c);
	rotation operator/(const rotation& c);
	friend std::ostream& operator<<(std::ostream& stream, const rotation& c);
	friend std::istream& operator>>(std::istream& stream, rotation& c);
private:
	int num;
	int denum;
};