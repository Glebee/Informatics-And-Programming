#include "rotation.h"
#include <iostream>
using namespace std;
int nod(int num, int denum);
rotation::rotation()
{
	num = 0;
	denum = 0;
}
rotation::rotation(const rotation &c)
{
	num = c.num;
	denum = c.denum;
}
rotation::rotation(int _num, int _denum)
{
	num = _num;
	denum = _denum;
}
rotation::rotation(int _num)
{
	num = _num;
	denum = 1;
}
rotation::~rotation()
{
	num = 0;
	denum = 0;
}
void rotation::out()
{
	int nod;
	if (denum != 0)
	{
		cout << num << "/" << denum << endl;
	}
	else if (denum == 0)
	{
		cout << "uncorrect value" << endl;
	}
}
rotation& rotation::prisv(const rotation& c)
{
	(*this).num = c.num;
	denum = c.denum;
	return *this;
}
rotation rotation::operator+(const rotation& c)
{
	rotation res;
	if (denum != c.denum)
	{
		res.denum = denum * c.denum;
		res.num = num * c.denum;
		res.num += c.num * denum;
	}
	else if (denum == c.denum)
	{
		res.num = num + c.num;
		res.denum = denum;
	}
	int n = nod(res.num, res.denum);
	res.num /= n;
	res.denum /= n;
	return res;
}
rotation rotation::operator-(const rotation& c)
{
	rotation res;
	if (denum != c.denum)
	{
		res.denum = denum * c.denum;
		res.num = num * c.denum;
		res.num -= c.num * denum;
	}
	else if (denum == c.denum)
	{
		res.num = num - c.num;
		res.denum = denum;
	}
	int n = nod(res.num, res.denum);
	res.num /= n;
	res.denum /= n;
	return res;
}
rotation rotation::operator*(const rotation& c) {
	rotation res;
	res.num = num * c.num;
	res.denum = denum * c.denum;
	int n = nod(res.num, res.denum);
	res.num /= n;
	res.denum /= n;
	return res;
}
rotation rotation::operator/(const rotation& c) {
	rotation res;
	res.num = num * c.denum;
	res.denum = denum * c.num;
	int n = nod(res.num, res.denum);
	res.num /= n;
	res.denum /= n;
	return res;
}
ostream& operator<<(std::ostream& stream, const rotation& c) {
	stream << c.num<<"/";
	stream << c.denum;
	return stream;
}
std::istream& operator>>(std::istream& stream, rotation& c) {
	stream >> c.num>> c.denum;
	return stream;
}
int nod(int num, int denum)
{
	num = abs(num);
	denum = abs(denum);
	int o1 = 1, tmp;
	if (num < denum)
	{
		tmp = num;
		num = denum;
		denum = tmp;
	}
	while (o1 > 0)
	{
		o1 = num % denum;
		num = denum;
		denum = o1;
	}
	return num;
}