#include "Rational.h"
#include "Pair.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

Pair Rational::getpair() const
{
	return pair;
}

void Rational::setpair(Pair pair)
{
	this->pair = pair;
}

void Rational::setpair(int a, int b)
{
	Pair p;
	p.init(a, b);
	pair = p;
}

void Rational::init(int a, int b)
{
	setpair(a, b);
}


int Rational::add(Pair& m1, Pair m2)
{
	return m1.geta() * m2.getb() + m1.getb() * m2.geta(), m1.getb()* m2.getb();
}

int Rational::sub(Pair& m1, Pair m2)
{
	return m1.geta() * m2.getb() - m1.getb() * m2.geta(), m1.getb()* m2.getb();
}

int Rational::div(Pair& m1, Pair m2)
{
	return m1.geta() * m2.getb(), m1.getb() * m2.geta();
}