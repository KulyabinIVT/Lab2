#pragma once
#include "AString.h"
#include <string>
using namespace std;
const string alph = "0123456789";

bool IsDecStrVal(string _str);

class DecString :
	public AString
{
public:
	~DecString();
	//DecString(string _name) : name(_name) {} 
	DecString(string _name, string _val) :name(_name), val(_val) {
		if (IsDecStrVal(_val))
			val = _val;
	};
	const string& GetName() const{ return name; } 
	const string& GetVal() const { return val; }
	int GetSize() const{ return val.size(); }
private:
	string name;
	string val;
};

