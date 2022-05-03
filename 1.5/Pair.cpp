#include "Pair.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void Pair::seta(int a)
{
	this->a = a;
}

void Pair::setb(int b)
{
	this->b = b;
}

void Pair::init(int a, int b)
{
	seta(a);
	setb(b);
}

int Pair :: geta()const
{
	return a;
}

int Pair:: getb()const
{
	return b;
}

void Pair::read()
{
	int a, b;
	cout << "Enter a - ";
	cin >> a;
	cout << "Enter b - ";
	cin >> b;
	
}

void Pair::display()const
{
	cout << tostring() << endl;
}

string Pair::tostring()const
{
	stringstream ss;
	ss << "" << a <<"," << b << "";
	return ss.str();
}

int Pair::sub(Pair& m1, Pair m2)
{
	return m1.geta() - m2.geta(),m1.getb() - m2.getb();
}

int Pair::multiply(Pair&m1,Pair m2)
{
	return m1.geta() * m2.geta(), m1.getb() * m2.getb();
}

bool Pair::equal(Pair& m1, Pair m2)
{
	return m1.geta() == m2.geta() && m1.getb() == m2.getb();
}
