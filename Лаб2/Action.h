#pragma once
#ifndef ACTION_H
#define ACTION_H
#include "AString.h" 
using namespace std;

class Action
{
public:
	virtual ~Action() {};
	virtual void Operate(AString*) = 0;
	virtual const string& GetName() const = 0;
	Action();
protected:
	int GetDecimal(AString *pObj) const;
	void GetOct(AString *pObj) const;
	void GetHex(AString *pObj) const;
};
#endif 
