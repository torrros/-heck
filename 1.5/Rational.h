#pragma once
#include "Pair.h"
using namespace std;
class Rational
{
private: 
	
	Pair pair;
	
public:
	
	Pair getpair() const;
	void setpair(int a, int b);
	void setpair(Pair pair);
	
	void init(int a, int b);
	

	int add(Pair&m1, Pair m2);
	int sub(Pair&m1, Pair m2);
	int div(Pair&m1, Pair m2);
	
};

