#pragma once
#include <string>
#include "AString.h"
using namespace std;

class SymbStr :
	public AString
{
public:
	SymbStr(string _name) : name(_name) {};
	SymbStr(string _name, string _val) :name(_name), val(_val) {};
	const string& GetName() const{ return name; };
	const string& GetVal() const{ return val; };
	int GetSize() const{ return val.size(); };
private:
	string name;
	string val;
};

