#pragma once
#include "AString.h"
#include <string>
using namespace std;

class SymbString :
	public AString
{
public:
	SymbString();
	~SymbString();
	SymbString(string _name): name(_name) {}
	SymbString(string _name,string _val) :
		name(_name), val(_val) {}
	const string& GetName() const{ return name; }
	const string& GetVal() const{ return val; }
	int GetSlze() const{ return val.size(); }
private:
	string name;
	string val;
};

