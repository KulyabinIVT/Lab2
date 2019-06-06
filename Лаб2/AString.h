#pragma once
#ifndef ASTRING_H
#define ASTRING_H
#include <string>
using namespace std;

class AString
{
public:

	AString();
	virtual ~AString() {};
	virtual const string& GetName() const = 0;
	virtual const string& GetVal() const = 0;	virtual int GetSize() const = 0;
};
#endif
