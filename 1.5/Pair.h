#pragma once
#include<string>
#include <sstream>
using namespace std;
class Pair
{
private:
	int a;
	int b;
public:
	int geta()const;
	int getb()const;

	void seta(int a);
	void setb(int b);
	
	void init (int a, int b);
	void display()const;
	void read();
	
	string tostring() const;

	int sub(Pair& m1, Pair m2);
	int multiply(Pair& m1, Pair m2);
	bool equal(Pair& m1, Pair m2);
};

